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

// Class POLYGON.ChatSystemComponent
// 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
class UChatSystemComponent : public UActorComponent
{
public:
	TArray<struct FChatMessage>                        ChatHistory;                                               // 0x00B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.ChatSystemComponent");
		return ptr;
	}



	void SentMessage_Multicast(const struct FChatMessage& Message);
	void SendMessage_Server(const struct FChatMessage& Message);
};

// Class POLYGON.GeneralBackendComponent
// 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
class UGeneralBackendComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_AQ1K[0x30];                                    // 0x00B0(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.GeneralBackendComponent");
		return ptr;
	}



};

// Class POLYGON.ClientBackendComponent
// 0x0048 (FullSize[0x0128] - InheritedSize[0x00E0])
class UClientBackendComponent : public UGeneralBackendComponent
{
public:
	struct FScriptMulticastDelegate                    OnSetPlayerId;                                             // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUpdatePlayerCombinedInfo;                                // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FPlayerId                                   PlayerId;                                                  // 0x0100(0x0020) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate)
	class UPlayFabJsonObject*                          PlayerCombinedInfo;                                        // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.ClientBackendComponent");
		return ptr;
	}



	void SetPlayerId(const struct FPlayerId& newPlayerId);
	void SetPlayerCombinedInfo(class UPlayFabJsonObject* newPlayerCombinedInfo);
	bool STATIC_IsClientLoggedIn();
	class UPlayFabJsonObject* GetPlayerCombinedInfo();
};

// Class POLYGON.ClientTransfer
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UClientTransfer : public UObject
{
public:
	bool                                               bInMenu;                                                   // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EXQO[0x27];                                    // 0x0029(0x0027) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayFabJsonObject*                          PlayerCombinedInfo;                                        // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_STY1[0x10];                                    // 0x0058(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.ClientTransfer");
		return ptr;
	}



	void SetPlayerId(const struct FPlayerId& newPlayerId);
	void SetPlayerCombinedInfo(class UPlayFabJsonObject* newPlayerCombinedInfo);
	void SetMatchmakingTicket(const struct FString& newTicket);
	struct FPlayerId GetPlayerId();
	class UPlayFabJsonObject* GetPlayerCombinedInfo();
	struct FString GetMatchmakingTicket();
};

// Class POLYGON.ControlPoint
// 0x0070 (FullSize[0x0290] - InheritedSize[0x0220])
class AControlPoint : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnCapturedTeam;                                            // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnIsCapture;                                               // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChangeCapturePoints;                                     // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	POLYGON_EControlPoint                              ControlPointName;                                          // 0x0250(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	POLYGON_ETeam                                      CapturedTeam;                                              // 0x0251(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bIsCapture;                                                // 0x0252(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AQW4[0x1];                                     // 0x0253(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CapturePointsRedTeam;                                      // 0x0254(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                CapturePointsBlueTeam;                                     // 0x0258(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2HL0[0x2C];                                    // 0x025C(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USphereComponent*                            CaptureArea;                                               // 0x0288(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.ControlPoint");
		return ptr;
	}



	void OnRep_IsCapture();
	void OnRep_CapturePointsRedTeam();
	void OnRep_CapturePointsBlueTeam();
	void OnRep_CapturedTeam();
	struct FString GetControlPointNameAsString();
	struct FString GetControlPointNameAsOneLetter();
};

// Class POLYGON.DataManagerLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDataManagerLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.DataManagerLibrary");
		return ptr;
	}



	class UDataTable* STATIC_GetDataTable_MapsInfo();
	class UDataTable* STATIC_GetDataTable_LevelInfo();
	class UDataTable* STATIC_GetDataTable_ItemReferences();
};

// Class POLYGON.HealthStatsComponent
// 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
class UHealthStatsComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnChangeHealth;                                            // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      Health;                                                    // 0x00C0(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UACD[0x3];                                     // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Stamina;                                                   // 0x00C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IPUG[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPlayerAssist>                       KillAssists;                                               // 0x00D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VBAH[0x10];                                    // 0x00E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.HealthStatsComponent");
		return ptr;
	}



	void OnRep_Health();
	int GetStamina();
	int GetHealth();
};

