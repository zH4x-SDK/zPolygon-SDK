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

// WidgetBlueprintGeneratedClass UI_KillLog.UI_KillLog_C
// 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
class UUI_KillLog_C : public UUserWidget
{
public:
	class UVerticalBox*                                VerticalBox_Log;                                           // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_KillLog.UI_KillLog_C");
		return ptr;
	}



	void AddEntryToLog(class APG_PlayerState_Game* killed, class APG_PlayerState_Game* killer, bool isHeadshot, bool isGrenade);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
