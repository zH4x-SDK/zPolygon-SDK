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

// BlueprintGeneratedClass BP_HUDFunctionLibrary.BP_HUDFunctionLibrary_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_HUDFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HUDFunctionLibrary.BP_HUDFunctionLibrary_C");
		return ptr;
	}



	void STATIC_GetColorByID(const struct FName& RowName, class UObject* __WorldContext, struct FLinearColor* Color);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