// Class POLYGON.InteractInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInteractInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.InteractInterface");
		return ptr;
	}



	void StopInteract(class APG_Character* Character);
	void StartInteract(class APG_Character* Character);
	void SetPlayerLooks(bool isLooks);
};

// Class POLYGON.Item_General
// 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])
class AItem_General : public AActor
{
public:
	struct FString                                     ItemId;                                                    // 0x0220(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	POLYGON_EItemType                                  ItemType;                                                  // 0x0230(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KXGO[0x7];                                     // 0x0231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ItemName;                                                  // 0x0238(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UTexture2D*                                  ItemIcon;                                                  // 0x0250(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ItemPrice;                                                 // 0x0258(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_86M5[0x4];                                     // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     customData;                                                // 0x0260(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.Item_General");
		return ptr;
	}



};

// Class POLYGON.Item_Module_General
// 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
class AItem_Module_General : public AItem_General
{
public:
	POLYGON_EWeaponModuleType                          WeaponModuleType;                                          // 0x0270(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CAN0[0x3];                                     // 0x0271(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LevelRequired;                                             // 0x0274(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsPremium;                                                // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VMWE[0x7];                                     // 0x0279(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.Item_Module_General");
		return ptr;
	}



};

// Class POLYGON.Item_Module_Optic
// 0x0018 (FullSize[0x0298] - InheritedSize[0x0280])
class AItem_Module_Optic : public AItem_Module_General
{
public:
	struct FName                                       MountingSocket;                                            // 0x0280(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FOV;                                                       // 0x0288(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsScope;                                                  // 0x028C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_B7NQ[0x3];                                     // 0x028D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMeshComponent*                        ModuleMesh;                                                // 0x0290(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.Item_Module_Optic");
		return ptr;
	}



	void ToggleAiming(bool IsAiming);
};

// Class POLYGON.Item_Module_Skin
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
class AItem_Module_Skin : public AItem_Module_General
{
public:
	class UMaterialInstance*                           SkinMaterial;                                              // 0x0280(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.Item_Module_Skin");
		return ptr;
	}



};

// Class POLYGON.Item_Weapon_General
// 0x0170 (FullSize[0x03E0] - InheritedSize[0x0270])
class AItem_Weapon_General : public AItem_General
{
public:
	struct FScriptMulticastDelegate                    OnChangeCurrentNumberAmmo;                                 // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChangeStockAmmo;                                         // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSetWeaponModules;                                        // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnApplyWeaponDamage;                                       // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	POLYGON_EWeaponType                                WeaponType;                                                // 0x02B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SDI0[0x3];                                     // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                WeaponDamage;                                              // 0x02B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 DamageCurve;                                               // 0x02B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxMagazineAmmo;                                           // 0x02C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxStockAmmo;                                              // 0x02C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TimeBetweenShots;                                          // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsAutomatic;                                              // 0x02CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZJT9[0x3];                                     // 0x02CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WeaponRecoil;                                              // 0x02D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WeaponRecoilAlphaPerShot;                                  // 0x02D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AccuracyHip;                                               // 0x02D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AccuracySight;                                             // 0x02DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SpreadShot;                                                // 0x02E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8J38[0x4];                                     // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              RelatedModules;                                            // 0x02E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UTexture2D*                                  WeaponWhileIcon;                                           // 0x02F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                LevelRequired;                                             // 0x0300(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsPremium;                                                // 0x0304(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsAvailable;                                              // 0x0305(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_R0T0[0x2];                                     // 0x0306(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             TrailFX;                                                   // 0x0308(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                             SleeveFX;                                                  // 0x0310(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ShotCameraShake;                                           // 0x0318(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               IdleCharacterAnimation;                                    // 0x0320(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                                ReloadCharacterAnimation;                                  // 0x0328(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                                ReloadFullCharacterAnimation;                              // 0x0330(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                                ShotCharacterAnimation;                                    // 0x0338(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               ShotWeaponAnimation;                                       // 0x0340(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               ReloadWeaponAnimation;                                     // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               ReloadFullWeaponAnimation;                                 // 0x0350(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     PositionAdjustment;                                        // 0x0358(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KLFS[0x4];                                     // 0x0364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  SoundShot;                                                 // 0x0368(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                                  SoundBlankShot;                                            // 0x0370(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class USoundBase*>                          CustomSounds;                                              // 0x0378(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int                                                CurrentMagazineAmmo;                                       // 0x0388(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint16_t                                           CurrentStockAmmo;                                          // 0x038C(0x0002) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2VPY[0x2];                                     // 0x038E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentSpread;                                             // 0x0390(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_C6AR[0x4];                                     // 0x0394(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AItem_Module_General*>                WeaponModules;                                             // 0x0398(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KYEC[0x20];                                    // 0x03A8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMeshComponent*                      WeaponMesh;                                                // 0x03C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                        Magazine;                                                  // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                        PicatinnyRail;                                             // 0x03D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.Item_Weapon_General");
		return ptr;
	}



	void StartReload_multicast(bool bFullReload);
	void SetWeaponModules(class UPlayFabJsonObject* modules);
	void ResetWeapon();
	void RequestReload_server(int8_t CurrentNumberAmmo);
	void OnRep_WeaponModules();
	void OnRep_CurrentStockAmmo();
	void NotifyServerOfMiss();
	void NotifyServerOfHitUnreliable(const struct FWeaponHitUnreliable& weaponHit);
	void NotifyServerOfHitOnCharacter(const struct FWeaponHitOnCharacter& WeaponHitOnCharacter);
	TArray<class AItem_Module_General*> GetWeaponModules();
	class USkeletalMeshComponent* GetWeaponMesh();
	class UStaticMeshComponent* GetMagazine();
	struct FVector GetForwardShot();
	int GetCurrentStockAmmo();
	void AddStockAmmo_server(int8_t addAmmo);
	void ActionWhenShotWithoutHit_multicast();
	void ActionWhenShotWithHit_multicast(const struct FWeaponHitUnreliable& weaponHit);
};

