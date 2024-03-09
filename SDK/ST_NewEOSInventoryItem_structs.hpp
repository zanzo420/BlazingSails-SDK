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

// 0x100 (0x100 - 0x0)
// UserDefinedStruct ST_NewEOSInventoryItem.ST_NewEOSInventoryItem
struct FST_NewEOSInventoryItem
{
public:
	bool                                         IsDLCBundle_80_AF2BEEC947CB0E10036360B0E46CE126;   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F6F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Icon_29_CFCDB57B4739F420AE79C7856AE30486;          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                ItemName_3_6490BEFA400678A4ACCA4B93F1617F11;       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Description_8_DB6F52D44B6875FF830E04AD0DD4C02E;    // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                        RequiredLevel_71_638872164805D1C847907D9FD4CDB575; // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_SteamItemCategories             Category_14_EE30D18B49913D766EE67EBEA0FE0B7D;      // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F70[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Event_17_984C790E4C2CC356D90C92A3D2AE270D;         // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_EventDLCBundle                  Bundle_76_E1F3280C45F62681E1381589F5C54E2F;        // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F71[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Quality_19_73BE3F604501B88DDE9B2CAFF923A600;       // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F72[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           StaticMesh1_65_9A9A693A4B2308E0BB1A31B933A2318A;   // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           StaticMesh2_69_7963F0534D084AFE14F374AE41E69E72;   // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         SkeletalMesh1_67_865B28C54EF5B2FCAB76179DF3C06E54; // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         SkeletalMesh2_68_41305B344F618FE1556194A7F637E9D4; // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UtilityBool1_33_9BB572414A0AEEE63BBA70B1D284F812;  // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UtilityBool2_34_391D8845448141FAF36412BCF68A9509;  // 0x69(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F73[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            UtilityMask1_37_2E7FE8284152576FD20BA496075C8DB5;  // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            UtilityMask2_39_F050280F42908CD2FAF8DEB7C8AEA33B;  // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            UtilityMask3_55_88540B0D4DDF6EF5DC63E4B80D81113A;  // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Utilitymask4_57_B5CBDBAF4204F5BB3F40E5A154948217;  // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          UtilityColor1_42_7095F91744E2B0DFB7FC338A3086D746; // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          UtilityColor2_47_1B1E07F14D16730C4A8617BD72F3910C; // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          UtilityColor3_48_D4A0057540F6F23675AF81A6FD02C6F5; // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          UtilityColor4_49_B990EC0E4C4E1C8E57E6B8A654491119; // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          UtilityColor5_50_2197F21A445CE311150583B92AB5392D; // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                EOSEquivalent_83_877BC5D04AAFFCFA2B0FC6BF30FBDBD8; // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FLinearColor                          UtilityColor6_52_28C6007F413E0FE2105EF19AB2CE3659; // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


