#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x490 - 0x478)
// BlueprintGeneratedClass GunGame_Alpha_GameMode.GunGame_Alpha_GameMode_C
class AGunGame_Alpha_GameMode_C : public AAlpha_GameMode_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AActor*>                        Possible_Spawn_Points;                             // 0x480(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AGunGame_Alpha_GameMode_C* GetDefaultObj();

	void Sanitize_Weapon_Order_And_Apply(const TArray<int32>& Sanitized_Gun_List, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class AGunGame_Alpha_GameState_C* K2Node_DynamicCast_AsGun_Game_Alpha_Game_State, bool K2Node_DynamicCast_bSuccess, class UBP_GameInstance_C* CallFunc_Current_Game_BP_Instance_AsBP_Game_Instance, class UBP_GameInstance_C* CallFunc_Current_Game_BP_Instance_AsBP_Game_Instance_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void Increase_Weapon_Level_(class UObject* Object, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, int32 CallFunc_Add_IntInt_ReturnValue_1, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_2, class AGunGame_Alpha_GameState_C* K2Node_DynamicCast_AsGun_Game_Alpha_Game_State, bool K2Node_DynamicCast_bSuccess_1, class ABP_Controller_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Subtract_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Compare_Crew_Member_ID_Is_Same_Team_Crew_And_Ship, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Find_All_Possible_Spawn_Points(TSet<class AActor*> Working_Set, TArray<class AActor*>& CallFunc_Set_ToArray_Result, TArray<class ABP_RandomItemTreasureChestSpawnPoint_C*>& CallFunc_GetAllActorsOfClass_OutActors, TArray<class ABP_RandomItemSpawnPoint_C*>& CallFunc_GetAllActorsOfClass_OutActors_1);
	void Defeat_All_Other_Teams(class AAlpha_PlayerState_C* Winning_Player_State, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class ANewTeamManager_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class ANewCrewManager_C* CallFunc_Array_Get_Item_1, bool CallFunc_Compare_Teams_Is_Same_Team, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1, class AGunGame_Alpha_GameState_C* K2Node_DynamicCast_AsGun_Game_Alpha_Game_State, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void Give_Weapon_to_Player(class ABP_Character_C* Character_Ref, int32 Weapon_Level, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class AGunGame_Alpha_GameState_C* K2Node_DynamicCast_AsGun_Game_Alpha_Game_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Get_Item, const struct FST_Weapon_Data& CallFunc_GetWeaponInfo_Out_Row, bool CallFunc_GetWeaponInfo_Found);
	void Handle_Crew_Member_Kill_(class AAlpha_PlayerState_C* Killer_Player_State, class AAlpha_PlayerState_C* Killed_Player_State, enum class E_Weapons Weapon);
	void Get_Unique_Start_Positions(int32 Amount_of_Positions_Needed, TArray<class AActor*>* Picked_Start_Locations, const TArray<class AActor*>& Valid_Start_Locations, const TArray<int32>& IDs, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1);
	void Teleport_All_Players_To_Start_Position(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_Array_Get_Item, TArray<class AActor*>& CallFunc_Get_Unique_Start_Positions_Picked_Start_Locations, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	void Start_Game_Custom_Game_Mode();
	void ReceiveBeginPlay();
	void CharacterSpawned(class APawn* Character, class AAlpha_PlayerController_C* Controller);
	void ExecuteUbergraph_GunGame_Alpha_GameMode(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APawn* K2Node_Event_Character, class AAlpha_PlayerController_C* K2Node_Event_Controller, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess_1, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1, class APlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue);
};

}


