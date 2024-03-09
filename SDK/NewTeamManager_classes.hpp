#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC3 (0x2E3 - 0x220)
// BlueprintGeneratedClass NewTeamManager.NewTeamManager_C
class ANewTeamManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTeam_Crew_Ship_Member_State_C*        Team_Crew_Ship_Member_State;                       // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ANewCrewManager_C*>             CrewManagers;                                      // 0x238(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        Points;                                            // 0x248(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DB2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            On_Team_Create;                                    // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            On_Team_Points_Updated;                            // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Ship_or_Crew_Amount_Updated;                       // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            On_Team_Defeat;                                    // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Defeated;                                          // 0x290(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DB3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Rank;                                              // 0x294(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Team_Name;                                         // 0x298(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            On_Crew_Defeat;                                    // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            On_Ship_Defeat;                                    // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            On_Crew_Member_Defeat;                             // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Rank_Set;                                          // 0x2E0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Rewards_In_Progress;                               // 0x2E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Rewards_Given;                                     // 0x2E2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ANewTeamManager_C* GetDefaultObj();

	void Get_Team_Player_Size(int32* Team_Player_Size, int32 Team_Size, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ANewCrewManager_C* CallFunc_Array_Get_Item, int32 CallFunc_Get_Crew_Size_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	void Construct_();
	void Get_All_Player_Controller_(TArray<class AAlpha_PlayerController_C*>* Team_Player_Controllers, const TArray<class AAlpha_PlayerController_C*>& Player_Controllers, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class ABP_Controller_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Compare_Teams_Is_Same_Team, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void AddPlayer(class APlayerController* Player_controller, int32 Crew_ID, int32 Position_ID, bool* Success, bool Successfull_, class ANewCrewManager_C* CallFunc_Find_Crew_with_ID_Crew_Manager, bool CallFunc_Find_Crew_with_ID_Found, class AAlpha_PlayerState_C* K2Node_DynamicCast_AsAlpha_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AddPlayer_Success, class ANewCrewManager_C* CallFunc_Create_Crew_Manager_Crew_Manager, bool CallFunc_AddPlayer_Success_1, int32 CallFunc_Array_Add_ReturnValue);
	void Set_Team_Rank_Custom(int32 Rank, int32 Rank_Counter);
	void Check_If_Should_Set_Team_Name(class AAlpha_PlayerState_C* Alpha_Player_State, int32 Position_ID, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const class FString& CallFunc_StructToJsonObjectStringV2_OutJsonString, bool CallFunc_StructToJsonObjectStringV2_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Get_Team_Name(class FText* Team_Name, bool Temp_bool_Variable, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, class FText K2Node_Select_Default);
	void Get_Team_Score(int32* Total_Team_Score, int32 Team_Score, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class ANewCrewManager_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AAlpha_PlayerState_C* CallFunc_Array_Get_Item_1, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_GetScore_Score, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2);
	void Set_Team_Rank(int32 Rank_Counter, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class ANewTeamManager_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AAlpha_GameMode_C* CallFunc_CurrentGameMode_As_Alpha_Game_Mode, int32 CallFunc_Get_Team_Count_Total_Team_Count, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void Check_If_Team_Is_Empty(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class AAlpha_GameMode_C* CallFunc_CurrentGameMode_As_Alpha_Game_Mode, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Delete_Team_Success, int32 CallFunc_Array_Length_ReturnValue, class ANewCrewManager_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void Create_Crew_Manager(int32 Crew_ID, class AAlpha_PlayerState_C* Crew_Leader, class ANewCrewManager_C** Crew_Manager, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ANewCrewManager_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Set_Base_Parameters_Output_Team_ID, int32 CallFunc_Set_Base_Parameters_Output_Crew_ID, int32 CallFunc_Set_Base_Parameters_Output_Ship_ID, int32 CallFunc_Set_Base_Parameters_Output_Crew_Member_ID);
	void Find_Crew_with_ID(int32 Crew_ID, class ANewCrewManager_C** Crew_Manager, bool* Found, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ANewCrewManager_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Get_Spawn_Point(class ABP_BoatSpawn_C** Output, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class ABP_BoatSpawn_C* CallFunc_Array_Get_Item);
	void Defeat_Team();
	void Bind_to_Crew_Events(class ANewCrewManager_C* Crew);
	void Fire_Ship_or_Crew_Amount_Updated();
	void Remove_Player(class APlayerController* Player_controller, int32 Crew_ID);
	void ExecuteUbergraph_NewTeamManager(int32 EntryPoint, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, int32 Temp_int_Array_Index_Variable, class ANewCrewManager_C* K2Node_CustomEvent_Crew, class APlayerController* K2Node_CustomEvent_player_controller, int32 K2Node_CustomEvent_Crew_ID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANewCrewManager_C* CallFunc_Find_Crew_with_ID_Crew_Manager, bool CallFunc_Find_Crew_with_ID_Found, class AAlpha_PlayerState_C* K2Node_DynamicCast_AsAlpha_Player_State, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, class ANewCrewManager_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void On_Crew_Member_Defeat__DelegateSignature(class AAlpha_PlayerState_C* Crew_Member);
	void On_Ship_Defeat__DelegateSignature(class ANewShipManager_C* Ship);
	void On_Crew_Defeat__DelegateSignature(class ANewCrewManager_C* Crew);
	void On_Team_Defeat__DelegateSignature(class ANewTeamManager_C* Team);
	void Ship_or_Crew_Amount_Updated__DelegateSignature();
	void On_Team_Points_Updated__DelegateSignature();
	void On_Team_Create__DelegateSignature();
};

}


