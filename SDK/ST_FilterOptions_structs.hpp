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

// 0x20 (0x20 - 0x0)
// UserDefinedStruct ST_FilterOptions.ST_FilterOptions
struct FST_FilterOptions
{
public:
	bool                                         EnableFilterCategories_23_8309FEBE4D6DFD928F95B48A866F59C5; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_SteamItemCategories             FilterCategories_22_3447AE6947D7215611E552BD6B224996; // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23E0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinItemCount_21_E6EF32D144618393D0093A82736B8CB0;  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableFilterRarity_25_44BE4A8B4E42F2D778B9AC821874357D; // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                FilterRarities_29_332D67CC43AA44E1CEA43B9B25920C8A; // 0x10(0x10)(Edit, BlueprintVisible)
};

}


