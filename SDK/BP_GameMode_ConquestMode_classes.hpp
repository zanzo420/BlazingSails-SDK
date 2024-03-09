#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x64 (0x698 - 0x634)
// BlueprintGeneratedClass BP_GameMode_ConquestMode.BP_GameMode_ConquestMode_C
class ABP_GameMode_ConquestMode_C : public ABP_CoreGameMode_C
{
public:
	uint8                                        Pad_EA0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x638(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        RedFleetCrews;                                     // 0x640(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BlueFleetCrews;                                    // 0x644(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_ConquestFlag_C*>            AllConquestFlags;                                  // 0x648(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_ConquestBoatSpawn_C*>       AllShipSpawnsUnchanged;                            // 0x658(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FST_ShipSpawnQueue>            ShipsToSpawn;                                      // 0x668(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        ShipCueueShipToRemove;                             // 0x678(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NewShipSpawned;                                    // 0x67C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EA1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxTicketsPerTeam;                                 // 0x680(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TicketDepletionAmount;                             // 0x684(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FlagTicketReductionDelay;                          // 0x688(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SpawnAtWreckTime;                                  // 0x68C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ConquestFlag_C*                    CurrentFlag;                                       // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_GameMode_ConquestMode_C* GetDefaultObj();

	void GrantPlayerResources(class ABP_Character_C* Character, bool CallFunc_AddItem_allItemsAdded, int32 CallFunc_AddItem_amountAdded, bool CallFunc_AddItem_allItemsAdded_1, int32 CallFunc_AddItem_amountAdded_1, bool CallFunc_AddItem_allItemsAdded_2, int32 CallFunc_AddItem_amountAdded_2, bool CallFunc_AddItem_allItemsAdded_3, int32 CallFunc_AddItem_amountAdded_3, bool CallFunc_AddItem_allItemsAdded_4, int32 CallFunc_AddItem_amountAdded_4, bool CallFunc_AddItem_allItemsAdded_5, int32 CallFunc_AddItem_amountAdded_5);
	void RandomizeFlags(class ABP_ConquestFlag_C** NewConquestFlagRef, float CurrentWeight, float RandomWeight, float TotalWeight, class ABP_ConquestFlag_C* LastFlag, TMap<class ABP_ConquestFlag_C*, float> WeightedFlags, int32 RandomFlagIndex, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class ABP_ConquestFlag_C* CallFunc_Array_Get_Item, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float Temp_float_Variable, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class ABP_ConquestFlag_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_GetSquaredDistanceTo_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2);
	void FullyUpgradeShip(class ABP_BoatMeshBase_C* ShipRef, bool CallFunc_UpgradeSteeringWheel_Upgraded, bool CallFunc_UpgradeSteeringWheel_Upgraded_1, TArray<class UChildActorComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UChildActorComponent* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, class ABP_VehicleCannon_C* K2Node_DynamicCast_AsBP_Vehicle_Cannon, bool K2Node_DynamicCast_bSuccess, class ABP_VehicleMortar_C* K2Node_DynamicCast_AsBP_Vehicle_Mortar, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_SwivelPosition_C* K2Node_DynamicCast_AsBP_Swivel_Position, bool K2Node_DynamicCast_bSuccess_2, class ABP_CapstanSloop_C* K2Node_DynamicCast_AsBP_Capstan_Sloop, bool K2Node_DynamicCast_bSuccess_3);
	void AddInitialResourcesToShip(class ABP_BoatMeshBase_C* ShipRef, class ABP_ContainerShip_C* ShipContainerRef, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_AddItem_allItemsAdded, int32 CallFunc_AddItem_amountAdded, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, class ABP_ContainerShip_C* K2Node_DynamicCast_AsBP_Container_Ship, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AddItem_allItemsAdded_1, int32 CallFunc_AddItem_amountAdded_1, bool CallFunc_AddItem_allItemsAdded_2, int32 CallFunc_AddItem_amountAdded_2, bool CallFunc_AddItem_allItemsAdded_3, int32 CallFunc_AddItem_amountAdded_3, bool CallFunc_AddItem_allItemsAdded_4, int32 CallFunc_AddItem_amountAdded_4, bool CallFunc_AddItem_allItemsAdded_5, int32 CallFunc_AddItem_amountAdded_5, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_AddItem_allItemsAdded_6, int32 CallFunc_AddItem_amountAdded_6, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void AddShipToSpawnQueue(int32 FleetID, int32 TeamID, class UClass* ShipClass, TArray<struct FST_InventoryArray>& K2Node_MakeArray_Array, TArray<enum class E_Items>& K2Node_MakeArray_Array_1, const struct FST_ShipSpawnQueue& K2Node_MakeStruct_ST_ShipSpawnQueue, int32 CallFunc_Array_Add_ReturnValue);
	void GetRandomFleetSpawnPointMidMatch(int32 Fleet, class ABP_ConquestBoatSpawn_C** SpawnPoint, bool* Success, bool FoundASpawnPoint, float TempDistance, class ABP_ConquestBoatSpawn_C* TempSpawn, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class ABP_ConquestBoatSpawn_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable_1, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class ABP_ConquestBoatSpawn_C* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void EndConquestMatch(int32 WinningFleet, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_Controller_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4);
	void SortTeamInFleet(int32 TeamID, int32 ResultingFleet, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, TArray<class ABP_Controller_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_Controller_C* CallFunc_Array_Get_Item, int32 CallFunc_Get_Team_ID_Team_ID, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue);
	void GetRandomFleetSpawnPoint(int32 Fleet, TArray<class ABP_ConquestBoatSpawn_C*>& RemainingSpawnPoints);
	void StartConquestMatch(const TArray<class ABP_ConquestBoatSpawn_C*>& ShipSpawns, bool EmptyCrew, class ABP_ConquestBoatSpawn_C* ChosenSpawnPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class ABP_ConquestFlag_C* CallFunc_RandomizeFlags_NewConquestFlagRef, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<class ABP_VehicleCannon_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, TArray<class ABP_ContainerPlayerDeathChest_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_Array_Length_ReturnValue_1, class ABP_VehicleCannon_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TArray<class ABP_PaintSpray_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, TArray<class ABP_WaypointMarker_C*>& CallFunc_GetAllActorsOfClass_OutActors_3, int32 CallFunc_Array_Length_ReturnValue_2, class ABP_WaypointMarker_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_3, TArray<class ABP_CrewBanner_C*>& CallFunc_GetAllActorsOfClass_OutActors_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, TArray<class ABP_ConquestBoatSpawn_C*>& CallFunc_GetAllActorsOfClass_OutActors_5, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Array_Index_Variable_4, class ABP_ContainerPlayerDeathChest_C* CallFunc_Array_Get_Item_2, class ABP_PaintSpray_C* CallFunc_Array_Get_Item_3, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_5, int32 Temp_int_Loop_Counter_Variable_5, class ABP_CrewBanner_C* CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_5, const struct FST_Team_Info& CallFunc_Array_Get_Item_5, bool CallFunc_Less_IntInt_ReturnValue_5, const struct FST_Team_Info& K2Node_SetFieldsInStruct_StructOut);
	void ReceiveBeginPlay();
	void K2_PostLogin(class APlayerController* NewPlayer);
	void ReceiveTick(float DeltaSeconds);
	void K2_OnLogout(class AController* ExitingController);
	void StartGameEvent_TickingEvent_();
	void TeamCreatedEvent(int32 TeamID);
	void EndConquestMatchEvent(int32 WinningFleet);
	void ExecuteUbergraph_BP_GameMode_ConquestMode(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, class APlayerController* K2Node_Event_NewPlayer, float K2Node_Event_DeltaSeconds, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess, class AController* K2Node_Event_ExitingController, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess_1, TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class APlayerStart* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APawn* CallFunc_FinishSpawningActor_ReturnValue, class ABP_DeathCam_C* K2Node_DynamicCast_AsBP_Death_Cam, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, TArray<class ABP_Character_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_Character_C* CallFunc_Array_Get_Item_1, class ABP_ActionItems_C* CallFunc_FinishSpawningActor_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 K2Node_Event_TeamID, int32 Temp_int_Array_Index_Variable_2, int32 K2Node_CustomEvent_WinningFleet, class ABP_Controller_C* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue, const struct FST_ShipSpawnQueue& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_CheckIfCrewIsEmpty_CrewIsEmpty, class ABP_ConquestBoatSpawn_C* CallFunc_GetRandomFleetSpawnPointMidMatch_SpawnPoint, bool CallFunc_GetRandomFleetSpawnPointMidMatch_Success, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class ABP_BoatMeshBase_C* CallFunc_FinishSpawningActor_ReturnValue_2, int32 CallFunc_Set_Base_Parameters_Output_Team_ID, int32 CallFunc_Set_Base_Parameters_Output_Crew_ID, int32 CallFunc_Set_Base_Parameters_Output_Ship_ID, int32 CallFunc_Set_Base_Parameters_Output_Crew_Member_ID, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, TArray<class ABP_ConquestFlag_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, class ABP_ConquestFlag_C* CallFunc_RandomizeFlags_NewConquestFlagRef);
};

}

