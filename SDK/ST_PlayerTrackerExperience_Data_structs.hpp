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

// 0x4B (0x4B - 0x0)
// UserDefinedStruct ST_PlayerTrackerExperience_Data.ST_PlayerTrackerExperience_Data
struct FST_PlayerTrackerExperience_Data
{
public:
	int32                                        Experience_Total_2_800BA09B45C801D7D6E8F7A64A774F62; // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Experience_Previous_4_550B9FE5472C6E7325A133BA4FCE4C96; // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Experience_Gained_6_1643E9AF4E6AD6DB04A525B10515B9BE; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Level_Total_8_6F63437C46F407C705D76DA69D2530E1;    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Level_Previous_10_C8C8875F41DFBD0FF03B01BE58534C6F; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Level_Gained_12_9AED283E4EB0ABCFB6BD9C86A34C56AD;  // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PostReward_14_7913F1134CA759C0282247AAEFBAACFF;    // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BRGamesPlayed_19_F1FD4B8F4356007302DDA9B7D6CDCB11; // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BRGamesWon_20_8AB87D8B4BE9F58C1324C69E238617F2;    // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ConGamesPlayed_22_7E439AB94CE9014C13712DB51C6EE27A; // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ConGamesWon_24_4AB6C41A46555930404425A3E608C2F1;   // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CursedGamesPlayed_26_709B9D9F4A2309058EF52991A6BCD03C; // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CursedGamesWon_28_8DDD105A4BCFF8FF448C009C4BFB50F1; // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FirstSeen_31_8C9737EE4BD9AF8A5DFEA8BBCCA282B0;     // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         HasWonBRGame_33_723ED83B4CA9C978FA3D68B1684C9E16;  // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HasWonConquestGame_35_E192C2334DF5284BC6E334A02153EF4C; // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HasWonCursedGame_37_38B3C0EB47E2C5E676393AB9BB2419F3; // 0x4A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


