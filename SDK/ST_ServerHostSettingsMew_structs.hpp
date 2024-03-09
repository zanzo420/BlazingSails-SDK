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

// 0x88 (0x88 - 0x0)
// UserDefinedStruct ST_ServerHostSettingsMew.ST_ServerHostSettingsMew
struct FST_ServerHostSettingsMew
{
public:
	enum class E_GameModes                       GameMode_2_4F7269064D78B477E5C466BE808F7B49;       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_286C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class E_GameModes, int32>          Level_Index_24_37D811284AC652C31064B4A32D6DC06C;   // 0x8(0x50)(Edit, BlueprintVisible)
	class FString                                SeverName_8_06DC449A414553A61241479BFDA9BCB5;      // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	enum class E_TimesOfDay                      TimeOfDay_11_CBA912854020A6B9D04016949E978645;     // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_286D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxPlayersPerCrew_14_B147EF1244D259AFC82770882D5C69EA; // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasPassword_16_1559A85E4A482182629E8C8AD86726BE;   // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_286E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Password_19_A0AF1A0842C949FBD0D2E28D62E78DBC;      // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};

}


