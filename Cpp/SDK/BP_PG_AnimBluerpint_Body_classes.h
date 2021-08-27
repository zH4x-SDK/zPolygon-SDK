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

// AnimBlueprintGeneratedClass BP_PG_AnimBluerpint_Body.BP_PG_AnimBluerpint_Body_C
// 0x4BA7 (FullSize[0x4E5F] - InheritedSize[0x02B8])
class UBP_PG_AnimBluerpint_Body_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_D4LT[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3;                                      // 0x02C8(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18;                         // 0x02F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17;                         // 0x0320(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16;                         // 0x0348(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                         // 0x0370(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6;                          // 0x0398(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_11;                         // 0x0480(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_11;                        // 0x0540(0x0050)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_16;                              // 0x0590(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_10;                         // 0x05C0(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_10;                        // 0x0680(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x06D0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_15;                              // 0x0750(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8;                              // 0x0780(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_14;                              // 0x0830(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                         // 0x0860(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                         // 0x0888(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                         // 0x08B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                         // 0x08D8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                         // 0x0900(0x0028)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_9;                         // 0x0928(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_8;                         // 0x0978(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9;                          // 0x09C8(0x00C0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5;                          // 0x0A88(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13;                              // 0x0B70(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                          // 0x0BA0(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8;                          // 0x0C88(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7;                         // 0x0D48(0x0050)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_12;                              // 0x0D98(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7;                          // 0x0DC8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x0E88(0x0080)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_6;                         // 0x0F08(0x0050)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11;                              // 0x0F58(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7;                              // 0x0F88(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_10;                              // 0x1038(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6;                              // 0x1068(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                               // 0x1118(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5;                              // 0x1148(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3;                                      // 0x11F8(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_13;                    // 0x1240(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_13;                    // 0x1260(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_11;                               // 0x1280(0x0108)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5;                            // 0x1388(0x0158)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_10;                               // 0x14E0(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_12;                    // 0x15E8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_12;                    // 0x1608(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9;                                // 0x1628(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_11;                    // 0x1730(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_11;                    // 0x1750(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                           // 0x1770(0x00A0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_6;                                 // 0x1810(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_5;                                 // 0x19F0(0x01E0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_10;                    // 0x1BD0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_10;                    // 0x1BF0(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4;                            // 0x1C10(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_11;                            // 0x1D68(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_10;                            // 0x1D90(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9;                             // 0x1DB8(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                           // 0x1DE0(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8;                             // 0x1E80(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9;                     // 0x1EA8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9;                     // 0x1EC8(0x0020)
	unsigned char                                      UnknownData_U6SH[0x8];                                     // 0x1EE8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_4;                                 // 0x1EF0(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_3;                                 // 0x20D0(0x01E0)
	struct FAnimNode_HandIKRetargeting                 AnimGraphNode_HandIKRetargeting_3;                         // 0x22B0(0x0120)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8;                     // 0x23D0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8;                     // 0x23F0(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8;                                // 0x2410(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7;                                // 0x2518(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_Root_2;                                      // 0x2620(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                          // 0x2650(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                          // 0x2678(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                          // 0x26A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                          // 0x26C8(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                          // 0x26F0(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6;                          // 0x27D8(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_5;                         // 0x2898(0x0050)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                               // 0x28E8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5;                          // 0x2918(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_4;                         // 0x29D8(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x2A28(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                               // 0x2AA8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4;                              // 0x2AD8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                               // 0x2B88(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x2BB8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x2BE0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x2C08(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x2C30(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x2C58(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4;                          // 0x2C80(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_3;                         // 0x2D40(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                          // 0x2D90(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                               // 0x2E78(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                            // 0x2EA8(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                          // 0x2F90(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_2;                         // 0x3050(0x0050)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x30A0(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                          // 0x30D0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x3190(0x0080)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator;                           // 0x3210(0x0050)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x3260(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3;                              // 0x3290(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x3340(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                              // 0x3370(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x3420(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x3450(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                           // 0x3500(0x00A0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7;                     // 0x35A0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7;                     // 0x35C0(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                           // 0x35E0(0x00A0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                      // 0x3680(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6;                     // 0x36C8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6;                                // 0x36E8(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6;                     // 0x37F0(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x3810(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                            // 0x38B0(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7;                             // 0x3A08(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5;                     // 0x3A30(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5;                     // 0x3A50(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                             // 0x3A70(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                                // 0x3A98(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4;                     // 0x3BA0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4;                     // 0x3BC0(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                                // 0x3BE0(0x0108)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                            // 0x3CE8(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                             // 0x3E40(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                             // 0x3E68(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x3E90(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                                // 0x3EB8(0x0108)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_2;                                 // 0x3FC0(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK;                                   // 0x41A0(0x01E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                     // 0x4380(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                     // 0x43A0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x43C0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x43E0(0x0020)
	struct FAnimNode_HandIKRetargeting                 AnimGraphNode_HandIKRetargeting_2;                         // 0x4400(0x0120)
	struct FAnimNode_HandIKRetargeting                 AnimGraphNode_HandIKRetargeting;                           // 0x4520(0x0120)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x4640(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x4660(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                                // 0x4680(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x4788(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x4890(0x0030)
	struct FAnimNode_LinkedAnimLayer                   AnimGraphNode_LinkedAnimLayer_2;                           // 0x48C0(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                             // 0x4970(0x00B0)
	struct FAnimNode_LinkedAnimLayer                   AnimGraphNode_LinkedAnimLayer;                             // 0x4A20(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                            // 0x4AD0(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x4B90(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x4BD8(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x4D30(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x4D58(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x4D80(0x00A0)
	class ABP_PG_Character_General_C*                  Character;                                                 // 0x4E20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Current_Weapon_Class;                                      // 0x4E28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveSpeed;                                                 // 0x4E30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveDirection;                                             // 0x4E34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimDeltaTime;                                             // 0x4E38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CameraPitch;                                               // 0x4E3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAir;                                                     // 0x4E40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsCrouched;                                                // 0x4E41(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsAiming;                                                  // 0x4E42(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QV6R[0x1];                                     // 0x4E43(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WeaponRecoilAlpha_Backward;                                // 0x4E44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WeaponRecoilAlpha_YawRoll;                                 // 0x4E48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     WeaponAimPosition;                                         // 0x4E4C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TiltBody;                                                  // 0x4E58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WeaponIsDown;                                              // 0x4E5C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsDead;                                                    // 0x4E5D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSprinting;                                               // 0x4E5E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_PG_AnimBluerpint_Body.BP_PG_AnimBluerpint_Body_C");
		return ptr;
	}



	void Pistol(struct FPoseLink* Pistol);
	void Rifle(struct FPoseLink* Rifle);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void FootStep();
	struct FVector CalculateWeaponAimPosition();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_TransitionResult_74F028D547839C82B37D349806DFD1C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_TransitionResult_B2D8CB1A4EE971AA11B87A9BECBA1489();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_BlendListByEnum_624EC1604A8C7535E5E936B5892E280B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_ModifyBone_3E47825B4C24FD0F63091A8DF89701F5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_ModifyBone_02FCAFD34F0ECABEBEB767B0DF4F81B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_ModifyBone_0ECAD4134B93A24988AAB7A04A3C6A09();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_ModifyBone_C21B4C764C42B932FAAAFFA0AEA81A24();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_ModifyBone_8F7FD22148DC73DC98AE7B808E7C4B33();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_ModifyBone_E3C4A658417E40D1141B48B1132CC4A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_ModifyBone_254314F74131FC5A859548853EB6497C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_ModifyBone_3C5BD8B04ABF3EF601AB69A26FACC147();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_SequenceEvaluator_20BE4E6F46BFA4812B726D9D87267119();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_SequenceEvaluator_699A03344FD27051BA99B6B743BAB17C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_SequenceEvaluator_1B47888E40E04734281DC1BF74290F9E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_TransitionResult_73515F914209BDEBA61DEB87A6581BD6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_TransitionResult_7091672545B6B5EDBB1AF9B76DEAC5F1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_TransitionResult_0C6D11F9478C2CCA8D2B89AE302BC48F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_TransitionResult_1738CE6A4556CAC06CEDF2AC995649C2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_SequenceEvaluator_C6B34994416FB5C4153AEE9DDBB3656B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_SequenceEvaluator_45C76CD04FD592D6D9663F8806F3997A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_TransitionResult_9D154E244433268F1FE9FA8B6C11E767();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_TransitionResult_7D9A87CD4139DE545FB29AB254A628E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_SequenceEvaluator_AD8743C5445D626593CC2B94B08E96E6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_SequenceEvaluator_47C1FB124BA8D7290D0BC5887AB7B32A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_SequenceEvaluator_46C1ECDE434330FC1817D3B3EFB3B0DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_SequenceEvaluator_4A44D57149ED502BBD357090319DE06D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_TransitionResult_8A9C2D3340D831EFB357FCAD8E2A5455();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_TransitionResult_33D3CA0B4E160CD17BF28BB9C0BE23F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_TransitionResult_0D0D0BE144386DC36B1543AEC8D22E88();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_TransitionResult_3E2D3EB94E5D7A6EC9CA5A85B8DA5317();
	void AnimNotify_FootStep();
	void AnimNotify_ThrowGrenade();
	void AnimNotify_Pistol_Draw();
	void AnimNotify_Weapon_Draw();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_SequenceEvaluator_E5034F484E375AFE827350BD6D947F0F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_PG_AnimBluerpint_Body_AnimGraphNode_SequenceEvaluator_0B8059724B94E469E45888A975611E4F();
	void OnSetCurrentWeapon_Event();
	void ExecuteUbergraph_BP_PG_AnimBluerpint_Body(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
