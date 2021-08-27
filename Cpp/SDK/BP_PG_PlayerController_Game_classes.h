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

// BlueprintGeneratedClass BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C
// 0x0028 (FullSize[0x05C8] - InheritedSize[0x05A0])
class ABP_PG_PlayerController_Game_C : public APG_PlayerController_Game
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUI_GeneralGameScreen_C*                     UI_GeneralGameScreen;                                      // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_InteractionTime_C*                       UI_InteractionTime;                                        // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_DarkenScreen_C*                          UI_DarkenScreen;                                           // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_CaptureProcess_C*                        UI_CaptureProcess;                                         // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C");
		return ptr;
	}



	void CreateGeneralWidget();
	void HideInterface();
	void RemoveWidgets();
	void InpActEvt_Escape_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Scoreboard_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Scoreboard_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_ChatAll_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_ChatTeam_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_HideInterface_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_N_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void OpenScoreboard();
	void CloseScoreboard();
	void ReceiveBeginPlay();
	void DisplayMessageToChatEvent(const struct FChatMessage& Message);
	void StartInteractionEvent(float interactionTime);
	void StopInteractionEvent();
	void OnSetPawn_Event();
	void OnEndPlay_Event(class AActor* Actor, TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void NotifyPlayerKilledEvent(class APG_PlayerState_Game* killed, class APG_PlayerState_Game* killer, bool isHeadshot, bool isGrenade);
	void NotifyAddedGameScoreEvent(int addedScore, POLYGON_EAccrualTypeGameScore addGameScoreType, const struct FString& customString);
	void ExecuteUbergraph_BP_PG_PlayerController_Game(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
