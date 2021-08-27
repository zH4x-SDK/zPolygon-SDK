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

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.GetRegionWithMinPing
struct UUI_GeneralMenuScreen_C_GetRegionWithMinPing_Params
{
	PlayFab_ERegion                                    Region;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.ParsePlayerInventory
struct UUI_GeneralMenuScreen_C_ParsePlayerInventory_Params
{
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.ParsePlayerProgress
struct UUI_GeneralMenuScreen_C_ParsePlayerProgress_Params
{
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.ActiveWidgetIndex
struct UUI_GeneralMenuScreen_C_ActiveWidgetIndex_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.OnPlayFabResponse_CD1474F547DE7281825556B434C839BA
struct UUI_GeneralMenuScreen_C_OnPlayFabResponse_CD1474F547DE7281825556B434C839BA_Params
{
	struct FPlayFabBaseModel                           response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               successful;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.OnPlayFabResponse_EADE0AC846565E30975953AB28B095E4
struct UUI_GeneralMenuScreen_C_OnPlayFabResponse_EADE0AC846565E30975953AB28B095E4_Params
{
	struct FPlayFabBaseModel                           response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               successful;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.Construct
struct UUI_GeneralMenuScreen_C_Construct_Params
{
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.PreConstruct
struct UUI_GeneralMenuScreen_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__UI_Button_ServerSearch_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
struct UUI_GeneralMenuScreen_C_BndEvt__UI_Button_ServerSearch_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params
{
	class UUI_Button_Line_C*                           Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__UI_Button_CreateServer_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
struct UUI_GeneralMenuScreen_C_BndEvt__UI_Button_CreateServer_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params
{
	class UUI_Button_Line_C*                           Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.OnPressed_Event
struct UUI_GeneralMenuScreen_C_OnPressed_Event_Params
{
	class UUI_Button_Line_C*                           Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_GeneralMenuScreen_C_BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__UI_Button_Shop_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
struct UUI_GeneralMenuScreen_C_BndEvt__UI_Button_Shop_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature_Params
{
	class UUI_Button_Line_C*                           Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__UI_Button_Soldier_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature
struct UUI_GeneralMenuScreen_C_BndEvt__UI_Button_Soldier_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature_Params
{
	class UUI_Button_Line_C*                           Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__Button_Progress_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UUI_GeneralMenuScreen_C_BndEvt__Button_Progress_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__Button_Settings_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UUI_GeneralMenuScreen_C_BndEvt__Button_Settings_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__UI_Options_K2Node_ComponentBoundEvent_7_ClickBackDelegate__DelegateSignature
struct UUI_GeneralMenuScreen_C_BndEvt__UI_Options_K2Node_ComponentBoundEvent_7_ClickBackDelegate__DelegateSignature_Params
{
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__UI_Button_Premium_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
struct UUI_GeneralMenuScreen_C_BndEvt__UI_Button_Premium_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params
{
	class UUI_Button_Line_C*                           Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__UI_Counter_PremiumCoin_K2Node_ComponentBoundEvent_9_OnClickDelegate__DelegateSignature
struct UUI_GeneralMenuScreen_C_BndEvt__UI_Counter_PremiumCoin_K2Node_ComponentBoundEvent_9_OnClickDelegate__DelegateSignature_Params
{
	class UUI_Counter_C*                               Counter;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__Button_BuyAccount_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
struct UUI_GeneralMenuScreen_C_BndEvt__Button_BuyAccount_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__Button_BuyAccount_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
struct UUI_GeneralMenuScreen_C_BndEvt__Button_BuyAccount_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.BndEvt__Button_BuyAccount_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
struct UUI_GeneralMenuScreen_C_BndEvt__Button_BuyAccount_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.OnUpdatePlayerCombinedInfo_Event
struct UUI_GeneralMenuScreen_C_OnUpdatePlayerCombinedInfo_Event_Params
{
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.StartMatchmaking
struct UUI_GeneralMenuScreen_C_StartMatchmaking_Params
{
	struct FString                                     LobbyId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.RequestRegionPing
struct UUI_GeneralMenuScreen_C_RequestRegionPing_Params
{
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.GetGameServerRegions_Success
struct UUI_GeneralMenuScreen_C_GetGameServerRegions_Success_Params
{
	struct FClientGameServerRegionsResult              Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.GetGameServerRegions_Failure
struct UUI_GeneralMenuScreen_C_GetGameServerRegions_Failure_Params
{
	struct FPlayFabError                               Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.OnRequestComplete_Event
struct UUI_GeneralMenuScreen_C_OnRequestComplete_Event_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.Matchmake_Success
struct UUI_GeneralMenuScreen_C_Matchmake_Success_Params
{
	struct FClientMatchmakeResult                      Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.Matchmake_False
struct UUI_GeneralMenuScreen_C_Matchmake_False_Params
{
	struct FPlayFabError                               Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.StopMatchmaking
struct UUI_GeneralMenuScreen_C_StopMatchmaking_Params
{
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.OnSetPlayerId_Event
struct UUI_GeneralMenuScreen_C_OnSetPlayerId_Event_Params
{
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.ExecuteUbergraph_UI_GeneralMenuScreen
struct UUI_GeneralMenuScreen_C_ExecuteUbergraph_UI_GeneralMenuScreen_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GeneralMenuScreen.UI_GeneralMenuScreen_C.OnChangeMatchmakingState__DelegateSignature
struct UUI_GeneralMenuScreen_C_OnChangeMatchmakingState__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
