// Name: Polygon, Version: 0.3.13.76

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function UI_QuickMatchWidget.UI_QuickMatchWidget_C.GetServerWithMinPing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUI_ServerInfo_C*> ServersInfo                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UUI_ServerInfo_C*        ServerInfo                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QuickMatchWidget_C::GetServerWithMinPing(TArray<class UUI_ServerInfo_C*>* ServersInfo, class UUI_ServerInfo_C** ServerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickMatchWidget.UI_QuickMatchWidget_C.GetServerWithMinPing");

	UUI_QuickMatchWidget_C_GetServerWithMinPing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ServersInfo != nullptr)
		*ServersInfo = params.ServersInfo;
	if (ServerInfo != nullptr)
		*ServerInfo = params.ServerInfo;

}


// Function UI_QuickMatchWidget.UI_QuickMatchWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_QuickMatchWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickMatchWidget.UI_QuickMatchWidget_C.PreConstruct");

	UUI_QuickMatchWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickMatchWidget.UI_QuickMatchWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_QuickMatchWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickMatchWidget.UI_QuickMatchWidget_C.Construct");

	UUI_QuickMatchWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickMatchWidget.UI_QuickMatchWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_QuickMatchWidget_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickMatchWidget.UI_QuickMatchWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UUI_QuickMatchWidget_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickMatchWidget.UI_QuickMatchWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_QuickMatchWidget_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickMatchWidget.UI_QuickMatchWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_QuickMatchWidget_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickMatchWidget.UI_QuickMatchWidget_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_QuickMatchWidget_C::BndEvt__Button_Play_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickMatchWidget.UI_QuickMatchWidget_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_QuickMatchWidget_C_BndEvt__Button_Play_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickMatchWidget.UI_QuickMatchWidget_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_QuickMatchWidget_C::BndEvt__Button_Play_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickMatchWidget.UI_QuickMatchWidget_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UUI_QuickMatchWidget_C_BndEvt__Button_Play_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickMatchWidget.UI_QuickMatchWidget_C.BndEvt__Button_Create_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_QuickMatchWidget_C::BndEvt__Button_Create_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickMatchWidget.UI_QuickMatchWidget_C.BndEvt__Button_Create_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UUI_QuickMatchWidget_C_BndEvt__Button_Create_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickMatchWidget.UI_QuickMatchWidget_C.BndEvt__Button_Create_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_QuickMatchWidget_C::BndEvt__Button_Create_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickMatchWidget.UI_QuickMatchWidget_C.BndEvt__Button_Create_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UUI_QuickMatchWidget_C_BndEvt__Button_Create_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickMatchWidget.UI_QuickMatchWidget_C.BndEvt__Button_Create_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_QuickMatchWidget_C::BndEvt__Button_Create_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickMatchWidget.UI_QuickMatchWidget_C.BndEvt__Button_Create_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UUI_QuickMatchWidget_C_BndEvt__Button_Create_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickMatchWidget.UI_QuickMatchWidget_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_QuickMatchWidget_C::BndEvt__Button_Play_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickMatchWidget.UI_QuickMatchWidget_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UUI_QuickMatchWidget_C_BndEvt__Button_Play_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickMatchWidget.UI_QuickMatchWidget_C.ExecuteUbergraph_UI_QuickMatchWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QuickMatchWidget_C::ExecuteUbergraph_UI_QuickMatchWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickMatchWidget.UI_QuickMatchWidget_C.ExecuteUbergraph_UI_QuickMatchWidget");

	UUI_QuickMatchWidget_C_ExecuteUbergraph_UI_QuickMatchWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
