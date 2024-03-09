#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A1 (0x1C9 - 0x28)
// BlueprintGeneratedClass SG_SaveGame.SG_SaveGame_C
class USG_SaveGame_C : public USaveGame
{
public:
	TArray<class FText>                          UsedCodes;                                         // 0x28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Dv;                                                // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class E_ShipTypes                       SelectedShipType;                                  // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A31[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FUniqueNetIdRepl>              MutedPlayerList;                                   // 0x40(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         SkeletonDLC;                                       // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A32[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class E_ShipTypes, struct FST_ShipCustomisations> Ship_Customizations;                               // 0x58(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FST_PlayerCustomisation               Player_Customizations;                             // 0xA8(0x6C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_NewSortOptions                    Sort_Settings;                                     // 0x114(0x3)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Streamer_Mode;                                     // 0x117(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Pirate_Curse;                                      // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A33[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_ServerHostSettingsMew             Server_Host_Settings;                              // 0x120(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FST_GunGameHostSettings_updated       Server_Host_GunGame_Settings;                      // 0x1A8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         HasPlayerTutorial;                                 // 0x1C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USG_SaveGame_C* GetDefaultObj();

};

}


