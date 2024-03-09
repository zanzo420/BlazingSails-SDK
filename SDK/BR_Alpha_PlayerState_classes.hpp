#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12 (0x502 - 0x4F0)
// BlueprintGeneratedClass BR_Alpha_PlayerState.BR_Alpha_PlayerState_C
class ABR_Alpha_PlayerState_C : public ABP_PlayerState_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class E_ShipTypes                       Voted_Ship_Type;                                   // 0x4F8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3712[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Voted_Spawn_Region;                                // 0x4FC(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         HasVotedOnShip;                                    // 0x500(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasVotedSpawnRegion;                               // 0x501(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABR_Alpha_PlayerState_C* GetDefaultObj();

	void All_Set_Voted_Spawn_Point(int32 Cluster_ID);
	void Set_Voted_Spawn_Point(int32 Spawn_Point_ID);
	void Set_Voted_Ship_Type(enum class E_ShipTypes Voted_Ship);
	void All_Set_Voted_Ship_Type(enum class E_ShipTypes Voted_Ship_Type);
	void ExecuteUbergraph_BR_Alpha_PlayerState(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 K2Node_CustomEvent_Cluster_ID, int32 K2Node_CustomEvent_Spawn_Point_ID, enum class E_ShipTypes K2Node_CustomEvent_Voted_Ship, enum class E_ShipTypes K2Node_CustomEvent_Voted_Ship_Type, bool CallFunc_NotEqual_ByteByte_ReturnValue, TArray<class UUI_Ship_Sign_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UUI_BoatSpawnPoint_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UUI_BoatSpawnPoint_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UUI_Ship_Sign_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class AAlpha_PlayerState_C* CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State, class AAlpha_PlayerState_C* CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State_1, bool CallFunc_Compare_Crews_Is_Same_Team_And_Crew, bool CallFunc_Compare_Crews_Is_Same_Team_And_Crew_1);
};

}


