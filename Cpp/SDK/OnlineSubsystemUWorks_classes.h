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

// Class OnlineSubsystemUWorks.IpConnectionUWorks
// 0x0000 (FullSize[0x1B90] - InheritedSize[0x1B90])
class UIpConnectionUWorks : public UIpConnection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUWorks.IpConnectionUWorks");
		return ptr;
	}



};

// Class OnlineSubsystemUWorks.IpNetDriverUWorks
// 0x0038 (FullSize[0x07F0] - InheritedSize[0x07B8])
class UIpNetDriverUWorks : public UIpNetDriver
{
public:
	unsigned char                                      UnknownData_ZZWK[0x38];                                    // 0x07B8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUWorks.IpNetDriverUWorks");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