// Class POLYGON.Item_Weapon_Grenade
// 0x0048 (FullSize[0x02B8] - InheritedSize[0x0270])
class AItem_Weapon_Grenade : public AItem_General
{
public:
	float                                              GrenadeRaduis;                                             // 0x0270(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              GrenadeDamage;                                             // 0x0274(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                             ExplosionFX;                                               // 0x0278(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundBase*                                  SoundExplosion;                                            // 0x0280(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      ExplosionCameraShake;                                      // 0x0288(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      GrenadeThrowCameraShake;                                   // 0x0290(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        Mesh;                                                      // 0x0298(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URadialForceComponent*                       RadialForce;                                               // 0x02A0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USphereComponent*                            GrenadeSphereRadius;                                       // 0x02A8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USmoothSync*                                 SmoothSyncComponent;                                       // 0x02B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.Item_Weapon_Grenade");
		return ptr;
	}



};

// Class POLYGON.Item_Weapon_Pistol
// 0x0008 (FullSize[0x03E8] - InheritedSize[0x03E0])
class AItem_Weapon_Pistol : public AItem_Weapon_General
{
public:
	class UAnimSequence*                               NoAmmoWeaponAnimation;                                     // 0x03E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.Item_Weapon_Pistol");
		return ptr;
	}



};

// Class POLYGON.Item_Weapon_Rifle
// 0x0000 (FullSize[0x03E0] - InheritedSize[0x03E0])
class AItem_Weapon_Rifle : public AItem_Weapon_General
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.Item_Weapon_Rifle");
		return ptr;
	}



};

// Class POLYGON.Item_Weapon_Sniper
// 0x0000 (FullSize[0x03E0] - InheritedSize[0x03E0])
class AItem_Weapon_Sniper : public AItem_Weapon_General
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.Item_Weapon_Sniper");
		return ptr;
	}



};

// Class POLYGON.MenuCharacter
// 0x0040 (FullSize[0x0260] - InheritedSize[0x0220])
class AMenuCharacter : public AActor
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                      // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        Hair;                                                      // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        Hat;                                                       // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        Mask;                                                      // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        Jacket;                                                    // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        Chevron;                                                   // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        Backpack;                                                  // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AItem_Weapon_General*                        Weapon;                                                    // 0x0258(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.MenuCharacter");
		return ptr;
	}



	void ParsePlayerCombinedInfo();
};

// Class POLYGON.PG_AnimInstance
// 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
class UPG_AnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_5HK9[0x8];                                     // 0x02B8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.PG_AnimInstance");
		return ptr;
	}



};

