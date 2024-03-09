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

// 0x64 (0x64 - 0x0)
// UserDefinedStruct ST_Options.ST_Options
struct FST_Options
{
public:
	float                                        MouseSensitivity_3_5A984E80406C73E54A5A2AB145B70FD7; // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MouseSensitivityScoped_92_3455174E47A4DAD7BFBC338A8235D2C7; // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FOV_7_DD7521994D532790924767B7B1AE3145;            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_202A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Resolution_12_42C7F04B40EAD3832255B59AF03FDF85;    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Fullscreen_11_F67D78AC49B6472DAE6F6EA5BAC7C27F;    // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseAimToggle_15_F2D63ACF4A68E15DDA20CC9ED838EE49;  // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_CameraPosition                  CameraPosition_26_BBD84B44476E72421CFADA9F6CC59CDC; // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Perspective                     Perspective_27_B2ED8694493061191137DD9C869F04BC;   // 0x23(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MusicVolume_55_ED00E78C4380AA51DDEE9CBFD9E82351;   // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MouseInvertY_35_F5E7082B493742608726CD8FC6CEE71B;  // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Headbob_38_607BD6FE497BA1D4618AFD843FE721E8;       // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_202B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AntiAliasing_46_0FCA7A6B464DBB67BBCE3696FA4EAADB;  // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ShadowQuality_49_D8E60DAD4F9257CDEA1728A3E9037CCB; // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WaterCullingQuality_51_E2D01070445A21B7FAA44F81F4D3D03B; // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SoundEffectVolume_59_A777FD8C479E0C8C5D40F68B8BFE05B5; // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VoiceChatVolume_62_533B44064A6ACD1072E07DA457BD6091; // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MouseScrollWeaponSwitching_65_FB9778AF4C521191B90FE1B227FAED86; // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_202C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CommandsVolume_69_5B7FAC3140E37DFF279B599BFCE5CCBC; // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MouseInvertX_71_9474BAA44EF2326BB6B165BEA522E3A3;  // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HideToolTips_73_89547E48442F2AB98FD4DDB44B310496;  // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         EnableRedEnemyOutline_75_246433B541E88C31E1F17E98FE105A19; // 0x4A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         EnableHeadbobWhileSprinting_77_99BBC0BD42E5121DD5F20B986394A347; // 0x4B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        MaxAudioChannels_80_6CFD1A3E4013C87CF615ADAE8D9AA318; // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseFXAA_82_1072BFE9402C81468C6EB8977560DC27;       // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_202D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          DeadZoneColor_87_1EE634DB46E8DDF01F4E7B8C763C2FAE; // 0x54(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


