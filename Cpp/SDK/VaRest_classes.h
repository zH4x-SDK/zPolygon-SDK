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

// Class VaRest.VaRestJsonObject
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UVaRestJsonObject : public UObject
{
public:
	unsigned char                                      UnknownData_Z49B[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VaRest.VaRestJsonObject");
		return ptr;
	}



	bool WriteToFilePath(const struct FString& Path, bool bIsRelativeToProjectDir);
	void SetStringField(const struct FString& FieldName, const struct FString& StringValue);
	void SetStringArrayField(const struct FString& FieldName, TArray<struct FString> StringArray);
	void SetObjectField(const struct FString& FieldName, class UVaRestJsonObject* JsonObject);
	void SetObjectArrayField(const struct FString& FieldName, TArray<class UVaRestJsonObject*> ObjectArray);
	void SetNumberField(const struct FString& FieldName, float Number);
	void SetNumberArrayField(const struct FString& FieldName, TArray<float> NumberArray);
	void SetMapFields_uint8(TMap<struct FString, unsigned char> Fields);
	void SetMapFields_string(TMap<struct FString, struct FString> Fields);
	void SetMapFields_int64(TMap<struct FString, int64_t> Fields);
	void SetMapFields_int32(TMap<struct FString, int> Fields);
	void SetMapFields_bool(TMap<struct FString, bool> Fields);
	void SetIntegerField(const struct FString& FieldName, int Number);
	void SetInt64Field(const struct FString& FieldName, int64_t Number);
	void SetField(const struct FString& FieldName, class UVaRestJsonValue* JsonValue);
	void SetBoolField(const struct FString& FieldName, bool InValue);
	void SetBoolArrayField(const struct FString& FieldName, TArray<bool> BoolArray);
	void SetArrayField(const struct FString& FieldName, TArray<class UVaRestJsonValue*> inArray);
	void Reset();
	void RemoveField(const struct FString& FieldName);
	void MergeJsonObject(class UVaRestJsonObject* InJsonObject, bool Overwrite);
	bool HasField(const struct FString& FieldName);
	struct FString GetStringField(const struct FString& FieldName);
	TArray<struct FString> GetStringArrayField(const struct FString& FieldName);
	class UVaRestJsonObject* GetObjectField(const struct FString& FieldName);
	TArray<class UVaRestJsonObject*> GetObjectArrayField(const struct FString& FieldName);
	float GetNumberField(const struct FString& FieldName);
	TArray<float> GetNumberArrayField(const struct FString& FieldName);
	int GetIntegerField(const struct FString& FieldName);
	int64_t GetInt64Field(const struct FString& FieldName);
	TArray<struct FString> GetFieldNames();
	class UVaRestJsonValue* GetField(const struct FString& FieldName);
	bool GetBoolField(const struct FString& FieldName);
	TArray<bool> GetBoolArrayField(const struct FString& FieldName);
	TArray<class UVaRestJsonValue*> GetArrayField(const struct FString& FieldName);
	struct FString EncodeJsonToSingleString();
	struct FString EncodeJson();
	bool DecodeJson(const struct FString& JsonString, bool bUseIncrementalParser);
};

// Class VaRest.VaRestJsonValue
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UVaRestJsonValue : public UObject
{
public:
	unsigned char                                      UnknownData_0V15[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VaRest.VaRestJsonValue");
		return ptr;
	}



	void Reset();
	bool IsNull();
	struct FString GetTypeString();
	VaRest_EVaJson GetType();
	struct FString AsString();
	class UVaRestJsonObject* AsObject();
	float AsNumber();
	int AsInt64();
	int AsInt32();
	bool AsBool();
	TArray<class UVaRestJsonValue*> AsArray();
};

// Class VaRest.VaRestLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVaRestLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VaRest.VaRestLibrary");
		return ptr;
	}



	struct FString STATIC_StringToSha1(const struct FString& StringToHash);
	struct FString STATIC_StringToMd5(const struct FString& StringToHash);
	struct FString STATIC_PercentEncode(const struct FString& Source);
	TEnumAsByte<VaRest_EVaRestHttpStatusCode> STATIC_HTTPStatusIntToEnum(int StatusCode);
	struct FVaRestURL STATIC_GetWorldURL(class UObject* WorldContextObject);
	struct FString STATIC_GetVaRestVersion();
	class UVaRestSettings* STATIC_GetVaRestSettings();
	bool STATIC_Base64EncodeData(TArray<unsigned char> Data, struct FString* Dest);
	struct FString STATIC_Base64Encode(const struct FString& Source);
	bool STATIC_Base64DecodeData(const struct FString& Source, TArray<unsigned char>* Dest);
	bool STATIC_Base64Decode(const struct FString& Source, struct FString* Dest);
};

