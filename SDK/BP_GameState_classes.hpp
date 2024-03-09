#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10F (0x388 - 0x279)
// BlueprintGeneratedClass BP_GameState.BP_GameState_C
class ABP_GameState_C : public AEOS_Game_State_C
{
public:
	uint8                                        Pad_28CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_CoreGameMode_C*                    GameModeRef;                                       // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Level;                                             // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxPlayerPerCrew;                                  // 0x294(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Spawn_Selection_Timer;                             // 0x298(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InSpawnSelect;                                     // 0x29C(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28D0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ASeaCollisionRepresentation_C*> SeaCollisionRepArray;                              // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FVector>                       SeaColPositionArray;                               // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                SeaColRadiusArray;                                 // 0x2C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_Deathzone_C*                       DeathZone;                                         // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CoreGameMode_C*                    CoreGameMode;                                      // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DeathZoneValid_;                                   // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28D1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InZoneWaveHeight;                                  // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxInventoryWeight;                                // 0x2E8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BlueCrews_OLD;                                     // 0x2EC(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RedCrews_OLD;                                      // 0x2F0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinTeleportTime;                                   // 0x2F4(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxTeleportTime;                                   // 0x2F8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxShipsPerFleet;                                  // 0x2FC(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IncomingPlayersAmount;                             // 0x300(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InProgress;                                        // 0x304(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            SettingChangeEvent;                                // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        ScoreMultiplier_0;                                 // 0x318(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Round_OLD;                                         // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FlagTickets_OLD;                                   // 0x320(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  NewFlagName_OLD;                                   // 0x328(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        TreasureHuntGameTimer;                             // 0x340(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaTime;                                         // 0x344(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                 TeamHasCommandCooldown;                            // 0x348(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                 TeamHasEnemySpottedCommandCooldown;                // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_Team_Info>                 Teams;                                             // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ABP_Controller_C*>              ConnectedControllers;                              // 0x378(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_GameState_C* GetDefaultObj();

	void RemoveGoldPercentage(float Percent_0Minus1_, int32 TeamID, int32* AmountRemoved, int32 GoldAmountToDeplete, int32 Temp_int_Array_Index_Variable, TArray<struct FST_Team_Info>& K2Node_MakeArray_Array, const struct FST_Team_Info& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FST_Team_Info& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetSeaSpherePosAndRadius(TArray<class ASeaCollisionRepresentation_C*>& SeaColArray, TArray<struct FVector>* PositionArray, TArray<float>* RadiusArray, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class ASeaCollisionRepresentation_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetScaledSphereRadius_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
	void BroadcastAnnouncement(class FText Message, bool NotificationSound, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_Controller_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void TransferGoldFromTeamToTeam(int32 FromTeam, int32 ToTeam, int32 GoldAmountToTransfer, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool Temp_bool_True_if_break_was_hit_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, TArray<struct FST_Team_Info>& K2Node_MakeArray_Array, const struct FST_Team_Info& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FST_Team_Info>& K2Node_MakeArray_Array_1, const struct FST_Team_Info& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FST_Team_Info& K2Node_SetFieldsInStruct_StructOut, const struct FST_Team_Info& K2Node_SetFieldsInStruct_StructOut_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1);
	void AddGoldToCrew(int32 GoldAmount, int32 TeamID, const struct FST_Team_Info& CallFunc_Get_Team_With_ID_Team, bool CallFunc_Get_Team_With_ID_TeamFound, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool Temp_bool_True_if_break_was_hit_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_Format_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FST_SimpleMessage& K2Node_MakeStruct_ST_SimpleMessage, int32 Temp_int_Loop_Counter_Variable, TArray<struct FST_Team_Info>& K2Node_MakeArray_Array_1, const struct FST_Team_Info& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Clamp_ReturnValue, const struct FST_Team_Info& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ABP_CoreGameMode_C* K2Node_DynamicCast_AsBP_Core_Game_Mode, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_GameState(int32 EntryPoint, TArray<class ASeaCollisionRepresentation_C*>& CallFunc_GetAllActorsOfClass_OutActors, TArray<struct FVector>& CallFunc_GetSeaSpherePosAndRadius_PositionArray, TArray<float>& CallFunc_GetSeaSpherePosAndRadius_RadiusArray, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_MainPP_C* CallFunc_FinishSpawningActor_ReturnValue);
	void SettingChangeEvent__DelegateSignature();
};

}


