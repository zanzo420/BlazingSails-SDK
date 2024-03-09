#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x4A8 - 0x388)
// BlueprintGeneratedClass Alpha_Game_State.Alpha_Game_State_C
class AAlpha_Game_State_C : public ABP_GameState_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTODManager_C*                         TODManager;                                        // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FST_ServerHostSettingsMew             Server_Host_Settings;                              // 0x398(0x88)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class ANewTeamManager_C*>             TeamManagers;                                      // 0x420(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_BoatSpawn_C*>               Ship_Spawn_Points;                                 // 0x430(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        Remaining_Team_Count;                              // 0x440(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Remaining_Ship_Count;                              // 0x444(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Remaining_Player_Count;                            // 0x448(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Winning_Team_ID;                                   // 0x44C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_GameModes                       GameMode;                                          // 0x450(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Session_Time;                                      // 0x454(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Started_Timer;                                     // 0x458(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Start_Timer;                                       // 0x45C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GameOver;                                          // 0x460(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Spawn_Loot_Chest_On_Player_Death;                  // 0x461(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Rewarded_Ids;                                      // 0x468(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Pre_Game;                                          // 0x478(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Client_Hosted_Custom_Game;                         // 0x479(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Fleet_Mode_To_Be_Reworked;                         // 0x47A(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FST_Team_Strucutre_Info>       Team_Structure_Info;                               // 0x480(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Match_Making_Player_Count;                         // 0x490(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Has_Set_Team_Structure_Info;                       // 0x494(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FST_Team_Strucutre_Info>       Team_Unique_Id_Structure_Info;                     // 0x498(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AAlpha_Game_State_C* GetDefaultObj();

	void Find_Team_For_Player(const class FString& Player_Platform_ID, const struct FUniqueNetIdRepl& Player_ID, int32* Team_ID, bool* Found_Team, const class FString& CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, const struct FST_Team_Strucutre_Info& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FST_Team_Strucutre_Info& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_1);
	void Custom_GetServerWorldTimeSeconds(float* ServerTime, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_Controller_C* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_IsLocalPlayerController_ReturnValue);
	void Make_New_Team(class ANewTeamManager_C* Team, int32 CallFunc_Array_Add_ReturnValue);
	void Print_Team_Info(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class ANewTeamManager_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class ANewCrewManager_C* CallFunc_Array_Get_Item_1, class AAlpha_PlayerState_C* CallFunc_Array_Get_Item_2, const class FString& CallFunc_GetPlayerName_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void Load_Server_Host_Settings();
	void Set_Server_Host_Settings(const struct FST_ServerHostSettingsMew& Server_Host_Settings);
	void ExecuteUbergraph_Alpha_Game_State(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_GetGameTimeInSeconds_ReturnValue, class UBP_GameInstance_C* CallFunc_Current_Game_BP_Instance_AsBP_Game_Instance, const struct FST_ServerHostSettingsMew& K2Node_CustomEvent_Server_Host_Settings);
};

}