// Class VaRest.VaRestRequestJSON
// 0x01A0 (FullSize[0x01C8] - InheritedSize[0x0028])
class UVaRestRequestJSON : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnRequestComplete;                                         // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRequestFail;                                             // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U003[0x40];                                    // 0x0048(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ResponseSize;                                              // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L6FN[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ResponseContent;                                           // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsValidJsonResponse;                                      // 0x00A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M0RK[0xF];                                     // 0x00A1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVaRestJsonObject*                           RequestJsonObj;                                            // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DCNW[0x30];                                    // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVaRestJsonObject*                           ResponseJsonObj;                                           // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVaRestJsonValue*                            ResponseJsonValue;                                         // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HLI1[0xD0];                                    // 0x00F8(0x00D0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VaRest.VaRestRequestJSON");
		return ptr;
	}



	void SetVerb(VaRest_EVaRestRequestVerb Verb);
	void SetURL(const struct FString& URL);
	void SetStringRequestContent(const struct FString& Content);
	void SetResponseObject(class UVaRestJsonObject* JsonObject);
	void SetRequestObject(class UVaRestJsonObject* JsonObject);
	void SetHeader(const struct FString& HeaderName, const struct FString& HeaderValue);
	void SetCustomVerb(const struct FString& Verb);
	void SetContentType(VaRest_EVaRestRequestContentType ContentType);
	void SetBinaryRequestContent(TArray<unsigned char> Content);
	void SetBinaryContentType(const struct FString& ContentType);
	void ResetResponseData();
	void ResetRequestData();
	void ResetData();
	int RemoveTag(const struct FName& Tag);
	void ProcessURL(const struct FString& URL);
	bool HasTag(const struct FName& Tag);
	struct FString GetURL();
	VaRest_EVaRestRequestStatus GetStatus();
	class UVaRestJsonValue* GetResponseValue();
	class UVaRestJsonObject* GetResponseObject();
	struct FString GetResponseHeader(const struct FString& HeaderName);
	struct FString GetResponseContentAsString(bool bCacheResponseContent);
	int GetResponseCode();
	class UVaRestJsonObject* GetRequestObject();
	TArray<struct FString> GetAllResponseHeaders();
	void ExecuteProcessRequest();
	void Cancel();
	void ApplyURL(const struct FString& URL, class UVaRestJsonObject** Result, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void AddTag(const struct FName& Tag);
};

// Class VaRest.VaRestSettings
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UVaRestSettings : public UObject
{
public:
	bool                                               bExtendedLog;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseChunkedParser;                                         // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_42ZA[0x6];                                     // 0x002A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VaRest.VaRestSettings");
		return ptr;
	}



};

// Class VaRest.VaRestSubsystem
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UVaRestSubsystem : public UEngineSubsystem
{
public:
	TMap<class UVaRestRequestJSON*, struct FVaRestCallResponse> RequestMap;                                                // 0x0030(0x0050) (ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VaRest.VaRestSubsystem");
		return ptr;
	}



	class UVaRestJsonObject* STATIC_StaticConstructVaRestJsonObject();
	class UVaRestJsonObject* LoadJsonFromFile(const struct FString& Path, bool bIsRelativeToContentDir);
	class UVaRestJsonValue* DecodeJsonValue(const struct FString& JsonString);
	class UVaRestJsonObject* DecodeJsonObject(const struct FString& JsonString);
	class UVaRestRequestJSON* ConstructVaRestRequestExt(VaRest_EVaRestRequestVerb Verb, VaRest_EVaRestRequestContentType ContentType);
	class UVaRestRequestJSON* ConstructVaRestRequest();
	class UVaRestJsonObject* ConstructVaRestJsonObject();
	class UVaRestJsonValue* ConstructJsonValueString(const struct FString& StringValue);
	class UVaRestJsonValue* ConstructJsonValueObject(class UVaRestJsonObject* JsonObject);
	class UVaRestJsonValue* ConstructJsonValueNumber(float Number);
	class UVaRestJsonValue* ConstructJsonValueBool(bool InValue);
	class UVaRestJsonValue* ConstructJsonValueArray(TArray<class UVaRestJsonValue*> inArray);
	void CallURL(const struct FString& URL, VaRest_EVaRestRequestVerb Verb, VaRest_EVaRestRequestContentType ContentType, class UVaRestJsonObject* VaRestJson, const struct FScriptDelegate& Callback);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
