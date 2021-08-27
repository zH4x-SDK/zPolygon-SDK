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

// WidgetBlueprintGeneratedClass UI_GameMenu_Map_SpawnSelect.UI_GameMenu_Map_SpawnSelect_C
// 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
class UUI_GameMenu_Map_SpawnSelect_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector2D                                   NewPosition;                                               // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GameMenu_Map_SpawnSelect.UI_GameMenu_Map_SpawnSelect_C");
		return ptr;
	}



	void SetNewPosition(const struct FVector2D& NewPosition);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_GameMenu_Map_SpawnSelect(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
