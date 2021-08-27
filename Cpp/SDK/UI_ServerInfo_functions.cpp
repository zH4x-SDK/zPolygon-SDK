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

// Function UI_ServerInfo.UI_ServerInfo_C.GenerateTooltipForExperimentalMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UUI_ServerInfo_C::GenerateTooltipForExperimentalMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerInfo.UI_ServerInfo_C.GenerateTooltipForExperimentalMode");

	UUI_ServerInfo_C_GenerateTooltipForExperimentalMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_ServerInfo.UI_ServerInfo_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ServerInfo_C::SetIsSelected(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerInfo.UI_ServerInfo_C.SetIsSelected");

	UUI_ServerInfo_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerInfo.UI_ServerInfo_C.SetPing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Ping                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ServerInfo_C::SetPing(int Ping)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerInfo.UI_ServerInfo_C.SetPing");

	UUI_ServerInfo_C_SetPing_Params params;
	params.Ping = Ping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerInfo.UI_ServerInfo_C.SetServerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_ServerInfo_C::SetServerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerInfo.UI_ServerInfo_C.SetServerName");

	UUI_ServerInfo_C_SetServerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerInfo.UI_ServerInfo_C.SetServerMapName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_ServerInfo_C::SetServerMapName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerInfo.UI_ServerInfo_C.SetServerMapName");

	UUI_ServerInfo_C_SetServerMapName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerInfo.UI_ServerInfo_C.HoverButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hover_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ServerInfo_C::HoverButton(bool Hover_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerInfo.UI_ServerInfo_C.HoverButton");

	UUI_ServerInfo_C_HoverButton_Params params;
	params.Hover_ = Hover_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerInfo.UI_ServerInfo_C.BndEvt__Button_SelectServer_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_ServerInfo_C::BndEvt__Button_SelectServer_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerInfo.UI_ServerInfo_C.BndEvt__Button_SelectServer_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UUI_ServerInfo_C_BndEvt__Button_SelectServer_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerInfo.UI_ServerInfo_C.BndEvt__Button_SelectServer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_ServerInfo_C::BndEvt__Button_SelectServer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerInfo.UI_ServerInfo_C.BndEvt__Button_SelectServer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_ServerInfo_C_BndEvt__Button_SelectServer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerInfo.UI_ServerInfo_C.BndEvt__Button_SelectServer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_ServerInfo_C::BndEvt__Button_SelectServer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerInfo.UI_ServerInfo_C.BndEvt__Button_SelectServer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_ServerInfo_C_BndEvt__Button_SelectServer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerInfo.UI_ServerInfo_C.BndEvt__Button_Connect_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_ServerInfo_C::BndEvt__Button_Connect_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerInfo.UI_ServerInfo_C.BndEvt__Button_Connect_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UUI_ServerInfo_C_BndEvt__Button_Connect_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerInfo.UI_ServerInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_ServerInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerInfo.UI_ServerInfo_C.Construct");

	UUI_ServerInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerInfo.UI_ServerInfo_C.ConnectToServer
// (BlueprintCallable, BlueprintEvent)
void UUI_ServerInfo_C::ConnectToServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerInfo.UI_ServerInfo_C.ConnectToServer");

	UUI_ServerInfo_C_ConnectToServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerInfo.UI_ServerInfo_C.ExecuteUbergraph_UI_ServerInfo
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ServerInfo_C::ExecuteUbergraph_UI_ServerInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerInfo.UI_ServerInfo_C.ExecuteUbergraph_UI_ServerInfo");

	UUI_ServerInfo_C_ExecuteUbergraph_UI_ServerInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ServerInfo.UI_ServerInfo_C.ServerSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ServerInfo_C*        Server_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ServerInfo_C::ServerSelected__DelegateSignature(class UUI_ServerInfo_C* Server_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerInfo.UI_ServerInfo_C.ServerSelected__DelegateSignature");

	UUI_ServerInfo_C_ServerSelected__DelegateSignature_Params params;
	params.Server_Info = Server_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
