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

// 0x35 (0x35 - 0x0)
// UserDefinedStruct ST_Levels.ST_Levels
struct FST_Levels
{
public:
	class FString                                LevelDisplayName_5_B637871B4300DFD4DAAD7ABB870D2F41; // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                LevelMapName_6_9E985B5E493F14E6A749BEAB5E067EFA;   // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	enum class E_GameModes                       LevelMode_18_DF5C8FFD4494BC0D070BDD96AC6CDEF8;     // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D3A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Thumbnail_9_9C9C9C4E4E38CAA3DCE362ACAE34A313;      // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxPlayers_12_EBD021A8402C2FF45B572AAFBC5796E8;    // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enabled_17_40447EE14C2D6C2DC6AA29A469FFC69B;       // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


