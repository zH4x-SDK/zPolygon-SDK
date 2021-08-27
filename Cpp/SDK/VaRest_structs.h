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
// Enums
//---------------------------------------------------------------------------

// Enum VaRest.EVaJson
enum class VaRest_EVaJson : uint8_t
{
	EVaJson__None                  = 0,
	EVaJson__Null                  = 1,
	EVaJson__String                = 2,
	EVaJson__Number                = 3,
	EVaJson__Boolean               = 4,
	EVaJson__Array                 = 5,
	EVaJson__Object                = 6,
	EVaJson__EVaJson_MAX           = 7,

};

// Enum VaRest.EVaRestHttpStatusCode
enum class VaRest_EVaRestHttpStatusCode : uint8_t
{
	EVaRestHttpStatusCode__Unknown = 0,
	EVaRestHttpStatusCode__Continue = 1,
	EVaRestHttpStatusCode__SwitchProtocol = 2,
	EVaRestHttpStatusCode__Ok      = 3,
	EVaRestHttpStatusCode__Created = 4,
	EVaRestHttpStatusCode__Accepted = 5,
	EVaRestHttpStatusCode__Partial = 6,
	EVaRestHttpStatusCode__NoContent = 7,
	EVaRestHttpStatusCode__ResetContent = 8,
	EVaRestHttpStatusCode__PartialContent = 9,
	EVaRestHttpStatusCode__Ambiguous = 10,
	EVaRestHttpStatusCode__Moved   = 11,
	EVaRestHttpStatusCode__Redirect = 12,
	EVaRestHttpStatusCode__RedirectMethod = 13,
	EVaRestHttpStatusCode__NotModified = 14,
	EVaRestHttpStatusCode__UseProxy = 15,
	EVaRestHttpStatusCode__RedirectKeepVerb = 16,
	EVaRestHttpStatusCode__BadRequest = 17,
	EVaRestHttpStatusCode__Denied  = 18,
	EVaRestHttpStatusCode__PaymentReq = 19,
	EVaRestHttpStatusCode__Forbidden = 20,
	EVaRestHttpStatusCode__NotFound = 21,
	EVaRestHttpStatusCode__BadMethod = 22,
	EVaRestHttpStatusCode__NoneAcceptable = 23,
	EVaRestHttpStatusCode__ProxyAuthReq = 24,
	EVaRestHttpStatusCode__RequestTimeout = 25,
	EVaRestHttpStatusCode__Conflict = 26,
	EVaRestHttpStatusCode__Gone    = 27,
	EVaRestHttpStatusCode__LengthRequired = 28,
	EVaRestHttpStatusCode__PrecondFailed = 29,
	EVaRestHttpStatusCode__RequestTooLarge = 30,
	EVaRestHttpStatusCode__UriTooLong = 31,
	EVaRestHttpStatusCode__UnsupportedMedia = 32,
	EVaRestHttpStatusCode__TooManyRequests = 33,
	EVaRestHttpStatusCode__RetryWith = 34,
	EVaRestHttpStatusCode__ServerError = 35,
	EVaRestHttpStatusCode__NotSupported = 36,
	EVaRestHttpStatusCode__BadGateway = 37,
	EVaRestHttpStatusCode__ServiceUnavail = 38,
	EVaRestHttpStatusCode__GatewayTimeout = 39,
	EVaRestHttpStatusCode__VersionNotSup = 40,
	EVaRestHttpStatusCode__EVaRestHttpStatusCode_MAX = 41,

};

// Enum VaRest.EVaRestRequestStatus
enum class VaRest_EVaRestRequestStatus : uint8_t
{
	EVaRestRequestStatus__NotStarted = 0,
	EVaRestRequestStatus__Processing = 1,
	EVaRestRequestStatus__Failed   = 2,
	EVaRestRequestStatus__Failed_ConnectionError = 3,
	EVaRestRequestStatus__Succeeded = 4,
	EVaRestRequestStatus__EVaRestRequestStatus_MAX = 5,

};

// Enum VaRest.EVaRestRequestContentType
enum class VaRest_EVaRestRequestContentType : uint8_t
{
	EVaRestRequestContentType__x_www_form_urlencoded_url = 0,
	EVaRestRequestContentType__x_www_form_urlencoded_body = 1,
	EVaRestRequestContentType__json = 2,
	EVaRestRequestContentType__binary = 3,
	EVaRestRequestContentType__EVaRestRequestContentType_MAX = 4,

};

// Enum VaRest.EVaRestRequestVerb
enum class VaRest_EVaRestRequestVerb : uint8_t
{
	EVaRestRequestVerb__GET        = 0,
	EVaRestRequestVerb__POST       = 1,
	EVaRestRequestVerb__PUT        = 2,
	EVaRestRequestVerb__DEL        = 3,
	EVaRestRequestVerb__CUSTOM     = 4,
	EVaRestRequestVerb__EVaRestRequestVerb_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct VaRest.VaRestCallResponse
// 0x0028
struct FVaRestCallResponse
{
	class UVaRestRequestJSON*                          Request;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JQOG[0x10];                                    // 0x0018(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct VaRest.VaRestURL
// 0x0068
struct FVaRestURL
{
	struct FString                                     Protocol;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Host;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Valid;                                                     // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Map;                                                       // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RedirectURL;                                               // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Op;                                                        // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FString                                     Portal;                                                    // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
