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

// BlueprintGeneratedClass BP_Item_Rifle_ScarH.BP_Item_Rifle_ScarH_C
// 0x0018 (FullSize[0x03F8] - InheritedSize[0x03E0])
class ABP_Item_Rifle_ScarH_C : public AItem_Weapon_Rifle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Aim_B;                                                     // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Aim_A;                                                     // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Item_Rifle_ScarH.BP_Item_Rifle_ScarH_C");
		return ptr;
	}



	void SetSight();
	void ReceiveBeginPlay();
	void OnSetWeaponModules_Event();
	void ExecuteUbergraph_BP_Item_Rifle_ScarH(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
