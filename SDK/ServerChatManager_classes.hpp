#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB8 - 0xB0)
// BlueprintGeneratedClass ServerChatManager.ServerChatManager_C
class UServerChatManager_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UServerChatManager_C* GetDefaultObj();

	void AddNewChatMessage(const struct FST_SimpleMessage& ChatMessage, class UTeam_Crew_Ship_Member_State_C* ShipCrewMember, bool FormatText, const class FString& PlayerUsernameId, const class FString& PlayerKillId, bool IsCommandMessage);
	void ExecuteUbergraph_ServerChatManager(int32 EntryPoint, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class ABP_Controller_C* CallFunc_Array_Get_Item, const struct FST_SimpleMessage& K2Node_CustomEvent_ChatMessage, class UTeam_Crew_Ship_Member_State_C* K2Node_CustomEvent_ShipCrewMember, bool K2Node_CustomEvent_FormatText, const class FString& K2Node_CustomEvent_PlayerUsernameId, const class FString& K2Node_CustomEvent_PlayerKillId, bool K2Node_CustomEvent_IsCommandMessage, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Compare_Teams_Is_Same_Team, bool CallFunc_IsValid_ReturnValue, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1, int32 CallFunc_Array_Length_ReturnValue_1, class ABP_Controller_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}


