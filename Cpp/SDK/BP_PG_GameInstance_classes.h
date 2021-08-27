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

// BlueprintGeneratedClass BP_PG_GameInstance.BP_PG_GameInstance_C
// 0x0008 (FullSize[0x01B8] - InheritedSize[0x01B0])
class UBP_PG_GameInstance_C : public UPG_GameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PG_GameInstance.BP_PG_GameInstance_C");
		return ptr;
	}



	void ReceiveInit();
	void ExecuteUbergraph_BP_PG_GameInstance(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
