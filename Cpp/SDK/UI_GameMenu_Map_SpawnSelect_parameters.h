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

// Function UI_GameMenu_Map_SpawnSelect.UI_GameMenu_Map_SpawnSelect_C.SetNewPosition
struct UUI_GameMenu_Map_SpawnSelect_C_SetNewPosition_Params
{
	struct FVector2D                                   NewPosition;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameMenu_Map_SpawnSelect.UI_GameMenu_Map_SpawnSelect_C.Tick
struct UUI_GameMenu_Map_SpawnSelect_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameMenu_Map_SpawnSelect.UI_GameMenu_Map_SpawnSelect_C.ExecuteUbergraph_UI_GameMenu_Map_SpawnSelect
struct UUI_GameMenu_Map_SpawnSelect_C_ExecuteUbergraph_UI_GameMenu_Map_SpawnSelect_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
