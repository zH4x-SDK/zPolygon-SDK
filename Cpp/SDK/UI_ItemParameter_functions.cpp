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

// Function UI_ItemParameter.UI_ItemParameter_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ItemParameter_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemParameter.UI_ItemParameter_C.PreConstruct");

	UUI_ItemParameter_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ItemParameter.UI_ItemParameter_C.SetNewParameter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewParameter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ItemParameter_C::SetNewParameter(float NewParameter)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemParameter.UI_ItemParameter_C.SetNewParameter");

	UUI_ItemParameter_C_SetNewParameter_Params params;
	params.NewParameter = NewParameter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ItemParameter.UI_ItemParameter_C.ExecuteUbergraph_UI_ItemParameter
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ItemParameter_C::ExecuteUbergraph_UI_ItemParameter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemParameter.UI_ItemParameter_C.ExecuteUbergraph_UI_ItemParameter");

	UUI_ItemParameter_C_ExecuteUbergraph_UI_ItemParameter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
