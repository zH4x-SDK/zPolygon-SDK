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

// Function UI_Map.UI_Map_C.ConvertCharacterPositionToMap
struct UUI_Map_C_ConvertCharacterPositionToMap_Params
{
	float                                              X;                                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Map.UI_Map_C.AddOtherPlayerIcon
struct UUI_Map_C_AddOtherPlayerIcon_Params
{
	class APawn*                                       PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Map.UI_Map_C.AddOtherIcon
struct UUI_Map_C_AddOtherIcon_Params
{
	class AActor*                                      Owner;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Map.UI_Map_C.Construct
struct UUI_Map_C_Construct_Params
{
};

// Function UI_Map.UI_Map_C.SetMapPosition
struct UUI_Map_C_SetMapPosition_Params
{
};

// Function UI_Map.UI_Map_C.ExecuteUbergraph_UI_Map
struct UUI_Map_C_ExecuteUbergraph_UI_Map_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
