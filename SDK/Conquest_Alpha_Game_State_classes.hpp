#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x590 - 0x4A8)
// BlueprintGeneratedClass Conquest_Alpha_Game_State.Conquest_Alpha_Game_State_C
class AConquest_Alpha_Game_State_C : public AAlpha_Game_State_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FST_Conquest_Host_Settings_1          Conquest_Host_Settings;                            // 0x4B0(0x94)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_3652[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Max_Tickets;                                       // 0x548(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Flag_Ticket_Amount;                                // 0x54C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                Team_Tickets;                                      // 0x550(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	TArray<int32>                                Round_Victories;                                   // 0x560(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	int32                                        Round_Counter;                                     // 0x570(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3654[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  NewFlagName;                                       // 0x578(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AConquest_Alpha_Game_State_C* GetDefaultObj();

	void Get_N_random_Loadouts(int32 Amount, TArray<struct FST_Loadout>* Loadouts, const struct FST_Loadout& Current_Random_Loadout, int32 Amount_of_Items_To_Select, const TArray<struct FST_Loadout>& Selected_Loadouts, const TArray<struct FST_Loadout>& Possible_Loadouts, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Min_ReturnValue, const struct FST_Loadout& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void CheckConquestVictory(bool* Victory, int32* Losing_Team, bool* Tie, int32 RedTeamWins, int32 BlueTeamWins, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4);
	void Add_Round_Win(int32 Team_ID, class AAlpha_GameMode_C* CallFunc_CurrentGameMode_As_Alpha_Game_Mode, class AConquest_Alpha_GameMode_C* K2Node_DynamicCast_AsConquest_Alpha_Game_Mode, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Check_If_Game_Should_End_Ending, class ABP_ConquestFlag_C* CallFunc_Set_Random_Flag_NewConquestFlagRef, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_CheckConquestVictory_Victory, int32 CallFunc_CheckConquestVictory_Losing_Team, bool CallFunc_CheckConquestVictory_Tie, class ANewTeamManager_C* CallFunc_Find_Team_Team, bool CallFunc_Find_Team_Found);
	void Validate_Team_Tickets(int32 Team_ID, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void Validate_Flag_Tickets(class AAlpha_GameMode_C* CallFunc_CurrentGameMode_As_Alpha_Game_Mode, class AConquest_Alpha_GameMode_C* K2Node_DynamicCast_AsConquest_Alpha_Game_Mode, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, class ABP_ConquestFlag_C* CallFunc_Set_Random_Flag_NewConquestFlagRef);
	void Deplete_Tickets_Flag(int32 Team_ID, int32 Current_Team_Tickets, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void Deplete_Tickets_Internal(int32 Team_ID, int32 Amount, int32 Current_Team_Tickets, int32 CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void Deplete_Tickets(int32 Team_ID, bool UseCustomAmount, int32 Custom_Amount);
	void Reset_Flag_Tickets_Amount();
	void Reset_Teams_Tickests_Amount();
	void MC_BroadCastConquestRoundVictory(int32 Team_ID);
	void MC_NewFlagAnnouncement(class FText NewFlagName);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Conquest_Alpha_Game_State(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class UUI_FlagCaptured_C* CallFunc_Create_ReturnValue, int32 K2Node_CustomEvent_Team_ID, TArray<class UUI_FlagCaptured_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_FlagCaptured_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class FText K2Node_CustomEvent_NewFlagName, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_GameInstance_C* CallFunc_Current_Game_BP_Instance_AsBP_Game_Instance);
};

}


