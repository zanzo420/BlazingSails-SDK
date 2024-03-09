#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x92 (0x2B2 - 0x220)
// BlueprintGeneratedClass NewCrewManager.NewCrewManager_C
class ANewCrewManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTeam_Crew_Ship_Member_State_C*        Team_Crew_Ship_Member_State;                       // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ANewTeamManager_C*                     Team_Manager_Ref;                                  // 0x238(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ANewShipManager_C*                     Ship_Manager_Ref;                                  // 0x240(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AAlpha_PlayerState_C*>          Crew_Members;                                      // 0x248(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            On_Crew_Defeated;                                  // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            On_Ship_Spawned;                                   // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            On_Ship_Change_Type;                               // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            On_Ship_Despawn;                                   // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            On_Crew_Updated;                                   // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AAlpha_PlayerState_C*                  Leader;                                            // 0x2A8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Leader_Set;                                        // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Crew_Defeated;                                     // 0x2B1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ANewCrewManager_C* GetDefaultObj();

	void OnRep_Leader(const class FString& CallFunc_GetPlayerName_ReturnValue);
	void AddPlayer(class AAlpha_PlayerState_C* Alpha_Player_State, int32 Position_ID, bool* Success, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, const struct FST_Team_Info& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
	void Create_Ship_Manager(int32 Ship_ID, class ANewShipManager_C** Ship_Manager, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ANewShipManager_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Set_Base_Parameters_Output_Team_ID, int32 CallFunc_Set_Base_Parameters_Output_Crew_ID, int32 CallFunc_Set_Base_Parameters_Output_Ship_ID, int32 CallFunc_Set_Base_Parameters_Output_Crew_Member_ID);
	void Check_if_Ship_Is_Defeated(bool* All_Ships_Defeated);
	int32 Get_Crew_Size(int32 Local_Player_Count, int32 CallFunc_Array_Length_ReturnValue);
	void Check_If_Should_Set_Leader(class AAlpha_PlayerState_C* Alpha_Player_State, int32 Position_ID, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Check_if_Should_Auto_Defeat(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void Remove_Player(class AAlpha_PlayerState_C* Alpha_Player_State);
	void Defeat_Crew_Members(float Delay);
	void Defeat_Crew();
	void Defeat_Ship();
	void Initialize_Crew();
	void ExecuteUbergraph_NewCrewManager(int32 EntryPoint, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AAlpha_PlayerState_C* K2Node_CustomEvent_Alpha_Player_State, bool CallFunc_Array_RemoveItem_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FST_Team_Info& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float K2Node_CustomEvent_delay, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class ANewShipManager_C* CallFunc_Create_Ship_Manager_Ship_Manager, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1, int32 CallFunc_Array_Length_ReturnValue_1, class ABP_Controller_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Compare_Crews_Is_Same_Team_And_Crew);
	void On_Crew_Updated__DelegateSignature();
	void On_Ship_Despawn__DelegateSignature();
	void On_Ship_Change_Type__DelegateSignature(enum class E_ShipTypes New_Ship_Type);
	void On_Ship_Spawned__DelegateSignature();
	void On_Crew_Defeated__DelegateSignature(class ANewCrewManager_C* Crew);
};

}


