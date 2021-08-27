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

// Class SoundVisualizations.SoundVisualizationStatics
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USoundVisualizationStatics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SoundVisualizations.SoundVisualizationStatics");
		return ptr;
	}



	void STATIC_GetAmplitude(class USoundWave* SoundWave, int Channel, float StartTime, float TimeLength, int AmplitudeBuckets, TArray<float>* OutAmplitudes);
	void STATIC_CalculateFrequencySpectrum(class USoundWave* SoundWave, int Channel, float StartTime, float TimeLength, int SpectrumWidth, TArray<float>* OutSpectrum);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
