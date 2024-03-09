#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_achievements.BP_Achievements_C
// (Actor)

class UClass* ABP_Achievements_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Achievements_C");

	return Clss;
}


// BP_Achievements_C BP_achievements.Default__BP_Achievements_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Achievements_C* ABP_Achievements_C::GetDefaultObj()
{
	static class ABP_Achievements_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Achievements_C*>(ABP_Achievements_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_achievements.BP_Achievements_C.CheckIfCannon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Weapons               WeaponType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsCannon                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsCannonBall                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Achievements_C::CheckIfCannon(enum class E_Weapons WeaponType, bool* IsCannon, bool IsCannonBall, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievements_C", "CheckIfCannon");

	Params::ABP_Achievements_C_CheckIfCannon_Params Parms{};

	Parms.WeaponType = WeaponType;
	Parms.IsCannonBall = IsCannonBall;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (IsCannon != nullptr)
		*IsCannon = Parms.IsCannon;

}


// Function BP_achievements.BP_Achievements_C.CheckAchievement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Achievement             AchievementStruct                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Achievements_C::CheckAchievement(const struct FST_Achievement& AchievementStruct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievements_C", "CheckAchievement");

	Params::ABP_Achievements_C_CheckAchievement_Params Parms{};

	Parms.AchievementStruct = AchievementStruct;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_achievements.BP_Achievements_C.SaveAchievements
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USG_Achievements_C*          CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Achievements_C::SaveAchievements(class USG_Achievements_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievements_C", "SaveAchievements");

	Params::ABP_Achievements_C_SaveAchievements_Params Parms{};

	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_achievements.BP_Achievements_C.LoadAchievements
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USG_Achievements_C*          K2Node_DynamicCast_AsSG_Achievements                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Achievements_C::LoadAchievements(class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, class USG_Achievements_C* K2Node_DynamicCast_AsSG_Achievements, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievements_C", "LoadAchievements");

	Params::ABP_Achievements_C_LoadAchievements_Params Parms{};

	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.K2Node_DynamicCast_AsSG_Achievements = K2Node_DynamicCast_AsSG_Achievements;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_achievements.BP_Achievements_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Achievements_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievements_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_achievements.BP_Achievements_C.StartedGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Achievements_C::StartedGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievements_C", "StartedGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_achievements.BP_Achievements_C.UnlockAchievementSteam
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AchievementName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AchievementID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           Player_controller                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Achievements_C::UnlockAchievementSteam(class FName AchievementName, int32 AchievementID, class APlayerController* Player_controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievements_C", "UnlockAchievementSteam");

	Params::ABP_Achievements_C_UnlockAchievementSteam_Params Parms{};

	Parms.AchievementName = AchievementName;
	Parms.AchievementID = AchievementID;
	Parms.Player_controller = Player_controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_achievements.BP_Achievements_C.WonGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TeamID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WinningTeamId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Achievements_C::WonGame(int32 TeamID, int32 WinningTeamId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievements_C", "WonGame");

	Params::ABP_Achievements_C_WonGame_Params Parms{};

	Parms.TeamID = TeamID;
	Parms.WinningTeamId = WinningTeamId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_achievements.BP_Achievements_C.OpenTreasureChest
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Achievements_C::OpenTreasureChest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievements_C", "OpenTreasureChest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_achievements.BP_Achievements_C.OverlapWilson
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Achievements_C::OverlapWilson()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievements_C", "OverlapWilson");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_achievements.BP_Achievements_C.CustomizeShip
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Achievements_C::CustomizeShip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievements_C", "CustomizeShip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_achievements.BP_Achievements_C.CustomizeCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Achievements_C::CustomizeCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievements_C", "CustomizeCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_achievements.BP_Achievements_C.RevengeKill
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Achievements_C::RevengeKill()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievements_C", "RevengeKill");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_achievements.BP_Achievements_C.KillWhileShipDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Achievements_C::KillWhileShipDead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievements_C", "KillWhileShipDead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_achievements.BP_Achievements_C.SwitchedCrew
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Achievements_C::SwitchedCrew()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievements_C", "SwitchedCrew");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_achievements.BP_Achievements_C.CheckIfHighestScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HighestScore                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Achievements_C::CheckIfHighestScore(int32 HighestScore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievements_C", "CheckIfHighestScore");

	Params::ABP_Achievements_C_CheckIfHighestScore_Params Parms{};

	Parms.HighestScore = HighestScore;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_achievements.BP_Achievements_C.AddKillAch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Weapons               WeaponType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Achievements_C::AddKillAch(enum class E_Weapons WeaponType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievements_C", "AddKillAch");

	Params::ABP_Achievements_C_AddKillAch_Params Parms{};

	Parms.WeaponType = WeaponType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_achievements.BP_Achievements_C.BigCrew
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Achievements_C::BigCrew()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievements_C", "BigCrew");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_achievements.BP_Achievements_C.DiscoverTropical
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Achievements_C::DiscoverTropical()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievements_C", "DiscoverTropical");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_achievements.BP_Achievements_C.DiscoverTrident
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Achievements_C::DiscoverTrident()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievements_C", "DiscoverTrident");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_achievements.BP_Achievements_C.DiscoverTemple
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Achievements_C::DiscoverTemple()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievements_C", "DiscoverTemple");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_achievements.BP_Achievements_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Achievements_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievements_C", "ReceiveEndPlay");

	Params::ABP_Achievements_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_achievements.BP_Achievements_C.FindDuck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Achievements_C::FindDuck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievements_C", "FindDuck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_achievements.BP_Achievements_C.ExecuteUbergraph_BP_Achievements
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Achievement             CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Achievement             CallFunc_GetDataTableRowFromName_OutRow_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Achievement             CallFunc_GetDataTableRowFromName_OutRow_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_AchievementName                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_AchievementID                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_CustomEvent_player_controller                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_TeamId                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_WinningTeamId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Achievement             CallFunc_GetDataTableRowFromName_OutRow_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Achievement             CallFunc_GetDataTableRowFromName_OutRow_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Achievement             CallFunc_GetDataTableRowFromName_OutRow_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Achievement             CallFunc_GetDataTableRowFromName_OutRow_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_HighestScore                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Achievement             CallFunc_GetDataTableRowFromName_OutRow_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetScore_Score                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Weapons               K2Node_CustomEvent_WeaponType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckIfCannon_IsCannon                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Achievement             CallFunc_GetDataTableRowFromName_OutRow_8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_8                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Achievement             CallFunc_GetDataTableRowFromName_OutRow_9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_9                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Achievement             CallFunc_GetDataTableRowFromName_OutRow_10                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_10                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Achievement             CallFunc_GetDataTableRowFromName_OutRow_11                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_11                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Achievement             CallFunc_GetDataTableRowFromName_OutRow_12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_12                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Achievement             CallFunc_GetDataTableRowFromName_OutRow_13                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_13                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Achievement             CallFunc_GetDataTableRowFromName_OutRow_14                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_14                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Achievement             CallFunc_GetDataTableRowFromName_OutRow_15                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_15                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Achievements_C::ExecuteUbergraph_BP_Achievements(int32 EntryPoint, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, class FName K2Node_CustomEvent_AchievementName, int32 K2Node_CustomEvent_AchievementID, class APlayerController* K2Node_CustomEvent_player_controller, int32 K2Node_CustomEvent_TeamId, int32 K2Node_CustomEvent_WinningTeamId, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_5, bool CallFunc_GetDataTableRowFromName_ReturnValue_5, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_6, bool CallFunc_GetDataTableRowFromName_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_CustomEvent_HighestScore, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_7, bool CallFunc_GetDataTableRowFromName_ReturnValue_7, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetScore_Score, enum class E_Weapons K2Node_CustomEvent_WeaponType, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_CheckIfCannon_IsCannon, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_8, bool CallFunc_GetDataTableRowFromName_ReturnValue_8, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_9, bool CallFunc_GetDataTableRowFromName_ReturnValue_9, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_10, bool CallFunc_GetDataTableRowFromName_ReturnValue_10, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_11, bool CallFunc_GetDataTableRowFromName_ReturnValue_11, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_12, bool CallFunc_GetDataTableRowFromName_ReturnValue_12, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_13, bool CallFunc_GetDataTableRowFromName_ReturnValue_13, int32 Temp_int_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_14, bool CallFunc_GetDataTableRowFromName_ReturnValue_14, const struct FST_Achievement& CallFunc_GetDataTableRowFromName_OutRow_15, bool CallFunc_GetDataTableRowFromName_ReturnValue_15)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievements_C", "ExecuteUbergraph_BP_Achievements");

	Params::ABP_Achievements_C_ExecuteUbergraph_BP_Achievements_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.K2Node_CustomEvent_AchievementName = K2Node_CustomEvent_AchievementName;
	Parms.K2Node_CustomEvent_AchievementID = K2Node_CustomEvent_AchievementID;
	Parms.K2Node_CustomEvent_player_controller = K2Node_CustomEvent_player_controller;
	Parms.K2Node_CustomEvent_TeamId = K2Node_CustomEvent_TeamId;
	Parms.K2Node_CustomEvent_WinningTeamId = K2Node_CustomEvent_WinningTeamId;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_5 = CallFunc_GetDataTableRowFromName_OutRow_5;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_5 = CallFunc_GetDataTableRowFromName_ReturnValue_5;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_6 = CallFunc_GetDataTableRowFromName_OutRow_6;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_6 = CallFunc_GetDataTableRowFromName_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_HighestScore = K2Node_CustomEvent_HighestScore;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_7 = CallFunc_GetDataTableRowFromName_OutRow_7;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_7 = CallFunc_GetDataTableRowFromName_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetScore_Score = CallFunc_GetScore_Score;
	Parms.K2Node_CustomEvent_WeaponType = K2Node_CustomEvent_WeaponType;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_CheckIfCannon_IsCannon = CallFunc_CheckIfCannon_IsCannon;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_8 = CallFunc_GetDataTableRowFromName_OutRow_8;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_8 = CallFunc_GetDataTableRowFromName_ReturnValue_8;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_9 = CallFunc_GetDataTableRowFromName_OutRow_9;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_9 = CallFunc_GetDataTableRowFromName_ReturnValue_9;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_10 = CallFunc_GetDataTableRowFromName_OutRow_10;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_10 = CallFunc_GetDataTableRowFromName_ReturnValue_10;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_11 = CallFunc_GetDataTableRowFromName_OutRow_11;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_11 = CallFunc_GetDataTableRowFromName_ReturnValue_11;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_12 = CallFunc_GetDataTableRowFromName_OutRow_12;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_12 = CallFunc_GetDataTableRowFromName_ReturnValue_12;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_13 = CallFunc_GetDataTableRowFromName_OutRow_13;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_13 = CallFunc_GetDataTableRowFromName_ReturnValue_13;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_14 = CallFunc_GetDataTableRowFromName_OutRow_14;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_14 = CallFunc_GetDataTableRowFromName_ReturnValue_14;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_15 = CallFunc_GetDataTableRowFromName_OutRow_15;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_15 = CallFunc_GetDataTableRowFromName_ReturnValue_15;

	UObject::ProcessEvent(Func, &Parms);

}

}


