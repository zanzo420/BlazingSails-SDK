#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x260 - 0x220)
// BlueprintGeneratedClass BP_achievements.BP_Achievements_C
class ABP_Achievements_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_Controller_C*                      Controller;                                        // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                 IsAchievementUnlocked;                             // 0x238(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        TimesSwitchedCrew;                                 // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        KilledWithCannon;                                  // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AreAchievementsCachedThisFrame;                    // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2764[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     GenericPlayerControllerRef;                        // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Achievements_C* GetDefaultObj();

	void CheckIfCannon(enum class E_Weapons WeaponType, bool* IsCannon, bool IsCannonBall, bool K2Node_SwitchEnum_CmpSuccess);
	void CheckAchievement(const struct FST_Achievement& AchievementStruct);
	void SaveAchievements(class USG_Achievements_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue);
	void LoadAchievements(class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, class USG_Achievements_C* K2Node_DynamicCast_AsSG_Achievements, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void StartedGame();
	void UnlockAchievementSteam(class FName AchievementName, int32 AchievementID, class APlayerController* Player_controller);
	void WonGame(int32 TeamID, int32 WinningTeamId);
	void OpenTreasureChest();
	void OverlapWilson();
	void CustomizeShip();
	void CustomizeCharacter();
	void RevengeKill();
	void KillWhileShipDead();
	void SwitchedCrew();
	void CheckIfHighestScore(int32 HighestScore);
	void AddKillAch(enum class E_Weapons WeaponType);
	void BigCrew();
	void DiscoverTropical();
	void DiscoverTrident();
	void DiscoverTemple();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void FindDuck();
	void ExecuteUbergraph_BP_Achievements(int32 EntryPoint, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, class FName K2Node_CustomEvent_AchievementName, int32 K2Node_CustomEvent_AchievementID, class APlayerController* K2Node_CustomEvent_player_controller, int32 K2Node_CustomEvent_TeamId, int32 K2Node_CustomEvent_WinningTeamId, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_5, bool CallFunc_GetDataTableRowFromName_ReturnValue_5, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_6, bool CallFunc_GetDataTableRowFromName_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_CustomEvent_HighestScore, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_7, bool CallFunc_GetDataTableRowFromName_ReturnValue_7, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetScore_Score, enum class E_Weapons K2Node_CustomEvent_WeaponType, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_CheckIfCannon_IsCannon, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_8, bool CallFunc_GetDataTableRowFromName_ReturnValue_8, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_9, bool CallFunc_GetDataTableRowFromName_ReturnValue_9, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_10, bool CallFunc_GetDataTableRowFromName_ReturnValue_10, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_11, bool CallFunc_GetDataTableRowFromName_ReturnValue_11, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_12, bool CallFunc_GetDataTableRowFromName_ReturnValue_12, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_13, bool CallFunc_GetDataTableRowFromName_ReturnValue_13, int32 Temp_int_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_14, bool CallFunc_GetDataTableRowFromName_ReturnValue_14, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_15, bool CallFunc_GetDataTableRowFromName_ReturnValue_15);
};

}