// Class POLYGON.PG_Character
// 0x00D8 (FullSize[0x0590] - InheritedSize[0x04B8])
class APG_Character : public ACharacter
{
public:
	struct FScriptMulticastDelegate                    OnSetPlayerState;                                          // 0x04B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EM62[0x1];                                     // 0x04C8(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	POLYGON_EPlayerAction                              PlayerAction;                                              // 0x04C9(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T8Y2[0x2];                                     // 0x04CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TiltBodyAlpha;                                             // 0x04CC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KFA5[0xC];                                     // 0x04D0(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	POLYGON_ECameraViewMode                            CameraViewMode;                                            // 0x04DC(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7ALM[0x1B];                                    // 0x04DD(0x001B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      LastFocusActor;                                            // 0x04F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                      CurrentInteractActor;                                      // 0x0500(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S3C1[0x8];                                     // 0x0508(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             ParticleDamageBlood;                                       // 0x0510(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                                  SoundBullet;                                               // 0x0518(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneComponent*                             ArmsRoot;                                                  // 0x0520(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkeletalMeshComponent*                      Arms;                                                      // 0x0528(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        Hair;                                                      // 0x0530(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        Hat;                                                       // 0x0538(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        Mask;                                                      // 0x0540(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        Chevron;                                                   // 0x0548(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        Backpack;                                                  // 0x0550(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCameraComponent*                            FirstPersonCamera;                                         // 0x0558(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpringArmComponent*                         ThirdPersonCameraBoom;                                     // 0x0560(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCameraComponent*                            ThirdPersonCamera;                                         // 0x0568(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInputComponent*                             PlayerInputComponent;                                      // 0x0570(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetComponent*                            WidgetPlayerMarker;                                        // 0x0578(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHealthStatsComponent*                       HealthStatsComponent;                                      // 0x0580(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWeaponComponent*                            WeaponComponent;                                           // 0x0588(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.PG_Character");
		return ptr;
	}



	void TiltBody_server(int8_t tintBodyAlpha);
	void StopInteract_server();
	void StopInteract();
	void StartShooting();
	void StartInteract_server();
	void StartInteract();
	void SetViewMode(POLYGON_ECameraViewMode newViewMode);
	void SetIsSprinting_server(bool NewState);
	void PlayerDead_multicast(const struct FVector_NetQuantize& Impulse, const struct FString& BoneName);
	void PlayAnimMontage_multicast(class UAnimMontage* AnimMontage, bool bIgnoreOwner);
	void OnRep_PlayerAction();
	void OnRep_CameraViewMode();
	void InteractPlayerLooks();
	POLYGON_EPlayerAction GetPlayerAction();
	bool GetIsSprinting();
	class UCameraComponent* GetActiveCamera();
	void EventTakeDamage(const struct FVector& Origin);
	void EventPlayerDead();
	void CameraNeutralizationEffectEvent(float Damage);
	void ActionWhenTakeDamage_multicast(unsigned char Damage, bool bHeadshot, const struct FVector_NetQuantize& HitLocation, const struct FVector_NetQuantizeNormal& ImpactNormal, const struct FVector_NetQuantize& Origin);
};

// Class POLYGON.PG_FunctionLibraryKit
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPG_FunctionLibraryKit : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.PG_FunctionLibraryKit");
		return ptr;
	}



	struct FString STATIC_ParseOption(const struct FString& Options, const struct FString& Key, const struct FString& Separator);
	PlayFab_ERegion STATIC_GetRegionEnum(const struct FString& regionName);
	struct FString STATIC_GetProjectVersion();
	int STATIC_GetBuildNumber();
	void STATIC_ExitGame();
};

// Class POLYGON.PG_GameInstance
// 0x0008 (FullSize[0x01B0] - InheritedSize[0x01A8])
class UPG_GameInstance : public UGameInstance
{
public:
	class UClientTransfer*                             ClientTransfer;                                            // 0x01A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.PG_GameInstance");
		return ptr;
	}



	class UClientTransfer* GetClientTransfer();
};

// Class POLYGON.PG_GameMode_Base
// 0x0000 (FullSize[0x0308] - InheritedSize[0x0308])
class APG_GameMode_Base : public AGameMode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.PG_GameMode_Base");
		return ptr;
	}



};

