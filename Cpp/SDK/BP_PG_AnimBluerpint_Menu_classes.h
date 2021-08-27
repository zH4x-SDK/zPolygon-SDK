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

// AnimBlueprintGeneratedClass BP_PG_AnimBluerpint_Menu.BP_PG_AnimBluerpint_Menu_C
// 0x0558 (FullSize[0x0810] - InheritedSize[0x02B8])
class UBP_PG_AnimBluerpint_Menu_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_BV3G[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x02C8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x02F8(0x0080)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x0378(0x0048)
	struct FAnimNode_HandIKRetargeting                 AnimGraphNode_HandIKRetargeting;                           // 0x03C0(0x0120)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x04E0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x0500(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x0520(0x0108)
	unsigned char                                      UnknownData_T2AW[0x8];                                     // 0x0628(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK;                                   // 0x0630(0x01E0)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_PG_AnimBluerpint_Menu.BP_PG_AnimBluerpint_Menu_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_BP_PG_AnimBluerpint_Menu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
