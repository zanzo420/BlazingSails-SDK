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

// 0xBC (0xBC - 0x0)
// UserDefinedStruct ST_Team_Info.ST_Team_Info
struct FST_Team_Info
{
public:
	int32                                        TeamID_3_FFA23020468BBEDB9D8B689679B08025;         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TeamFirstNameRow_18_0285FB684A99ADA2FC6A22ABC25C4C18; // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EmblemRow_45_D509801E44B5CDF93EA797A6F1755BB9;     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EmblemIndex_46_B4430570403BD4FCD3D807A724391580;   // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TeamCOlorRow_25_B1C6B8954D3F3AEB713046A4DE9B1239;  // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Defeated_27_DAB622274CE24A0ECAF1F093646E09E6;      // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2746[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TeamRank_30_DCD44BB14FD517664032E8BAFD575142;      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GoldAmount_33_911CFEF542D478ABE8EABFAC26CEBD26;    // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseController_C*                  LeaderController_73_F556E87F4DAA97B7C16BA4967B162B9F; // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  ShipName_41_0703C25848C7C25BDF4D67BF982DC174;      // 0x28(0x18)(Edit, BlueprintVisible)
	class FText                                  FilteredShipName_69_3C4911ED4F18AD4A87F8719608DB53F0; // 0x40(0x18)(Edit, BlueprintVisible)
	struct FVector                               SpawnPoint_44_4C884FD6414FC3826C394C84FB7C92DF;    // 0x58(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2747[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FUniqueNetIdRepl>              PartyMemberIDs_52_45D7A5B54D0F656FDFE1DCB377120269; // 0x68(0x10)(Edit, BlueprintVisible)
	bool                                         bLockedToParty_54_150CF55D4E535427D36289BBB31A43A4; // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_ShipTypes                       ShipType_58_B06C70F74F3058B9963416A41DC35AE3;      // 0x79(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2748[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      UniquePartyLeaderID_61_0D9C7A2B4E3F9E13772D81898AA35199; // 0x80(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FUniqueNetIdRepl>              BannedPlayerTeamList_66_ED47F1F941B180AF9FC2199BA7343C99; // 0xA8(0x10)(Edit, BlueprintVisible)
	int32                                        FleetID_72_97F8D3F84C6482CC5D232483A38E6E4A;       // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


