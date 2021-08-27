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

// WidgetBlueprintGeneratedClass UI_Premium_CrownsItem.UI_Premium_CrownsItem_C
// 0x010C (FullSize[0x036C] - InheritedSize[0x0260])
class UUI_Premium_CrownsItem_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     Border;                                                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     Border_Sale;                                               // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button;                                                    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_Icon;                                                // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_OldPrice;                                          // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_Count;                                           // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_ItemName;                                        // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_ItemPrice;                                       // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_ItemPrice_OldPrice;                              // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                                  ItemIcon;                                                  // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FText                                       DisplayName;                                               // 0x02B8(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FText                                       DisplayCount;                                              // 0x02D0(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FText                                       DisplayPrice;                                              // 0x02E8(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FString                                     ItemId;                                                    // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FString                                     Catalog;                                                   // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                Quantity;                                                  // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                Price;                                                     // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FString                                     OrdersID;                                                  // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               IsSale;                                                    // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_Y7FB[0x7];                                     // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OldPrice;                                                  // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FWidgetTransform                            CustomTransform;                                           // 0x0350(0x001C) (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Premium_CrownsItem.UI_Premium_CrownsItem_C");
		return ptr;
	}



	void OnPlayFabResponse_0E1A506D409F11A92E983DADEFAB5F90(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void OnPlayFabResponse_5D0DEFEB42E445781F6BEAB4872CBFF6(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void OnPlayFabResponse_BF5AE71E42CAEB97F1628F8331C5B43A(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void StartPurchase_Success(const struct FClientStartPurchaseResult& Result, class UObject* customData);
	void StartPurchase_Failure(const struct FPlayFabError& Error, class UObject* customData);
	void PayForPurchase_Success(const struct FClientPayForPurchaseResult& Result, class UObject* customData);
	void PayForPurchase_Failure(const struct FPlayFabError& Error, class UObject* customData);
	void ConfirmPurchase_Success(const struct FClientConfirmPurchaseResult& Result, class UObject* customData);
	void ConfirmPurchase_Failure(const struct FPlayFabError& Error, class UObject* customData);
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void MicroTxnAuthorizationResponse_Event(int AppID, const struct FString& OrderID, bool bAuthorized);
	void ExecuteUbergraph_UI_Premium_CrownsItem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
