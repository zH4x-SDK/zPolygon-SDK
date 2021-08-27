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

// AnimBlueprintGeneratedClass BP_PG_AnimBluerpint_Arms.BP_PG_AnimBluerpint_Arms_C
// 0x46D5 (FullSize[0x498D] - InheritedSize[0x02B8])
class UBP_PG_AnimBluerpint_Arms_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_50V0[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3;                                      // 0x02C8(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18;                         // 0x02F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17;                         // 0x0320(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16;                         // 0x0348(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                         // 0x0370(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                            // 0x0398(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_11;                         // 0x0418(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_11;                        // 0x04D8(0x0050)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_16;                              // 0x0528(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_10;                         // 0x0558(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_10;                        // 0x0618(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                            // 0x0668(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_15;                              // 0x06E8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8;                              // 0x0718(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_14;                              // 0x07C8(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                         // 0x07F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                         // 0x0820(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                         // 0x0848(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                         // 0x0870(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                         // 0x0898(0x0028)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_9;                         // 0x08C0(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_8;                         // 0x0910(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9;                          // 0x0960(0x00C0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                          // 0x0A20(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13;                              // 0x0B08(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                          // 0x0B38(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8;                          // 0x0C20(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7;                         // 0x0CE0(0x0050)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_12;                              // 0x0D30(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7;                          // 0x0D60(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x0E20(0x0080)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_6;                         // 0x0EA0(0x0050)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11;                              // 0x0EF0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7;                              // 0x0F20(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_10;                              // 0x0FD0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6;                              // 0x1000(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                               // 0x10B0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5;                              // 0x10E0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3;                                      // 0x1190(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_13;                    // 0x11D8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_13;                    // 0x11F8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7;                                // 0x1218(0x0108)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5;                            // 0x1320(0x0158)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6;                                // 0x1478(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_12;                    // 0x1580(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_12;                    // 0x15A0(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                                // 0x15C0(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_11;                    // 0x16C8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_11;                    // 0x16E8(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                           // 0x1708(0x00A0)
	unsigned char                                      UnknownData_2286[0x8];                                     // 0x17A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_6;                                 // 0x17B0(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_5;                                 // 0x1990(0x01E0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_10;                    // 0x1B70(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_10;                    // 0x1B90(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4;                            // 0x1BB0(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_11;                            // 0x1D08(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_10;                            // 0x1D30(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9;                             // 0x1D58(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                           // 0x1D80(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8;                             // 0x1E20(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9;                     // 0x1E48(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9;                     // 0x1E68(0x0020)
	unsigned char                                      UnknownData_CFZ1[0x8];                                     // 0x1E88(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_4;                                 // 0x1E90(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_3;                                 // 0x2070(0x01E0)
	struct FAnimNode_HandIKRetargeting                 AnimGraphNode_HandIKRetargeting_3;                         // 0x2250(0x0120)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8;                     // 0x2370(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8;                     // 0x2390(0x0020)
	struct FAnimNode_Root                              AnimGraphNode_Root_2;                                      // 0x23B0(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                          // 0x23E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                          // 0x2408(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                          // 0x2430(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                          // 0x2458(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x2480(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6;                          // 0x2500(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_5;                         // 0x25C0(0x0050)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                               // 0x2610(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5;                          // 0x2640(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_4;                         // 0x2700(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x2750(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                               // 0x27D0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4;                              // 0x2800(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                               // 0x28B0(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x28E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x2908(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x2930(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x2958(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x2980(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4;                          // 0x29A8(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_3;                         // 0x2A68(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                          // 0x2AB8(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                               // 0x2BA0(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                            // 0x2BD0(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                          // 0x2CB8(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_2;                         // 0x2D78(0x0050)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x2DC8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                          // 0x2DF8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x2EB8(0x0080)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator;                           // 0x2F38(0x0050)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x2F88(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3;                              // 0x2FB8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x3068(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                              // 0x3098(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x3148(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x3178(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                           // 0x3228(0x00A0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7;                     // 0x32C8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7;                     // 0x32E8(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                           // 0x3308(0x00A0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                      // 0x33A8(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6;                     // 0x33F0(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                                // 0x3410(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6;                     // 0x3518(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x3538(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                            // 0x35D8(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7;                             // 0x3730(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5;                     // 0x3758(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5;                     // 0x3778(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                             // 0x3798(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                                // 0x37C0(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4;                     // 0x38C8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4;                     // 0x38E8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                                // 0x3908(0x0108)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                            // 0x3A10(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                             // 0x3B68(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                             // 0x3B90(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x3BB8(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x3BE0(0x0108)
	unsigned char                                      UnknownData_4CWA[0x8];                                     // 0x3CE8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_2;                                 // 0x3CF0(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK;                                   // 0x3ED0(0x01E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                     // 0x40B0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                     // 0x40D0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x40F0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x4110(0x0020)
	struct FAnimNode_HandIKRetargeting                 AnimGraphNode_HandIKRetargeting_2;                         // 0x4130(0x0120)
	struct FAnimNode_HandIKRetargeting                 AnimGraphNode_HandIKRetargeting;                           // 0x4250(0x0120)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x4370(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x4390(0x0020)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x43B0(0x0030)
	struct FAnimNode_LinkedAnimLayer                   AnimGraphNode_LinkedAnimLayer_2;                           // 0x43E0(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                             // 0x4490(0x00B0)
	struct FAnimNode_LinkedAnimLayer                   AnimGraphNode_LinkedAnimLayer;                             // 0x4540(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                            // 0x45F0(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x46B0(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x46F8(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x4850(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x4878(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x48A0(0x00A0)
	class ABP_PG_Character_General_C*                  Character;                                                 // 0x4940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Current_Weapon_Class;                                      // 0x4948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveDirection;                                             // 0x4950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimDeltaTime;                                             // 0x4954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveSpeed;                                                 // 0x4958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   MouseTurnRate;                                             // 0x495C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAir;                                                     // 0x4964(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsCrouched;                                                // 0x4965(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5RBU[0x2];                                     // 0x4966(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WeaponRecoilAlpha_Backward;                                // 0x4968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WeaponRecoilAlpha_YawRoll;                                 // 0x496C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     WeaponAimPosition;                                         // 0x4970(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WeaponIsDown;                                              // 0x497C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSprinting;                                               // 0x497D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsDead;                                                    // 0x497E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CD1I[0x1];                                     // 0x497F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    WeaponRotation;                                            // 0x4980(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsAiming;                                                  // 0x498C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_PG_AnimBluerpint_Arms.BP_PG_AnimBluerpint_Arms_C");
		return ptr;
	}



	void Pistol(struct FPoseLink* Pistol);
	void Rifle(struct FPoseLink* Rifle);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void FootStep();
	void CalculateWeaponAimPosition();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_BlendListByEnum_D6D1E8A3420246AA5BBD15B1BA8B447A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_ModifyBone_BC6AF02242772052179FE58BE9ABEB97();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_ModifyBone_207AF9CF48787F2BF0B4E0940815002A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_ModifyBone_322D060348DAB5E3C5CF48A978F1ED10();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_ModifyBone_678A173348651DF6DCDFD5ACAAFE3F5B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_ModifyBone_214BE36048A9C40F4F73E7B9C773E29C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_ModifyBone_F76B2DA5443D16D01654A5BF4886C4E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_SequenceEvaluator_554C01CF4E51B8EAEE9013BDBC3B9DEE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_SequenceEvaluator_01DB11C249DAA3D1B9D37A94E5A36661();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_SequenceEvaluator_521E7E244E084F97BC47CE8B59F5C8FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_TransitionResult_C47270964AA281FC1685CFA552016266();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_TransitionResult_0A29DBF7418ED4B309D59996DB9BDF1F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_TransitionResult_CBEB09F44A3AEAE2CEBFE78BD2929AC4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_TransitionResult_D1FCBE604CB80ADB6B21C28AA1234D5A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_SequenceEvaluator_DB623B1C462AC05780A37491906F6267();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_SequenceEvaluator_264E6CDE41EE9285446749BB0FC6CD30();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_TransitionResult_D8723B3E4D200C19D936CF88C250F825();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_TransitionResult_4B29B84B4F8F3E3F7F202C97237168E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_SequenceEvaluator_03309A04491030DFF1F092B8D77085E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_SequenceEvaluator_929B43484B847F81559986877D70385B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_SequenceEvaluator_C83C1976493C33A841CD22B2089B0690();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_SequenceEvaluator_051EB7F4498E17927E308B925B207EA8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_TransitionResult_701B3AE146AA86A9B47DAC92EF568234();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_TransitionResult_65B1CE02411EB4F37FDAEE9E8021174A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_TransitionResult_5435825841D8E787A36C358D48E4BC05();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_TransitionResult_50660D35436DCF86FA27CAA23096670D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_SequenceEvaluator_DF084A7B42BF05B1C5A937AEEA51589F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_SequenceEvaluator_59D711B94C6A75B1B2EE5CA5EC1E02B0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_TransitionResult_DAAE5E114AD2EE44B2F1DB9BE712FBE8();
	void AnimNotify_FootStep();
	void AnimNotify_ThrowGrenade();
	void AnimNotify_Pistol_Draw();
	void AnimNotify_Weapon_Draw();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Arms_AnimGraphNode_TransitionResult_3C3B0C524EB70C0D2F60529CCAF382EE();
	void OnSetCurrentWeapon_Event();
	void ExecuteUbergraph_BP_PG_AnimBluerpint_Arms(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
