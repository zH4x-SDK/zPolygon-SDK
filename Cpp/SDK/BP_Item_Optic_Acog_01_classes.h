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

// BlueprintGeneratedClass BP_Item_Optic_Acog_01.BP_Item_Optic_Acog_01_C
// 0x0010 (FullSize[0x02A8] - InheritedSize[0x0298])
class ABP_Item_Optic_Acog_01_C : public AItem_Module_Optic
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0298(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                                Timer_SetAimingMesh;                                       // 0x02A0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Item_Optic_Acog_01.BP_Item_Optic_Acog_01_C");
		return ptr;
	}



	void SetAimingMesh();
	void ToggleAiming(bool IsAiming);
	void ExecuteUbergraph_BP_Item_Optic_Acog_01(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