// Class POLYGON.PG_GameMode_Game
// 0x0020 (FullSize[0x0328] - InheritedSize[0x0308])
class APG_GameMode_Game : public APG_GameMode_Base
{
public:
	int                                                MaxPlayers;                                                // 0x0308(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameTime;                                                  // 0x030C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	POLYGON_ECameraViewMode                            CameraViewMode;                                            // 0x0310(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6F9V[0xF];                                     // 0x0311(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UServerBackendComponent*                     ServerBackendComponent;                                    // 0x0320(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.PG_GameMode_Game");
		return ptr;
	}



	void LoginPlayer(class APG_PlayerController_Game* PlayerController, const struct FString& matchmakingTicket);
};

// Class POLYGON.PG_GameMode_Menu
// 0x0000 (FullSize[0x0308] - InheritedSize[0x0308])
class APG_GameMode_Menu : public APG_GameMode_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.PG_GameMode_Menu");
		return ptr;
	}



};

// Class POLYGON.PG_GameState_Game
// 0x00E8 (FullSize[0x0378] - InheritedSize[0x0290])
class APG_GameState_Game : public AGameState
{
public:
	struct FScriptMulticastDelegate                    OnChangeGameState;                                         // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGameTimer;                                               // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCanMovePlayers;                                          // 0x02B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTeamWon;                                                 // 0x02C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChangePlayersArray;                                      // 0x02D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChangeTeamRedArray;                                      // 0x02E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChangeTeamBlueArray;                                     // 0x02F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChangeTotalScore;                                        // 0x0300(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	POLYGON_EGameMode                                  GameMode;                                                  // 0x0310(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	POLYGON_EGameState                                 GameState;                                                 // 0x0311(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16_t                                           GameTimer;                                                 // 0x0312(0x0002) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bCanMovePlayers;                                           // 0x0314(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	POLYGON_ETeam                                      WinningTeam;                                               // 0x0315(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_U60A[0x2];                                     // 0x0316(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class APG_PlayerState_Game*>                Players;                                                   // 0x0318(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate)
	TArray<class APG_PlayerState_Game*>                TeamRed;                                                   // 0x0328(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate)
	TArray<class APG_PlayerState_Game*>                TeamBlue;                                                  // 0x0338(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate)
	TArray<class ATeamBase*>                           AllTeamBases;                                              // 0x0348(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class AControlPoint*>                       AllControlPoints;                                          // 0x0358(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint16_t                                           ScoreRedTeam;                                              // 0x0368(0x0002) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16_t                                           ScoreBlueTeam;                                             // 0x036A(0x0002) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8FD8[0xC];                                     // 0x036C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.PG_GameState_Game");
		return ptr;
	}



	void SetCanMovePlayers(bool newMoveState);
	void OnRep_WinningTeam();
	void OnRep_TeamRed();
	void OnRep_TeamBlue();
	void OnRep_ScoreRedTeam();
	void OnRep_ScoreBlueTeam();
	void OnRep_Players();
	void OnRep_GameTimer();
	void OnRep_GameState();
	void OnRep_CanMovePlayers();
	void InformPlayerKilled_Multicast(class APG_PlayerState_Game* Player, class APG_PlayerState_Game* killer, bool isHeadshot, bool isGrenade);
	int GetScoreRedTeam();
	int GetScoreBlueTeam();
	int GetMaxScoreForWin();
	int GetGameTimer();
};

// Class POLYGON.PG_PlayerController_Base
// 0x0030 (FullSize[0x05A0] - InheritedSize[0x0570])
class APG_PlayerController_Base : public APlayerController
{
public:
	struct FScriptMulticastDelegate                    OnSetPawn;                                                 // 0x0570(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSetPlayerState;                                          // 0x0580(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                              MouseSensitivity;                                          // 0x0590(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsInvertMouse;                                            // 0x0594(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TOHN[0x3];                                     // 0x0595(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GameFOV;                                                   // 0x0598(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_L1EJ[0x4];                                     // 0x059C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.PG_PlayerController_Base");
		return ptr;
	}



	void ShowError(const struct FText& ErrorMessage, const struct FText& ErrorDetails);
	void SetGameFOV(float NewFOV);
};

