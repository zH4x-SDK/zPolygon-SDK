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

// WidgetBlueprintGeneratedClass UI_Map_TeamBaseMarker.UI_Map_TeamBaseMarker_C
// 0x0014 (FullSize[0x0274] - InheritedSize[0x0260])
class UUI_Map_TeamBaseMarker_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ATeamBase*                                   TeamBaseReference;                                         // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              MapSize;                                                   // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Map_TeamBaseMarker.UI_Map_TeamBaseMarker_C");
		return ptr;
	}



	void SetTeamName();
	void FindCoord(float Distance, float Degrees, struct FVector2D* NewVector);
	void FindAngle(const struct FVector2D& A, float* Degrees);
	void Construct();
	void CalculatePosition();
	void ExecuteUbergraph_UI_Map_TeamBaseMarker(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
