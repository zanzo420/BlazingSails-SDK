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

// 0x94 (0x94 - 0x0)
// UserDefinedStruct ST_Conquest_Host_Settings_1.ST_Conquest_Host_Settings_1
struct FST_Conquest_Host_Settings_1
{
public:
	enum class E_ShipTypes                       ConquestShip_34_725444954D3293E7DBDCE6926CE09045;  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StartingTicketsAmount_3_E6D606AA43BCA7F9CD60C398AA3C7467; // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableFlags_24_0542EB4340E35843B54BB59A77492379;   // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FlagTicketsAmount_5_2DBFC2874BC80BA7100F1493D9A2245C; // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FlagDepletionRate_35_7E8CCE5C498C53DDB359FC9AE865BB08; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FlagDepletionAmount_38_A69A3A3449737E1E68FB4DBA3707E276; // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DepleteTicketsOnSink_21_748AFFDA42F3383AB2DF4E88C6A7A2E0; // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SinkTicketAmount_10_4FF7BB144BE21C6AC465BBA9C6B118CB; // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SinkTicketAmountLowPop_12_FBABFB5E41894EE25B9BEFAEB6CD5DD7; // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DepleteTicketsOnKill_19_A98728A94EFD7E2CA82EA58A15604CE8; // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28E0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        KillTicketAmount_14_D6F0ADF447595AF8CDE8B9B1815ED4AA; // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        KillTicketAmountLowPop_16_0A693A2D48D1C1522C9464998F9C5070; // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableDefaultLoadout_44_01D4FF9C45F3FC4FD62119A9435F01CB; // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_Loadout                           DefaultLoadout_41_165296EE4F1F5BA7373F21B425AB4FD7; // 0x38(0x40)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        LoadoutOptionCount_27_56CA75FB4EFE24FA61F42A918705322E; // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28E2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FST_Loadout>                   Loadouts_31_589018514BE5D51D56E0D2B220667C81;      // 0x80(0x10)(Edit, BlueprintVisible)
	int32                                        RoundCount_47_7A4FB0B745A7718AE58327A62C0D1F3E;    // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


