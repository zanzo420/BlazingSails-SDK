#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x7B (0x7B - 0x0)
// UserDefinedStruct ST_Weapon_Data.ST_Weapon_Data
struct FST_Weapon_Data
{
public:
	class UClass*                                WeaponClass_3_0A0F84BC42470839E541C691FA6A5B16;    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Icon_6_5BEE7EB74DCCA3756CC88681BA274EAB;           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  WeaponName_9_B8793CDE4FE2021C88F3C6B14AE63A80;     // 0x10(0x18)(Edit, BlueprintVisible)
	enum class E_Items                           AmmoType_12_527C90464FF6CC3D2A18F08B5C0DADF0;      // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F11[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               FPSOffset_15_A4989DF14EE3331C1A6630880B21718C;     // 0x2C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimZoomMultiplier_18_F7A6E25C4C0848F30304418438B4BAC8; // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F12[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          ReloadAnimation_23_4095935F419BD8B7578B989E03BE9CF2; // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HideCharacter_25_3FDCD3CA4BF0568DE7D15A80CCF3590A; // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_Tiers                           Tier_28_4A1A8C81405E7898885753A31F3DB14F;          // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F13[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Description_31_938171344495E2A0711192BA285F3FD7;   // 0x50(0x18)(Edit, BlueprintVisible)
	int32                                        ClipSize_34_195739E847540A133CEABB9EAA0B3BBC;      // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              FPSOffsetRot_37_2A2D1D3E42C46DABC6D6969AF7908210;  // 0x6C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_WeaponDamageType                WeaponDamageType_40_A782EDCC41475EF4F73386A52E7B79F9; // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Weapons                         Weapon_43_A09D57B3424D6ED50F16E489AB5BB949;        // 0x79(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_EquipmentSlots                  WeaponType_46_9D17FBC149D49D8C901343830B94BF16;    // 0x7A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


