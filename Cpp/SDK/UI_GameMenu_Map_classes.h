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

// WidgetBlueprintGeneratedClass UI_GameMenu_Map.UI_GameMenu_Map_C
// 0x00E0 (FullSize[0x0340] - InheritedSize[0x0260])
class UUI_GameMenu_Map_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image_Map;                                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Lines_Map;                                                 // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      LinesRainbow_Map;                                          // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    MapOverlay;                                                // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControlPointMarker_C*                    UI_ControlPointMarker_A;                                   // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControlPointMarker_C*                    UI_ControlPointMarker_B;                                   // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControlPointMarker_C*                    UI_ControlPointMarker_C;                                   // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControlPointMarker_C*                    UI_ControlPointMarker_D;                                   // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControlPointMarker_C*                    UI_ControlPointMarker_E;                                   // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControlPointMarker_C*                    UI_ControlPointMarker_F;                                   // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameMenu_Map_SpawnSelect_C*              UI_SpawnSelect;                                            // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_TeamBaseMarker_C*                        UI_TeamBaseMarker_Blue;                                    // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_TeamBaseMarker_C*                        UI_TeamBaseMarker_Red;                                     // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	POLYGON_EControlPoint                              SelectedSpawnPoint;                                        // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PXGO[0x7];                                     // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMapInfo                                    MapInfo;                                                   // 0x02D8(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GameMenu_Map.UI_GameMenu_Map_C");
		return ptr;
	}



	struct FVector2D ConvertWorldPositionToMap(class AActor* Actor);
	void SetMapInfo();
	void SelectNewSpawnPoint(POLYGON_EControlPoint SpawnPoint);
	void AddPlayerIcon(class APawn* PlayerCharacter);
	void SetControlPointsPosition();
	void Get_Team_Base_by_Type(POLYGON_ETeam Type, class UUI_TeamBaseMarker_C** Marker);
	void GetControlPointMarkerByType(POLYGON_EControlPoint ControlPointType, class UUI_ControlPointMarker_C** Marker);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__UI_ControlPointMarker_A_K2Node_ComponentBoundEvent_4_SelectAsSpawnPointDelegate__DelegateSignature(POLYGON_EControlPoint Point);
	void BndEvt__UI_ControlPointMarker_B_K2Node_ComponentBoundEvent_5_SelectAsSpawnPointDelegate__DelegateSignature(POLYGON_EControlPoint Point);
	void BndEvt__UI_ControlPointMarker_C_K2Node_ComponentBoundEvent_6_SelectAsSpawnPointDelegate__DelegateSignature(POLYGON_EControlPoint Point);
	void BndEvt__UI_ControlPointMarker_D_K2Node_ComponentBoundEvent_7_SelectAsSpawnPointDelegate__DelegateSignature(POLYGON_EControlPoint Point);
	void BndEvt__UI_ControlPointMarker_E_K2Node_ComponentBoundEvent_8_SelectAsSpawnPointDelegate__DelegateSignature(POLYGON_EControlPoint Point);
	void BndEvt__UI_ControlPointMarker_F_K2Node_ComponentBoundEvent_9_SelectAsSpawnPointDelegate__DelegateSignature(POLYGON_EControlPoint Point);
	void BndEvt__UI_TeamBaseMarker_Blue_K2Node_ComponentBoundEvent_10_SelectAsSpawnPointDelegate__DelegateSignature(POLYGON_EControlPoint Point);
	void BndEvt__UI_TeamBaseMarker_Red_K2Node_ComponentBoundEvent_11_SelectAsSpawnPointDelegate__DelegateSignature(POLYGON_EControlPoint Point);
	void OnSetTeam_Event();
	void ExecuteUbergraph_UI_GameMenu_Map(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
