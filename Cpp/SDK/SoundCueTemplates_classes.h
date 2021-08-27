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

// Class SoundCueTemplates.SoundCueTemplate
// 0x0000 (FullSize[0x0590] - InheritedSize[0x0590])
class USoundCueTemplate : public USoundCue
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SoundCueTemplates.SoundCueTemplate");
		return ptr;
	}



};

// Class SoundCueTemplates.SoundCueContainer
// 0x0000 (FullSize[0x0590] - InheritedSize[0x0590])
class USoundCueContainer : public USoundCueTemplate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SoundCueTemplates.SoundCueContainer");
		return ptr;
	}



};

// Class SoundCueTemplates.SoundCueDistanceCrossfade
// 0x0000 (FullSize[0x0590] - InheritedSize[0x0590])
class USoundCueDistanceCrossfade : public USoundCueTemplate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SoundCueTemplates.SoundCueDistanceCrossfade");
		return ptr;
	}



};

// Class SoundCueTemplates.SoundCueTemplateSettings
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class USoundCueTemplateSettings : public UDeveloperSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SoundCueTemplates.SoundCueTemplateSettings");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