// Class POLYGON.PG_PlayerController_Game
// 0x0000 (FullSize[0x05A0] - InheritedSize[0x05A0])
class APG_PlayerController_Game : public APG_PlayerController_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.PG_PlayerController_Game");
		return ptr;
	}



	void StopInteractionEvent();
	void StopInteraction_Client();
	void StartInteractionEvent(float interactionTime);
	void StartInteraction_Client(float interactionTime);
	void SetVisibleLoadingScreen(bool IsVisible);
	void NotifyPlayerKilledEvent(class APG_PlayerState_Game* killed, class APG_PlayerState_Game* killer, bool isHeadshot, bool isGrenade);
	void NotifyAddedGameScoreEvent(int addedScore, POLYGON_EAccrualTypeGameScore addGameScoreType, const struct FString& customString);
	void NotifyAddedGameScore_Client(int16_t addedPoints, POLYGON_EAccrualTypeGameScore addGameScoreType, const struct FString& customString);
	void LoginPlayer_server(const struct FString& matchmakingTicket);
	void DisplayMessageToChatEvent(const struct FChatMessage& Message);
};

// Class POLYGON.PG_PlayerController_Menu
// 0x0000 (FullSize[0x05A0] - InheritedSize[0x05A0])
class APG_PlayerController_Menu : public APG_PlayerController_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.PG_PlayerController_Menu");
		return ptr;
	}



};

// Class POLYGON.PG_PlayerState_Base
// 0x0018 (FullSize[0x0338] - InheritedSize[0x0320])
class APG_PlayerState_Base : public APlayerState
{
public:
	struct FScriptMulticastDelegate                    OnPlayerNameChanged;                                       // 0x0320(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UClientBackendComponent*                     ClientBackendComponent;                                    // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.PG_PlayerState_Base");
		return ptr;
	}



	void UpdatePlayerCombinedInfo();
	void SetPlayerName(const struct FString& PlayerName);
};

// Class POLYGON.PG_PlayerState_Game
// 0x0050 (FullSize[0x0388] - InheritedSize[0x0338])
class APG_PlayerState_Game : public APG_PlayerState_Base
{
public:
	struct FScriptMulticastDelegate                    OnChangeNumberKills;                                       // 0x0338(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChangeNumberDeaths;                                      // 0x0348(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSetTeam;                                                 // 0x0358(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_71QA[0x4];                                     // 0x0368(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	POLYGON_ETeam                                      Team;                                                      // 0x036C(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XAER[0x3];                                     // 0x036D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumberKills;                                               // 0x0370(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                NumberDeaths;                                              // 0x0374(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayerCoreComponent*                        PlayerCoreComponent;                                       // 0x0378(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChatSystemComponent*                        ChatSystemComponent;                                       // 0x0380(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.PG_PlayerState_Game");
		return ptr;
	}



	void SpawnCharacter_server(POLYGON_EControlPoint spawnToControlPoint);
	void SetTeam(POLYGON_ETeam newTeam);
	void OnRep_Team();
	void OnRep_NumberKills();
	void OnRep_NumberDeaths();
};

// Class POLYGON.PG_PlayerState_Menu
// 0x0000 (FullSize[0x0338] - InheritedSize[0x0338])
class APG_PlayerState_Menu : public APG_PlayerState_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.PG_PlayerState_Menu");
		return ptr;
	}



};

// Class POLYGON.PlayerCoreComponent
// 0x0078 (FullSize[0x0128] - InheritedSize[0x00B0])
class UPlayerCoreComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnSetTotalProgress;                                        // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNewLevelReceived;                                        // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int                                                PremiumScore;                                              // 0x00D0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                TotalProgress;                                             // 0x00D4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Currency;                                                  // 0x00D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OXBE[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bHasPremiumAccount;                                        // 0x00E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CWS9[0x47];                                    // 0x00E1(0x0047) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.PlayerCoreComponent");
		return ptr;
	}



	void ParsePlayerCombinedInfo();
	void OnRep_TotalProgress();
	struct FLevelInfo GetNextLevelInfo();
	struct FLevelInfo STATIC_GetNextLevelByLevelID(const struct FName& LevelID);
	struct FLevelInfo STATIC_GetLevelByProgress(int Progress);
	struct FLevelInfo GetCurrentLevelInfo();
	void AddGameScore(int addScore, POLYGON_EAccrualTypeGameScore accrualTypeGameScore, const struct FString& customString);
	void AddCurrency(int AddCurrency);
};

