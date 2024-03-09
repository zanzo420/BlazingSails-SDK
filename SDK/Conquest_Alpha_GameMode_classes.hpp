#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x4A8 - 0x478)
// BlueprintGeneratedClass Conquest_Alpha_GameMode.Conquest_Alpha_GameMode_C
class AConquest_Alpha_GameMode_C : public AAlpha_GameMode_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ABP_ConquestFlag_C*>            All_Conquest_Flags;                                // 0x480(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_BoatSpawn_C*>               All_Ship_Spawn_Points;                             // 0x490(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_ConquestFlag_C*                    Current_Flag;                                      // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AConquest_Alpha_GameMode_C* GetDefaultObj();

	void Teleport_All_Players_To_Ship(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1, class AConquest_Alpha_Game_State_C* K2Node_DynamicCast_AsConquest_Alpha_Game_State, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_Array_Get_Item, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FST_Loadout>& CallFunc_Get_N_random_Loadouts_Loadouts, bool CallFunc_Less_IntInt_ReturnValue, const struct FST_Loadout& CallFunc_Array_Get_Item_1);
	void Spawn_All_Ships(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class AConquest_Alpha_Game_State_C* K2Node_DynamicCast_AsConquest_Alpha_Game_State, bool K2Node_DynamicCast_bSuccess, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1, int32 CallFunc_Array_Length_ReturnValue, class ANewTeamManager_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class ANewCrewManager_C* CallFunc_Array_Get_Item_1, class ABP_BoatSpawn_C* CallFunc_Get_Random_Fleet_Spawn_Point_SpawnPoint, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void Handle_Ship_Defeat(class ANewShipManager_C* Ship, class ABP_BoatSpawn_C* CallFunc_Get_Random_Fleet_Spawn_Point_SpawnPoint, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1, class AConquest_Alpha_Game_State_C* K2Node_DynamicCast_AsConquest_Alpha_Game_State, bool K2Node_DynamicCast_bSuccess, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_2, float CallFunc_Conv_IntToFloat_ReturnValue, class AConquest_Alpha_Game_State_C* K2Node_DynamicCast_AsConquest_Alpha_Game_State_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Lerp_ReturnValue, int32 CallFunc_Round_ReturnValue);
	void Handle_Crew_Member_Kill_(class AAlpha_PlayerState_C* Killer_Player_State, class AAlpha_PlayerState_C* Killed_Player_State, enum class E_Weapons Weapon, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class AConquest_Alpha_Game_State_C* K2Node_DynamicCast_AsConquest_Alpha_Game_State, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, class AGameStateBase* CallFunc_GetGameState_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class AConquest_Alpha_Game_State_C* K2Node_DynamicCast_AsConquest_Alpha_Game_State_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Lerp_ReturnValue, int32 CallFunc_Round_ReturnValue);
	void Set_Random_Flag(class ABP_ConquestFlag_C** NewConquestFlagRef, float CurrentWeight, float RandomWeight, float TotalWeight, class ABP_ConquestFlag_C* LastFlag, TMap<class ABP_ConquestFlag_C*, float> WeightedFlags, int32 RandomFlagIndex, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class AConquest_Alpha_Game_State_C* K2Node_DynamicCast_AsConquest_Alpha_Game_State, bool K2Node_DynamicCast_bSuccess, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1, class AConquest_Alpha_Game_State_C* K2Node_DynamicCast_AsConquest_Alpha_Game_State_1, bool K2Node_DynamicCast_bSuccess_1, class ABP_ConquestFlag_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class ABP_ConquestFlag_C* CallFunc_Array_Get_Item_1, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float Temp_float_Variable, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_GetSquaredDistanceTo_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void Add_Initial_Resources_To_Ship(class ABP_BoatMeshBase_C* ShipRef, class ABP_ContainerShip_C* ShipContainerRef, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_AddItem_allItemsAdded, int32 CallFunc_AddItem_amountAdded, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, class ABP_ContainerShip_C* K2Node_DynamicCast_AsBP_Container_Ship, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AddItem_allItemsAdded_1, int32 CallFunc_AddItem_amountAdded_1, bool CallFunc_AddItem_allItemsAdded_2, int32 CallFunc_AddItem_amountAdded_2, bool CallFunc_AddItem_allItemsAdded_3, int32 CallFunc_AddItem_amountAdded_3, bool CallFunc_AddItem_allItemsAdded_4, int32 CallFunc_AddItem_amountAdded_4, bool CallFunc_AddItem_allItemsAdded_5, int32 CallFunc_AddItem_amountAdded_5, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_AddItem_allItemsAdded_6, int32 CallFunc_AddItem_amountAdded_6, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Fully_Upgrade_Ship(class ABP_BoatMeshBase_C* ShipRef, bool CallFunc_UpgradeSteeringWheel_Upgraded, bool CallFunc_UpgradeSteeringWheel_Upgraded_1, TArray<class UChildActorComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UChildActorComponent* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, class ABP_VehicleCannon_C* K2Node_DynamicCast_AsBP_Vehicle_Cannon, bool K2Node_DynamicCast_bSuccess, class ABP_VehicleMortar_C* K2Node_DynamicCast_AsBP_Vehicle_Mortar, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_CapstanSloop_C* K2Node_DynamicCast_AsBP_Capstan_Sloop, bool K2Node_DynamicCast_bSuccess_2);
	void Get_Random_Fleet_Spawn_Point(int32 Team_ID, TArray<class ABP_BoatSpawn_C*>& RemainingSpawnPoints, bool Initial_Spawn, class ABP_BoatSpawn_C** SpawnPoint, const TArray<class ABP_BoatSpawn_C*>& Possible_Spawn_Points_, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, class ABP_BoatSpawn_C* CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, class ABP_BoatSpawn_C* CallFunc_Array_Get_Item_1);
	void Find_All_Possible_Spawn_Points(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_BoatSpawn_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABP_BoatSpawn_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Find_All_Flags(TArray<class ABP_ConquestFlag_C*>& CallFunc_GetAllActorsOfClass_OutActors);
	void ReceiveBeginPlay();
	void CharacterSpawned(class APawn* Character, class AAlpha_PlayerController_C* Controller);
	void Start_Game_Custom_Game_Mode();
	void ExecuteUbergraph_Conquest_Alpha_GameMode(int32 EntryPoint, class APawn* K2Node_Event_Character, class AAlpha_PlayerController_C* K2Node_Event_Controller, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess_1, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class ABP_ConquestFlag_C* CallFunc_Set_Random_Flag_NewConquestFlagRef);
};

}


