#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ServerChatManager.ServerChatManager_C
// (None)

class UClass* UServerChatManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ServerChatManager_C");

	return Clss;
}


// ServerChatManager_C ServerChatManager.Default__ServerChatManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UServerChatManager_C* UServerChatManager_C::GetDefaultObj()
{
	static class UServerChatManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UServerChatManager_C*>(UServerChatManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ServerChatManager.ServerChatManager_C.AddNewChatMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SimpleMessage           ChatMessage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UTeam_Crew_Ship_Member_State_C*ShipCrewMember                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FormatText                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      PlayerUsernameId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      PlayerKillId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsCommandMessage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UServerChatManager_C::AddNewChatMessage(const struct FST_SimpleMessage& ChatMessage, class UTeam_Crew_Ship_Member_State_C* ShipCrewMember, bool FormatText, const class FString& PlayerUsernameId, const class FString& PlayerKillId, bool IsCommandMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerChatManager_C", "AddNewChatMessage");

	Params::UServerChatManager_C_AddNewChatMessage_Params Parms{};

	Parms.ChatMessage = ChatMessage;
	Parms.ShipCrewMember = ShipCrewMember;
	Parms.FormatText = FormatText;
	Parms.PlayerUsernameId = PlayerUsernameId;
	Parms.PlayerKillId = PlayerKillId;
	Parms.IsCommandMessage = IsCommandMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ServerChatManager.ServerChatManager_C.ExecuteUbergraph_ServerChatManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_SimpleMessage           K2Node_CustomEvent_ChatMessage                                   (HasGetValueTypeHash)
// class UTeam_Crew_Ship_Member_State_C*K2Node_CustomEvent_ShipCrewMember                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_FormatText                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_PlayerUsernameId                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_PlayerKillId                                  (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsCommandMessage                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Compare_Teams_Is_Same_Team                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UServerChatManager_C::ExecuteUbergraph_ServerChatManager(int32 EntryPoint, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class ABP_Controller_C* CallFunc_Array_Get_Item, const struct FST_SimpleMessage& K2Node_CustomEvent_ChatMessage, class UTeam_Crew_Ship_Member_State_C* K2Node_CustomEvent_ShipCrewMember, bool K2Node_CustomEvent_FormatText, const class FString& K2Node_CustomEvent_PlayerUsernameId, const class FString& K2Node_CustomEvent_PlayerKillId, bool K2Node_CustomEvent_IsCommandMessage, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Compare_Teams_Is_Same_Team, bool CallFunc_IsValid_ReturnValue, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1, int32 CallFunc_Array_Length_ReturnValue_1, class ABP_Controller_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerChatManager_C", "ExecuteUbergraph_ServerChatManager");

	Params::UServerChatManager_C_ExecuteUbergraph_ServerChatManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CustomEvent_ChatMessage = K2Node_CustomEvent_ChatMessage;
	Parms.K2Node_CustomEvent_ShipCrewMember = K2Node_CustomEvent_ShipCrewMember;
	Parms.K2Node_CustomEvent_FormatText = K2Node_CustomEvent_FormatText;
	Parms.K2Node_CustomEvent_PlayerUsernameId = K2Node_CustomEvent_PlayerUsernameId;
	Parms.K2Node_CustomEvent_PlayerKillId = K2Node_CustomEvent_PlayerKillId;
	Parms.K2Node_CustomEvent_IsCommandMessage = K2Node_CustomEvent_IsCommandMessage;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Compare_Teams_Is_Same_Team = CallFunc_Compare_Teams_Is_Same_Team;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1 = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


