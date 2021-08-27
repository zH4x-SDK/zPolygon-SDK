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

// BlueprintGeneratedClass BP_PG_PlayerController_Menu.BP_PG_PlayerController_Menu_C
// 0x0020 (FullSize[0x05C0] - InheritedSize[0x05A0])
class ABP_PG_PlayerController_Menu_C : public APG_PlayerController_Menu
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUI_GeneralMenuScreen_C*                     UI_GeneralMenuScreen;                                      // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MenuCharacter_C*                         MenuCharacter;                                             // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_ErrorMessage_C*                          UI_ErrorMessage;                                           // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PG_PlayerController_Menu.BP_PG_PlayerController_Menu_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ShowError(const struct FText& ErrorMessage, const struct FText& ErrorDetails);
	void ExecuteUbergraph_BP_PG_PlayerController_Menu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
