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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FunctionLibrary.BP_FunctionLibrary_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_FunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FunctionLibrary.BP_FunctionLibrary_C");
		return ptr;
	}



	void STATIC_GetGameInstance(class UObject* __WorldContext, class UBP_PG_GameInstance_C** MyGameIntance);
	void STATIC_GetGameModeBP_Game(class UObject* __WorldContext, class ABP_PG_GameMode_Game_C** MyGameMode);
	void STATIC_GetGameStateBP(class UObject* __WorldContext, class ABP_PG_GameState_Game_C** MyGameState);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
