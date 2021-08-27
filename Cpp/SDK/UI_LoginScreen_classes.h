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

// WidgetBlueprintGeneratedClass UI_LoginScreen.UI_LoginScreen_C
// 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
class UUI_LoginScreen_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_PG_PlayerController_Menu_C*              PlayerController;                                          // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PG_PlayerState_Menu_C*                   PlayerState;                                               // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_LoginScreen.UI_LoginScreen_C");
		return ptr;
	}



	void ConstructRequestPlayerCombinedInfo(class UPlayFabJsonObject** Request);
	void ShowErrorMessage(const struct FPlayFabError& PlayFabError);
	void OnPlayFabResponse_C212664541185E46F64DD1B5C3B4F97F(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void OnPlayFabResponse_65C9D32C43B0E62996B765AC298DBA20(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void OnPlayFabResponse_9D53D0BB48321AF2818524814BD8FB06(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void OnPlayFabResponse_DA74F5AB45E383FF5D542A96BD744E9E(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void LoginWithSteam_Success(const struct FClientLoginResult& Result, class UObject* customData);
	void LoginWithSteam_Failure(const struct FPlayFabError& Error, class UObject* customData);
	void Construct();
	void LoginWithSteam();
	void LoginWithCustomID();
	void LoginWithCustomID_Success(const struct FClientLoginResult& Result, class UObject* customData);
	void LoginWithCustomID_Failure(const struct FPlayFabError& Error, class UObject* customData);
	void RequestPlayerCombinedInfo();
	void Login();
	void GetPlayerCombinedInfo_Success(const struct FClientGetPlayerCombinedInfoResult& Result, class UObject* customData);
	void GetPlayerCombinedInfo_Failure(const struct FPlayFabError& Error, class UObject* customData);
	void UpdateUserTitleDisplayName_Success(const struct FClientUpdateUserTitleDisplayNameResult& Result, class UObject* customData);
	void UpdateUserTitleDisplayName_Failure(const struct FPlayFabError& Error, class UObject* customData);
	void ExecuteUbergraph_UI_LoginScreen(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
