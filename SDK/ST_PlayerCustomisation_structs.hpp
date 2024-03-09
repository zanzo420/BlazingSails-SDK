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

// 0x6C (0x6C - 0x0)
// UserDefinedStruct ST_PlayerCustomisation.ST_PlayerCustomisation
struct FST_PlayerCustomisation
{
public:
	int32                                        Hat_11_1599CC2E4AD16BED0B93018280B1C8D4;           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkinColor_45_7C335432453D7FD00277EBACA53812E3;     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Torso_85_928BE3324DE40FB0DA6128A34E22EA52;         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Pants_51_DC68605B446257D8DE24D3BDCCF67578;         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Beard_54_2F225F984E71218B319D4D9EE189613E;         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VoicePitch_78_3254E7E743E24AEDB5E81DA92C7B0877;    // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LeftFoot_115_BB0F0ED94A5FA1E468203D9318D4A67A;     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HairColor_84_C4E6D5384EC8821BBAA69586B80DD289;     // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PegLeg_88_8D8FA4D04755C987BAAEE7BF72253C53;        // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PeglegLeft_90_DA6A71AE49E7988352A7D68BEB0015D5;    // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         TorsoPiece2Enabled_97_C8CE2AA44FB9BB115D0EB8BCC181A9C9; // 0x25(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         TorsoPiece3Enabled_96_137BE77A4938BE977A101D8B8B5276EC; // 0x26(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         TorsoPiece4Enabled_98_5633C5E846828869680851BBCD1CB8C0; // 0x27(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Tattoo_103_E284F086450B6E10B61D6F8ED79D12CB;       // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_BodyTypes                       BodyType_106_8A4A7A9F4ECC6487FD6223BD4F700738;     // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          TattooColor_110_46CF04294D70A524EC2A3A9314C3495E;  // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RightFoot_118_E3E4767F4926DB58A36A369539AA0CB7;    // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        VoiceType_138_00AFC2744E8B59DB8D8727A119E5FE07;    // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterFigure                 CharacterFigure_143_D68A585341C22268A8CA99A24A542B5C; // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FaceItem_154_14A95CFE4A098FBC43B669BFD5417B86;     // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LeftHand_155_C120A2A24C55425478E2E98BCE599AC1;     // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RightHand_156_768345D84E0706420C9C369829A64988;    // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Scar_157_E27FE4554F67648579BE53B3AB78B418;         // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HammerSkin_158_FDA8E5584ECDDD6DC65C168D917A818B;   // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LowerFaceItem_165_BC2CE43848613650347B209BC5A4E4AE; // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Title_175_9AC3336E4FE784033FADEC875439116C;        // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurseBurden_179_F1D313594790ED77DA57639E56443C3F;  // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


