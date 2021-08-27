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

// Function UI_Shop_WeaponInfo.UI_Shop_WeaponInfo_C.SetNewWeaponInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  WeaponClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Shop_WeaponInfo_C::SetNewWeaponInfo(class UClass* WeaponClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Shop_WeaponInfo.UI_Shop_WeaponInfo_C.SetNewWeaponInfo");

	UUI_Shop_WeaponInfo_C_SetNewWeaponInfo_Params params;
	params.WeaponClass = WeaponClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
