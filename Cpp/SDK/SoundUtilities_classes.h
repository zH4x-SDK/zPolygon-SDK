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

// Class SoundUtilities.SoundSimple
// 0x0018 (FullSize[0x01D0] - InheritedSize[0x01B8])
class USoundSimple : public USoundBase
{
public:
	TArray<struct FSoundVariation>                     Variations;                                                // 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class USoundWave*                                  SoundWave;                                                 // 0x01C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SoundUtilities.SoundSimple");
		return ptr;
	}



};

// Class SoundUtilities.SoundUtilitiesBPFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USoundUtilitiesBPFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SoundUtilities.SoundUtilitiesBPFunctionLibrary");
		return ptr;
	}



	float STATIC_GetPitchScaleFromMIDIPitch(int BaseMidiNote, int TargetMidiNote);
	int STATIC_GetMIDIPitchFromFrequency(float Frequency);
	float STATIC_GetFrequencyFromMIDIPitch(int MidiNote);
	float STATIC_GetBeatTempo(float BeatsPerMinute, int BeatMultiplier, int DivisionsOfWholeNote);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
