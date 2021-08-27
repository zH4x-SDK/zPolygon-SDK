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

// BlueprintGeneratedClass BP_PG_Character_Blue.BP_PG_Character_Blue_C
// 0x0008 (FullSize[0x0638] - InheritedSize[0x0630])
class ABP_PG_Character_Blue_C : public ABP_PG_Character_General_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0630(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PG_Character_Blue.BP_PG_Character_Blue_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void OnSetTeam_Event();
	void OnSetPlayerState_Event();
	void ExecuteUbergraph_BP_PG_Character_Blue(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
