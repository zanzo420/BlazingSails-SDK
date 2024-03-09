#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// BlueprintGeneratedClass SG_Achievements.SG_Achievements_C
class USG_Achievements_C : public USaveGame
{
public:
	bool                                         HasStartedGame;                                    // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_239E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 AchievementsUnlocked;                              // 0x30(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class USG_Achievements_C* GetDefaultObj();

};

}


