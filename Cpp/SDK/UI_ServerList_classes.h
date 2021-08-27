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

// WidgetBlueprintGeneratedClass UI_ServerList.UI_ServerList_C
// 0x0080 (FullSize[0x02E0] - InheritedSize[0x0260])
class UUI_ServerList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            RotateRefreshButton;                                       // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                     Border_JoinServer_Background;                              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_JoinServer;                                         // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_Refresh;                                            // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_MapPreview;                                          // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  ScrollBox_ServerList;                                      // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_ServerInfo;                                        // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_ServerCurrentPlayerNumber;                       // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_ServerTotalPlayersNumber;                        // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FString                                     ServerMap;                                                 // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UVaRestRequestJSON*                          RequestServerPing;                                         // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_ServerInfo_C*>                    Servers;                                                   // 0x02C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UUI_ServerInfo_C*                            SelectedServer;                                            // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ServerList.UI_ServerList_C");
		return ptr;
	}



	void JoinServerHovered(bool IsHover);
	void OnPlayFabResponse_BD2973D548B7F64DD83E2E9B2D8B15E5(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void OnPlayFabResponse_B4DDA5C248B35DB4118C9E80A34AD65C(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void OnPlayFabResponse_738F3FDE459B6330367912B572961A6A(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void OnPlayFabResponse_9ACD67904F5F3ECC6486B0A9E6C35810(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void OnPlayFabResponse_10CB6463404A3C3214D6E8844F8844CC(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void OnPlayFabResponse_38A57A7D4F46F3CE2CDF9484E3332243(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void OnPlayFabResponse_8F36EB8A43A10DC98F7FFB8196B21934(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void Construct();
	void SearchServers();
	void BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void GetCurrentGames_Success(const struct FClientCurrentGamesResult& Result, class UObject* customData);
	void GetCurrentGames_Failure(const struct FPlayFabError& Error, class UObject* customData);
	void ServerSelected_Event(class UUI_ServerInfo_C* Server_Info);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_ServerList(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