// Class POLYGON.ServerBackendComponent
// 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
class UServerBackendComponent : public UGeneralBackendComponent
{
public:
	unsigned char                                      UnknownData_0I4G[0x10];                                    // 0x00E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.ServerBackendComponent");
		return ptr;
	}



	struct FString GetLobbyID();
};

// Class POLYGON.SupportBox
// 0x0028 (FullSize[0x0248] - InheritedSize[0x0220])
class ASupportBox : public AActor
{
public:
	unsigned char                                      UnknownData_OT6G[0x10];                                    // 0x0220(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMeshComponent*                        BoxMesh;                                                   // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetComponent*                            WidgetTypeSupportBox;                                      // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetComponent*                            InteractionWidget;                                         // 0x0240(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.SupportBox");
		return ptr;
	}



};

// Class POLYGON.SupportBox_Ammo
// 0x0000 (FullSize[0x0248] - InheritedSize[0x0248])
class ASupportBox_Ammo : public ASupportBox
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.SupportBox_Ammo");
		return ptr;
	}



};

// Class POLYGON.SupportBox_Health
// 0x0000 (FullSize[0x0248] - InheritedSize[0x0248])
class ASupportBox_Health : public ASupportBox
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.SupportBox_Health");
		return ptr;
	}



};

// Class POLYGON.TeamBase
// 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
class ATeamBase : public AActor
{
public:
	POLYGON_ETeam                                      Team;                                                      // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Q59I[0x7];                                     // 0x0221(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.TeamBase");
		return ptr;
	}



};

// Class POLYGON.WeaponComponent
// 0x00F0 (FullSize[0x01A0] - InheritedSize[0x00B0])
class UWeaponComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnSetCurrentWeapon;                                        // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSetPrimaryWeapon;                                        // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSetSecondaryWeapon;                                      // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChangeNumberGrenades;                                    // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAiming;                                                  // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OR3P[0x16];                                    // 0x0100(0x0016) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      GrenadesNumber;                                            // 0x0116(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bWeaponIsDown;                                             // 0x0117(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AItem_Weapon_General*                        CurrentWeapon;                                             // 0x0118(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AItem_Weapon_General*                        PrimaryWeapon;                                             // 0x0120(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AItem_Weapon_General*                        SecondaryWeapon;                                           // 0x0128(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                             FireFX;                                                    // 0x0130(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                             HitFX_Metal;                                               // 0x0138(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                             HitFX_Stone;                                               // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                             HitFX_Dirt;                                                // 0x0148(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                             HitFX_Wood;                                                // 0x0150(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                             HitFX_Water;                                               // 0x0158(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                             HitFX_Glass;                                               // 0x0160(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                          DecalImpact;                                               // 0x0168(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundBase*                                  SoundCharacterHit;                                         // 0x0170(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundBase*                                  SoundRicochetHit;                                          // 0x0178(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundBase*                                  SoundAiming;                                               // 0x0180(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimMontage*                                AnimChangeWeapon;                                          // 0x0188(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimMontage*                                AnimThrowGrenade;                                          // 0x0190(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimMontage*                                AnimLowThrowGrenade;                                       // 0x0198(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class POLYGON.WeaponComponent");
		return ptr;
	}



	void ToggleAiming_server();
	void SetWeaponRecoilAlpha_Yaw(float newYawRecoil);
	void SetWeaponRecoilAlpha_Roll(float newRollRecoil);
	void SetWeaponRecoilAlpha_Pitch(float newPitchRecoil);
	void SetWeaponRecoilAlpha_Backward(float newBackwardRecoil);
	void SetWantsToAiming_server(bool NewState);
	void SelectWeaponSlot_server(unsigned char Slot);
	void ParsePlayerCombinedInfo();
	void OnRep_SecondaryWeapon();
	void OnRep_PrimaryWeapon();
	void OnRep_GrenadesNumber();
	void OnRep_CurrentWeapon();
	void NotifyServerThrowGrenade();
	bool IsAiming();
	float GetWeaponRecoilAlpha_Yaw();
	float GetWeaponRecoilAlpha_Roll();
	float GetWeaponRecoilAlpha_Pitch();
	float GetWeaponRecoilAlpha_Backward();
	bool GetIsShooting();
	void AddGrenate_server(unsigned char Number);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
