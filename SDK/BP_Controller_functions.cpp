#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Controller.BP_Controller_C
// (Actor, PlayerController)

class UClass* ABP_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Controller_C");

	return Clss;
}


// BP_Controller_C BP_Controller.Default__BP_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Controller_C* ABP_Controller_C::GetDefaultObj()
{
	static class ABP_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Controller_C*>(ABP_Controller_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Controller.BP_Controller_C.GrantPlayerResources
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AddItem_allItemsAdded                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddItem_amountAdded                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddItem_allItemsAdded_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddItem_amountAdded_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddItem_allItemsAdded_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddItem_amountAdded_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddItem_allItemsAdded_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddItem_amountAdded_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddItem_allItemsAdded_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddItem_amountAdded_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddItem_allItemsAdded_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddItem_amountAdded_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddItem_allItemsAdded_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddItem_amountAdded_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddItem_allItemsAdded_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddItem_amountAdded_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddItem_allItemsAdded_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddItem_amountAdded_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddItem_allItemsAdded_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddItem_amountAdded_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::GrantPlayerResources(class ABP_Character_C* Character, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_AddItem_allItemsAdded, int32 CallFunc_AddItem_amountAdded, bool CallFunc_AddItem_allItemsAdded_1, int32 CallFunc_AddItem_amountAdded_1, bool CallFunc_AddItem_allItemsAdded_2, int32 CallFunc_AddItem_amountAdded_2, bool CallFunc_AddItem_allItemsAdded_3, int32 CallFunc_AddItem_amountAdded_3, bool CallFunc_AddItem_allItemsAdded_4, int32 CallFunc_AddItem_amountAdded_4, bool CallFunc_AddItem_allItemsAdded_5, int32 CallFunc_AddItem_amountAdded_5, bool CallFunc_AddItem_allItemsAdded_6, int32 CallFunc_AddItem_amountAdded_6, bool CallFunc_AddItem_allItemsAdded_7, int32 CallFunc_AddItem_amountAdded_7, bool CallFunc_AddItem_allItemsAdded_8, int32 CallFunc_AddItem_amountAdded_8, bool CallFunc_AddItem_allItemsAdded_9, int32 CallFunc_AddItem_amountAdded_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "GrantPlayerResources");

	Params::ABP_Controller_C_GrantPlayerResources_Params Parms{};

	Parms.Character = Character;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_AddItem_allItemsAdded = CallFunc_AddItem_allItemsAdded;
	Parms.CallFunc_AddItem_amountAdded = CallFunc_AddItem_amountAdded;
	Parms.CallFunc_AddItem_allItemsAdded_1 = CallFunc_AddItem_allItemsAdded_1;
	Parms.CallFunc_AddItem_amountAdded_1 = CallFunc_AddItem_amountAdded_1;
	Parms.CallFunc_AddItem_allItemsAdded_2 = CallFunc_AddItem_allItemsAdded_2;
	Parms.CallFunc_AddItem_amountAdded_2 = CallFunc_AddItem_amountAdded_2;
	Parms.CallFunc_AddItem_allItemsAdded_3 = CallFunc_AddItem_allItemsAdded_3;
	Parms.CallFunc_AddItem_amountAdded_3 = CallFunc_AddItem_amountAdded_3;
	Parms.CallFunc_AddItem_allItemsAdded_4 = CallFunc_AddItem_allItemsAdded_4;
	Parms.CallFunc_AddItem_amountAdded_4 = CallFunc_AddItem_amountAdded_4;
	Parms.CallFunc_AddItem_allItemsAdded_5 = CallFunc_AddItem_allItemsAdded_5;
	Parms.CallFunc_AddItem_amountAdded_5 = CallFunc_AddItem_amountAdded_5;
	Parms.CallFunc_AddItem_allItemsAdded_6 = CallFunc_AddItem_allItemsAdded_6;
	Parms.CallFunc_AddItem_amountAdded_6 = CallFunc_AddItem_amountAdded_6;
	Parms.CallFunc_AddItem_allItemsAdded_7 = CallFunc_AddItem_allItemsAdded_7;
	Parms.CallFunc_AddItem_amountAdded_7 = CallFunc_AddItem_amountAdded_7;
	Parms.CallFunc_AddItem_allItemsAdded_8 = CallFunc_AddItem_allItemsAdded_8;
	Parms.CallFunc_AddItem_amountAdded_8 = CallFunc_AddItem_amountAdded_8;
	Parms.CallFunc_AddItem_allItemsAdded_9 = CallFunc_AddItem_allItemsAdded_9;
	Parms.CallFunc_AddItem_amountAdded_9 = CallFunc_AddItem_amountAdded_9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.Get Team ID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Team_ID                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::Get_Team_ID(int32* Team_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "Get Team ID");

	Params::ABP_Controller_C_Get_Team_ID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Team_ID != nullptr)
		*Team_ID = Parms.Team_ID;

}


// Function BP_Controller.BP_Controller_C.TryTeamWithParty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::TryTeamWithParty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "TryTeamWithParty");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.OnRep_TeamHasCommandCooldown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OnRep_TeamHasCommandCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OnRep_TeamHasCommandCooldown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.TriggerPingCommandChatAndVoice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CommandPingTypes      Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Direction_Optional_                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        VoiceLineName                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ChatMessage                                                      (Edit, BlueprintVisible)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetLookAtWindDirection_WindDirection                    (None)
// enum class E_WindDirections        CallFunc_GetLookAtWindDirection_DirectionEnum                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEOS_PlayerState_C*          K2Node_DynamicCast_AsEOS_Player_State                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FST_SimpleMessage           K2Node_MakeStruct_ST_SimpleMessage                               (HasGetValueTypeHash)

void ABP_Controller_C::TriggerPingCommandChatAndVoice(enum class E_CommandPingTypes Type, const struct FVector& Direction_Optional_, class FName VoiceLineName, class FText ChatMessage, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_GetLookAtWindDirection_WindDirection, enum class E_WindDirections CallFunc_GetLookAtWindDirection_DirectionEnum, bool K2Node_SwitchEnum_CmpSuccess_1, class AEOS_PlayerState_C* K2Node_DynamicCast_AsEOS_Player_State, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FST_SimpleMessage& K2Node_MakeStruct_ST_SimpleMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "TriggerPingCommandChatAndVoice");

	Params::ABP_Controller_C_TriggerPingCommandChatAndVoice_Params Parms{};

	Parms.Type = Type;
	Parms.Direction_Optional_ = Direction_Optional_;
	Parms.VoiceLineName = VoiceLineName;
	Parms.ChatMessage = ChatMessage;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetLookAtWindDirection_WindDirection = CallFunc_GetLookAtWindDirection_WindDirection;
	Parms.CallFunc_GetLookAtWindDirection_DirectionEnum = CallFunc_GetLookAtWindDirection_DirectionEnum;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_DynamicCast_AsEOS_Player_State = K2Node_DynamicCast_AsEOS_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_ST_SimpleMessage = K2Node_MakeStruct_ST_SimpleMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.GetCurrentWaypointMarker
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_WaypointMarker_C*        CurrentMarker                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_WaypointMarker_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_WaypointMarker_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Crew_Member_ID_Is_Same_Team_Crew_And_Ship       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::GetCurrentWaypointMarker(class ABP_WaypointMarker_C** CurrentMarker, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_WaypointMarker_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABP_WaypointMarker_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Compare_Crew_Member_ID_Is_Same_Team_Crew_And_Ship)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "GetCurrentWaypointMarker");

	Params::ABP_Controller_C_GetCurrentWaypointMarker_Params Parms{};

	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Compare_Crew_Member_ID_Is_Same_Team_Crew_And_Ship = CallFunc_Compare_Crew_Member_ID_Is_Same_Team_Crew_And_Ship;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentMarker != nullptr)
		*CurrentMarker = Parms.CurrentMarker;

}


// Function BP_Controller.BP_Controller_C.GetShouldTrackInactivity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FDateTime                   CallFunc_Now_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_Subtract_DateTimeDateTime_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalSeconds_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_Controller_C::GetShouldTrackInactivity(const struct FDateTime& CallFunc_Now_ReturnValue, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "GetShouldTrackInactivity");

	Params::ABP_Controller_C_GetShouldTrackInactivity_Params Parms{};

	Parms.CallFunc_Now_ReturnValue = CallFunc_Now_ReturnValue;
	Parms.CallFunc_Subtract_DateTimeDateTime_ReturnValue = CallFunc_Subtract_DateTimeDateTime_ReturnValue;
	Parms.CallFunc_GetTotalSeconds_ReturnValue = CallFunc_GetTotalSeconds_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Controller.BP_Controller_C.SpawnOnNewShip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SpawnedOnShip                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::SpawnOnNewShip(bool SpawnedOnShip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "SpawnOnNewShip");

	Params::ABP_Controller_C_SpawnOnNewShip_Params Parms{};

	Parms.SpawnedOnShip = SpawnedOnShip;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.ShouldStayInUIMode?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldStay                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::ShouldStayInUIMode_(bool* ShouldStay, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "ShouldStayInUIMode?");

	Params::ABP_Controller_C_ShouldStayInUIMode__Params Parms{};

	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldStay != nullptr)
		*ShouldStay = Parms.ShouldStay;

}


// Function BP_Controller.BP_Controller_C.OnRep_CursedWins
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::OnRep_CursedWins(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OnRep_CursedWins");

	Params::ABP_Controller_C_OnRep_CursedWins_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OnRep_Level
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::OnRep_Level(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OnRep_Level");

	Params::ABP_Controller_C_OnRep_Level_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.GetTeamFleetChatTagUsernameText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        UserName                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              TeamID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CommandMessage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Result                                                           (Parm, OutParm)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// int32                              CallFunc_Get_Team_ID_Team_ID                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::GetTeamFleetChatTagUsernameText(class FText UserName, int32 TeamID, bool CommandMessage, class FText* Result, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, int32 CallFunc_Get_Team_ID_Team_ID, class FText CallFunc_Format_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "GetTeamFleetChatTagUsernameText");

	Params::ABP_Controller_C_GetTeamFleetChatTagUsernameText_Params Parms{};

	Parms.UserName = UserName;
	Parms.TeamID = TeamID;
	Parms.CommandMessage = CommandMessage;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Get_Team_ID_Team_ID = CallFunc_Get_Team_ID_Team_ID;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_Controller.BP_Controller_C.GetTeamFleetChatColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              TeamID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CommandMessage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Team_ID_Team_ID                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::GetTeamFleetChatColor(int32 TeamID, bool CommandMessage, struct FLinearColor* NewParam, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, int32 CallFunc_Get_Team_ID_Team_ID, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "GetTeamFleetChatColor");

	Params::ABP_Controller_C_GetTeamFleetChatColor_Params Parms{};

	Parms.TeamID = TeamID;
	Parms.CommandMessage = CommandMessage;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State;
	Parms.CallFunc_Get_Team_ID_Team_ID = CallFunc_Get_Team_ID_Team_ID;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);

}


// Function BP_Controller.BP_Controller_C.CrewLockChangedByCaptain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Lock_Crew                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::CrewLockChangedByCaptain(bool Lock_Crew)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "CrewLockChangedByCaptain");

	Params::ABP_Controller_C_CrewLockChangedByCaptain_Params Parms{};

	Parms.Lock_Crew = Lock_Crew;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.GetScoreAmountCannonBall
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Weapons               CannonType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Score                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_CannonScore             CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_CannonScore             CallFunc_GetDataTableRowFromName_OutRow_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_CannonScore             CallFunc_GetDataTableRowFromName_OutRow_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_CannonScore             CallFunc_GetDataTableRowFromName_OutRow_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_CannonScore             CallFunc_GetDataTableRowFromName_OutRow_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_CannonScore             CallFunc_GetDataTableRowFromName_OutRow_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::GetScoreAmountCannonBall(enum class E_Weapons CannonType, int32* Score, const struct FST_CannonScore& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FST_CannonScore& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FST_CannonScore& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const struct FST_CannonScore& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, const struct FST_CannonScore& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, const struct FST_CannonScore& CallFunc_GetDataTableRowFromName_OutRow_5, bool CallFunc_GetDataTableRowFromName_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "GetScoreAmountCannonBall");

	Params::ABP_Controller_C_GetScoreAmountCannonBall_Params Parms{};

	Parms.CannonType = CannonType;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_5 = CallFunc_GetDataTableRowFromName_OutRow_5;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_5 = CallFunc_GetDataTableRowFromName_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (Score != nullptr)
		*Score = Parms.Score;

}


// Function BP_Controller.BP_Controller_C.VerifyIfEligableForDedicatedServerMod
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEligableForModerator                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::VerifyIfEligableForDedicatedServerMod(bool* IsEligableForModerator, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "VerifyIfEligableForDedicatedServerMod");

	Params::ABP_Controller_C_VerifyIfEligableForDedicatedServerMod_Params Parms{};

	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue = CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEligableForModerator != nullptr)
		*IsEligableForModerator = Parms.IsEligableForModerator;

}


// Function BP_Controller.BP_Controller_C.SwitchedCrew
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::SwitchedCrew(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "SwitchedCrew");

	Params::ABP_Controller_C_SwitchedCrew_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.GetRespawnTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              RespawnTime                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_PlayerState_C*        K2Node_DynamicCast_AsAlpha_Player_State                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Crew_Size_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_GameMode_C*           CallFunc_CurrentGameMode_As_Alpha_Game_Mode                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::GetRespawnTime(float* RespawnTime, class AAlpha_PlayerState_C* K2Node_DynamicCast_AsAlpha_Player_State, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Get_Crew_Size_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, class AAlpha_GameMode_C* CallFunc_CurrentGameMode_As_Alpha_Game_Mode, float CallFunc_Multiply_FloatFloat_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "GetRespawnTime");

	Params::ABP_Controller_C_GetRespawnTime_Params Parms{};

	Parms.K2Node_DynamicCast_AsAlpha_Player_State = K2Node_DynamicCast_AsAlpha_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Get_Crew_Size_ReturnValue = CallFunc_Get_Crew_Size_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_CurrentGameMode_As_Alpha_Game_Mode = CallFunc_CurrentGameMode_As_Alpha_Game_Mode;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_6 = CallFunc_Multiply_FloatFloat_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

	if (RespawnTime != nullptr)
		*RespawnTime = Parms.RespawnTime;

}


// Function BP_Controller.BP_Controller_C.GetShipWaterCullingClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_ShipTypes             ShipType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CullingClass                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::GetShipWaterCullingClass(enum class E_ShipTypes ShipType, class UClass** CullingClass, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "GetShipWaterCullingClass");

	Params::ABP_Controller_C_GetShipWaterCullingClass_Params Parms{};

	Parms.ShipType = ShipType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (CullingClass != nullptr)
		*CullingClass = Parms.CullingClass;

}


// Function BP_Controller.BP_Controller_C.ResetCanVoice
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::ResetCanVoice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "ResetCanVoice");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.TickVoice
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::TickVoice(bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "TickVoice");

	Params::ABP_Controller_C_TickVoice_Params Parms{};

	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.PlaySoundAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::PlaySoundAtLocation(const struct FVector& Location, class USoundBase* Sound, float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "PlaySoundAtLocation");

	Params::ABP_Controller_C_PlaySoundAtLocation_Params Parms{};

	Parms.Location = Location;
	Parms.Sound = Sound;
	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InitAttractMode
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Event_AttractMode_C*     CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::InitAttractMode(const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Event_AttractMode_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InitAttractMode");

	Params::ABP_Controller_C_InitAttractMode_Params Parms{};

	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.SwitchMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_InGameInterfaces      Menu                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CloseOnly                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_VehicleBase_C*           K2Node_DynamicCast_AsBP_Vehicle_Base                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::SwitchMenu(enum class E_InGameInterfaces Menu, bool CloseOnly, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_VehicleBase_C* K2Node_DynamicCast_AsBP_Vehicle_Base, bool K2Node_DynamicCast_bSuccess, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_10)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "SwitchMenu");

	Params::ABP_Controller_C_SwitchMenu_Params Parms{};

	Parms.Menu = Menu;
	Parms.CloseOnly = CloseOnly;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Vehicle_Base = K2Node_DynamicCast_AsBP_Vehicle_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.ShipDetect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BoatMeshBase_C*          K2Node_DynamicCast_AsBP_Boat_Mesh_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::ShipDetect(TArray<class AActor*>& Temp_object_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ABP_BoatMeshBase_C* K2Node_DynamicCast_AsBP_Boat_Mesh_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "ShipDetect");

	Params::ABP_Controller_C_ShipDetect_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.K2Node_DynamicCast_AsBP_Boat_Mesh_Base = K2Node_DynamicCast_AsBP_Boat_Mesh_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.ServerCleanUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Team_ID_Team_ID                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            K2Node_DynamicCast_AsBP_Controller                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::ServerCleanUp(int32 Temp_int_Array_Index_Variable, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, int32 CallFunc_Get_Team_ID_Team_ID, class APlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "ServerCleanUp");

	Params::ABP_Controller_C_ServerCleanUp_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State;
	Parms.CallFunc_Get_Team_ID_Team_ID = CallFunc_Get_Team_ID_Team_ID;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Controller = K2Node_DynamicCast_AsBP_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.RespawnCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OnDestroyedShip                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               RespawnedOnShip                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAlpha_GameMode_C*           CallFunc_CurrentGameMode_As_Alpha_Game_Mode                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGunGame_Alpha_GameMode_C*   K2Node_DynamicCast_AsGun_Game_Alpha_Game_Mode                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Random_OutItem                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_BoatMeshBase_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABP_BoatMeshBase_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMyShip_MyShip                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UStaticMeshComponent*>CallFunc_GetComponentsByTag_ReturnValue                          (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::RespawnCharacter(bool OnDestroyedShip, bool RespawnedOnShip, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class AAlpha_GameMode_C* CallFunc_CurrentGameMode_As_Alpha_Game_Mode, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_2, class AGunGame_Alpha_GameMode_C* K2Node_DynamicCast_AsGun_Game_Alpha_Game_Mode, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess_2, class AActor* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Character_C* CallFunc_FinishSpawningActor_ReturnValue, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsMyShip_MyShip, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_GetComponentsByTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "RespawnCharacter");

	Params::ABP_Controller_C_RespawnCharacter_Params Parms{};

	Parms.OnDestroyedShip = OnDestroyedShip;
	Parms.RespawnedOnShip = RespawnedOnShip;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1 = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_CurrentGameMode_As_Alpha_Game_Mode = CallFunc_CurrentGameMode_As_Alpha_Game_Mode;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_2 = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_2;
	Parms.K2Node_DynamicCast_AsGun_Game_Alpha_Game_Mode = K2Node_DynamicCast_AsGun_Game_Alpha_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsMyShip_MyShip = CallFunc_IsMyShip_MyShip;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetComponentsByTag_ReturnValue = CallFunc_GetComponentsByTag_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OnRep_PlayerColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OnRep_PlayerColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OnRep_PlayerColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.ApplyOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::ApplyOptions(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "ApplyOptions");

	Params::ABP_Controller_C_ApplyOptions_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.LerpToCameraSmoothly
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*            StartCameraRef                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            DestinationCameraRef                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_LerpCamera_C*            CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_LerpCamera_C*            CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::LerpToCameraSmoothly(class UCameraComponent* StartCameraRef, class UCameraComponent* DestinationCameraRef, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_LerpCamera_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_LerpCamera_C* CallFunc_FinishSpawningActor_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "LerpToCameraSmoothly");

	Params::ABP_Controller_C_LerpToCameraSmoothly_Params Parms{};

	Parms.StartCameraRef = StartCameraRef;
	Parms.DestinationCameraRef = DestinationCameraRef;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.SetTeamPlayerColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Crew_ID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TeamMemberCount                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Controller_C*>    CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABP_Controller_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GameState_C*             K2Node_DynamicCast_AsBP_Game_State                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Team_Info               CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::SetTeamPlayerColor(int32 Crew_ID, int32 TeamMemberCount, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<class ABP_Controller_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_Controller_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_1, const struct FST_Team_Info& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "SetTeamPlayerColor");

	Params::ABP_Controller_C_SetTeamPlayerColor_Params Parms{};

	Parms.Crew_ID = Crew_ID;
	Parms.TeamMemberCount = TeamMemberCount;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_State = K2Node_DynamicCast_AsBP_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.CheckUnderWaterEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AExponentialHeightFog*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// TArray<class AExponentialHeightFog*>CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm)
// class AExponentialHeightFog*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AExponentialHeightFog*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::CheckUnderWaterEffects(bool CallFunc_BooleanOR_ReturnValue, TArray<class AExponentialHeightFog*>& CallFunc_GetAllActorsOfClass_OutActors, TArray<class AExponentialHeightFog*>& CallFunc_GetAllActorsOfClass_OutActors_1, class AExponentialHeightFog* CallFunc_Array_Get_Item, class AExponentialHeightFog* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "CheckUnderWaterEffects");

	Params::ABP_Controller_C_CheckUnderWaterEffects_Params Parms{};

	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OnRep_TeamID
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OnRep_TeamID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OnRep_TeamID");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.CloseMenus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CloseWorldMap                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CloseInGameMenu                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CloseInventory                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CloseContainer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CloseSpyglass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CloseCannonCHest                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AnyMenuClosed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               MenusClosed                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::CloseMenus(bool CloseWorldMap, bool CloseInGameMenu, bool CloseInventory, bool CloseContainer, bool CloseSpyglass, bool CloseCannonCHest, bool* AnyMenuClosed, bool MenusClosed, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "CloseMenus");

	Params::ABP_Controller_C_CloseMenus_Params Parms{};

	Parms.CloseWorldMap = CloseWorldMap;
	Parms.CloseInGameMenu = CloseInGameMenu;
	Parms.CloseInventory = CloseInventory;
	Parms.CloseContainer = CloseContainer;
	Parms.CloseSpyglass = CloseSpyglass;
	Parms.CloseCannonCHest = CloseCannonCHest;
	Parms.MenusClosed = MenusClosed;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (AnyMenuClosed != nullptr)
		*AnyMenuClosed = Parms.AnyMenuClosed;

}


// Function BP_Controller.BP_Controller_C.InpActEvt_SplitItem_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::InpActEvt_SplitItem_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpActEvt_SplitItem_K2Node_InputActionEvent_5");

	Params::ABP_Controller_C_InpActEvt_SplitItem_K2Node_InputActionEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InpActEvt_SplitItem_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::InpActEvt_SplitItem_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpActEvt_SplitItem_K2Node_InputActionEvent_4");

	Params::ABP_Controller_C_InpActEvt_SplitItem_K2Node_InputActionEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InpActEvt_PageUp_K2Node_InputKeyEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::InpActEvt_PageUp_K2Node_InputKeyEvent_16(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpActEvt_PageUp_K2Node_InputKeyEvent_16");

	Params::ABP_Controller_C_InpActEvt_PageUp_K2Node_InputKeyEvent_16_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InpActEvt_PageDown_K2Node_InputKeyEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::InpActEvt_PageDown_K2Node_InputKeyEvent_15(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpActEvt_PageDown_K2Node_InputKeyEvent_15");

	Params::ABP_Controller_C_InpActEvt_PageDown_K2Node_InputKeyEvent_15_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InpActEvt_Insert_K2Node_InputKeyEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::InpActEvt_Insert_K2Node_InputKeyEvent_14(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpActEvt_Insert_K2Node_InputKeyEvent_14");

	Params::ABP_Controller_C_InpActEvt_Insert_K2Node_InputKeyEvent_14_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InpActEvt_Slash_K2Node_InputKeyEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::InpActEvt_Slash_K2Node_InputKeyEvent_13(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpActEvt_Slash_K2Node_InputKeyEvent_13");

	Params::ABP_Controller_C_InpActEvt_Slash_K2Node_InputKeyEvent_13_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::InpActEvt_AnyKey_K2Node_InputKeyEvent_12(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpActEvt_AnyKey_K2Node_InputKeyEvent_12");

	Params::ABP_Controller_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_12_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InpActEvt_P_K2Node_InputKeyEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::InpActEvt_P_K2Node_InputKeyEvent_11(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpActEvt_P_K2Node_InputKeyEvent_11");

	Params::ABP_Controller_C_InpActEvt_P_K2Node_InputKeyEvent_11_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InpActEvt_F3_K2Node_InputKeyEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::InpActEvt_F3_K2Node_InputKeyEvent_10(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpActEvt_F3_K2Node_InputKeyEvent_10");

	Params::ABP_Controller_C_InpActEvt_F3_K2Node_InputKeyEvent_10_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InpActEvt_IngameMenu_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::InpActEvt_IngameMenu_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpActEvt_IngameMenu_K2Node_InputActionEvent_3");

	Params::ABP_Controller_C_InpActEvt_IngameMenu_K2Node_InputActionEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InpActEvt_SecondaryFire_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::InpActEvt_SecondaryFire_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpActEvt_SecondaryFire_K2Node_InputActionEvent_2");

	Params::ABP_Controller_C_InpActEvt_SecondaryFire_K2Node_InputActionEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_9");

	Params::ABP_Controller_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_9_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_8");

	Params::ABP_Controller_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_8_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::InpActEvt_PrimaryFire_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpActEvt_PrimaryFire_K2Node_InputActionEvent_1");

	Params::ABP_Controller_C_InpActEvt_PrimaryFire_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::InpActEvt_PrimaryFire_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpActEvt_PrimaryFire_K2Node_InputActionEvent_0");

	Params::ABP_Controller_C_InpActEvt_PrimaryFire_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InpActEvt_Multiply_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::InpActEvt_Multiply_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpActEvt_Multiply_K2Node_InputKeyEvent_7");

	Params::ABP_Controller_C_InpActEvt_Multiply_K2Node_InputKeyEvent_7_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_6");

	Params::ABP_Controller_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_6_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_5");

	Params::ABP_Controller_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_4");

	Params::ABP_Controller_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_3");

	Params::ABP_Controller_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::InpActEvt_BackSpace_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpActEvt_BackSpace_K2Node_InputKeyEvent_2");

	Params::ABP_Controller_C_InpActEvt_BackSpace_K2Node_InputKeyEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1");

	Params::ABP_Controller_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0");

	Params::ABP_Controller_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_SetCharacterControllerRef
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::S_SetCharacterControllerRef()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_SetCharacterControllerRef");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.S_SetTeamID
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TeamID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bForce                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::S_SetTeamID(int32 TeamID, bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_SetTeamID");

	Params::ABP_Controller_C_S_SetTeamID_Params Parms{};

	Parms.TeamID = TeamID;
	Parms.bForce = bForce;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OC_CloseAllMenus
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OC_CloseAllMenus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_CloseAllMenus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.SetDefeated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::SetDefeated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "SetDefeated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.OC_WinningScreen
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AfterDelay                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::OC_WinningScreen(float AfterDelay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_WinningScreen");

	Params::ABP_Controller_C_OC_WinningScreen_Params Parms{};

	Parms.AfterDelay = AfterDelay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.ParseTeamID
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::ParseTeamID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "ParseTeamID");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.SetPlayerColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::SetPlayerColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "SetPlayerColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.RefreshPlayerColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::RefreshPlayerColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "RefreshPlayerColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.RefreshIDAndColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::RefreshIDAndColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "RefreshIDAndColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.S_AddGoldToTeam
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_AddGoldToTeam(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_AddGoldToTeam");

	Params::ABP_Controller_C_S_AddGoldToTeam_Params Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_VoiceLine
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        VoiceLineRowName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_VoiceLine(class FName VoiceLineRowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_VoiceLine");

	Params::ABP_Controller_C_S_VoiceLine_Params Parms{};

	Parms.VoiceLineRowName = VoiceLineRowName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OC_LoadShipCustomisation
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OC_LoadShipCustomisation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_LoadShipCustomisation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.S_LoadShipCustomisation
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HullColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SailColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Emblem                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BowFigure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FlagColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RopeColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FlagEmblem                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LampColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SailEmblemBottom                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SailColorBottom                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ShipPaint                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ShipPaintColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BowFigureColor1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BowFigureColor2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BowFigureColor3                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HullPaintDamageAmount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SpecialFlag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Flagsetup                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SailTears                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SailDirt                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SailPaintWear                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_LoadShipCustomisation(int32 HullColor, int32 SailColor, int32 Emblem, int32 BowFigure, int32 FlagColor, int32 RopeColor, int32 FlagEmblem, int32 LampColor, int32 SailEmblemBottom, int32 SailColorBottom, int32 ShipPaint, int32 ShipPaintColor, int32 BowFigureColor1, int32 BowFigureColor2, int32 BowFigureColor3, float HullPaintDamageAmount, int32 SpecialFlag, int32 Flagsetup, float SailTears, float SailDirt, float SailPaintWear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_LoadShipCustomisation");

	Params::ABP_Controller_C_S_LoadShipCustomisation_Params Parms{};

	Parms.HullColor = HullColor;
	Parms.SailColor = SailColor;
	Parms.Emblem = Emblem;
	Parms.BowFigure = BowFigure;
	Parms.FlagColor = FlagColor;
	Parms.RopeColor = RopeColor;
	Parms.FlagEmblem = FlagEmblem;
	Parms.LampColor = LampColor;
	Parms.SailEmblemBottom = SailEmblemBottom;
	Parms.SailColorBottom = SailColorBottom;
	Parms.ShipPaint = ShipPaint;
	Parms.ShipPaintColor = ShipPaintColor;
	Parms.BowFigureColor1 = BowFigureColor1;
	Parms.BowFigureColor2 = BowFigureColor2;
	Parms.BowFigureColor3 = BowFigureColor3;
	Parms.HullPaintDamageAmount = HullPaintDamageAmount;
	Parms.SpecialFlag = SpecialFlag;
	Parms.Flagsetup = Flagsetup;
	Parms.SailTears = SailTears;
	Parms.SailDirt = SailDirt;
	Parms.SailPaintWear = SailPaintWear;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OC_CreateCrew
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OC_CreateCrew()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_CreateCrew");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.S_CreateCrew
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ShipName                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              TeamColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FlagEmblem                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bLockedToParty                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bDeleteEmpty                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_ShipTypes             ShipType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_CreateCrew(class FText ShipName, int32 TeamColor, int32 FlagEmblem, bool bLockedToParty, bool bDeleteEmpty, enum class E_ShipTypes ShipType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_CreateCrew");

	Params::ABP_Controller_C_S_CreateCrew_Params Parms{};

	Parms.ShipName = ShipName;
	Parms.TeamColor = TeamColor;
	Parms.FlagEmblem = FlagEmblem;
	Parms.bLockedToParty = bLockedToParty;
	Parms.bDeleteEmpty = bDeleteEmpty;
	Parms.ShipType = ShipType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.SetTeamID_FromLocal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TeamID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::SetTeamID_FromLocal(int32 TeamID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "SetTeamID_FromLocal");

	Params::ABP_Controller_C_SetTeamID_FromLocal_Params Parms{};

	Parms.TeamID = TeamID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OC_CloseTeamMenu
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OC_CloseTeamMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_CloseTeamMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.DamageCannonBlockChain
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_VehicleCannon_C*         CannonRef                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::DamageCannonBlockChain(int32 DamageAmount, class ABP_VehicleCannon_C* CannonRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "DamageCannonBlockChain");

	Params::ABP_Controller_C_DamageCannonBlockChain_Params Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.CannonRef = CannonRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_DamageCannonBlockChain
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_VehicleCannon_C*         CannonRef                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_DamageCannonBlockChain(int32 DamageAmount, class ABP_VehicleCannon_C* CannonRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_DamageCannonBlockChain");

	Params::ABP_Controller_C_S_DamageCannonBlockChain_Params Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.CannonRef = CannonRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.ExplodeBowBarrel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BowBarrel_C*             BowBarrel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::ExplodeBowBarrel(class ABP_BowBarrel_C* BowBarrel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "ExplodeBowBarrel");

	Params::ABP_Controller_C_ExplodeBowBarrel_Params Parms{};

	Parms.BowBarrel = BowBarrel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_ExplodeBowBarrel
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BowBarrel_C*             BowBarrel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_ExplodeBowBarrel(class ABP_BowBarrel_C* BowBarrel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_ExplodeBowBarrel");

	Params::ABP_Controller_C_S_ExplodeBowBarrel_Params Parms{};

	Parms.BowBarrel = BowBarrel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.ExplodeBarrelPickup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PickupExplosiveBarrel_C* BarrelRel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DetonationDelay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::ExplodeBarrelPickup(class ABP_PickupExplosiveBarrel_C* BarrelRel, float DetonationDelay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "ExplodeBarrelPickup");

	Params::ABP_Controller_C_ExplodeBarrelPickup_Params Parms{};

	Parms.BarrelRel = BarrelRel;
	Parms.DetonationDelay = DetonationDelay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_ExplodeBarrelPickup
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PickupExplosiveBarrel_C* BarrelRef                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DetonationDelay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_ExplodeBarrelPickup(class ABP_PickupExplosiveBarrel_C* BarrelRef, float DetonationDelay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_ExplodeBarrelPickup");

	Params::ABP_Controller_C_S_ExplodeBarrelPickup_Params Parms{};

	Parms.BarrelRef = BarrelRef;
	Parms.DetonationDelay = DetonationDelay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.ExplodeFloatingBarrel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ExplosiveBarrel_C*       BarrelRef                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::ExplodeFloatingBarrel(class ABP_ExplosiveBarrel_C* BarrelRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "ExplodeFloatingBarrel");

	Params::ABP_Controller_C_ExplodeFloatingBarrel_Params Parms{};

	Parms.BarrelRef = BarrelRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_ExplodeFloatingBarrel
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ExplosiveBarrel_C*       BarrelRef                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_ExplodeFloatingBarrel(class ABP_ExplosiveBarrel_C* BarrelRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_ExplodeFloatingBarrel");

	Params::ABP_Controller_C_S_ExplodeFloatingBarrel_Params Parms{};

	Parms.BarrelRef = BarrelRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.BlockCannons
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ShipActorRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::BlockCannons(class AActor* ShipActorRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "BlockCannons");

	Params::ABP_Controller_C_BlockCannons_Params Parms{};

	Parms.ShipActorRef = ShipActorRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.DropAnchor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_VehicleSteeringWheel_C*  SteeringWheelRef                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::DropAnchor(class ABP_VehicleSteeringWheel_C* SteeringWheelRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "DropAnchor");

	Params::ABP_Controller_C_DropAnchor_Params Parms{};

	Parms.SteeringWheelRef = SteeringWheelRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_DropAnchor
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_VehicleSteeringWheel_C*  SteeringWheelRef                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_DropAnchor(class ABP_VehicleSteeringWheel_C* SteeringWheelRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_DropAnchor");

	Params::ABP_Controller_C_S_DropAnchor_Params Parms{};

	Parms.SteeringWheelRef = SteeringWheelRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_BlockCannons
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ShipActorRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_BlockCannons(class AActor* ShipActorRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_BlockCannons");

	Params::ABP_Controller_C_S_BlockCannons_Params Parms{};

	Parms.ShipActorRef = ShipActorRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_DestroyActor
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_DestroyActor(class AActor* ActorRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_DestroyActor");

	Params::ABP_Controller_C_S_DestroyActor_Params Parms{};

	Parms.ActorRef = ActorRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.RequestActorDestructionFromClient
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::RequestActorDestructionFromClient(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "RequestActorDestructionFromClient");

	Params::ABP_Controller_C_RequestActorDestructionFromClient_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_ChangeCrewLock
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Lock_Crew                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::S_ChangeCrewLock(bool Lock_Crew)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_ChangeCrewLock");

	Params::ABP_Controller_C_S_ChangeCrewLock_Params Parms{};

	Parms.Lock_Crew = Lock_Crew;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_SetFleetID
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FleetID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_SetFleetID(int32 FleetID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_SetFleetID");

	Params::ABP_Controller_C_S_SetFleetID_Params Parms{};

	Parms.FleetID = FleetID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OC_OpenConquestPreGameMenu
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OC_OpenConquestPreGameMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_OpenConquestPreGameMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.OC_ConquestCharacterSpawn
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OC_ConquestCharacterSpawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_ConquestCharacterSpawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.S_ConquestCharacterSpawn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::S_ConquestCharacterSpawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_ConquestCharacterSpawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.OC_WarningPopUp
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Information                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::OC_WarningPopUp(class FText Information)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_WarningPopUp");

	Params::ABP_Controller_C_OC_WarningPopUp_Params Parms{};

	Parms.Information = Information;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OC_SwitchedCrew
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OC_SwitchedCrew()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_SwitchedCrew");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.RetryRespawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::RetryRespawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "RetryRespawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.OC_Update Presence
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Presence                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_Controller_C::OC_Update_Presence(const class FString& Presence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_Update Presence");

	Params::ABP_Controller_C_OC_Update_Presence_Params Parms{};

	Parms.Presence = Presence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.Start Tracking 
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::Start_Tracking_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "Start Tracking ");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Controller_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.OC_RemovePrepareForBattleScreen
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OC_RemovePrepareForBattleScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_RemovePrepareForBattleScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.AddCustomWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::AddCustomWidget(class UClass* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "AddCustomWidget");

	Params::ABP_Controller_C_AddCustomWidget_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.LeaveIngameMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::LeaveIngameMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "LeaveIngameMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.OC_RemoveAllWidgets
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OC_RemoveAllWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_RemoveAllWidgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.OC_RemoveSpawnScreen
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OC_RemoveSpawnScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_RemoveSpawnScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.RefreshHUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::RefreshHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "RefreshHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.OC_PrepareForBattle
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OC_PrepareForBattle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_PrepareForBattle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.OC_RemoveCustomWidget
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OC_RemoveCustomWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_RemoveCustomWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.OC_AddCustomWidget
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::OC_AddCustomWidget(class UClass* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_AddCustomWidget");

	Params::ABP_Controller_C_OC_AddCustomWidget_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OC_RefreshHUD
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OC_RefreshHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_RefreshHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.CloseInGameMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::CloseInGameMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "CloseInGameMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.OpenInGameMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OpenInGameMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OpenInGameMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.EnterVehicleDirectly
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_VehicleBase_C*           VehicleRef                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::EnterVehicleDirectly(class ABP_VehicleBase_C* VehicleRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "EnterVehicleDirectly");

	Params::ABP_Controller_C_EnterVehicleDirectly_Params Parms{};

	Parms.VehicleRef = VehicleRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_TakePickup
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PickupBase_C*            PickUp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_TakePickup(class ABP_PickupBase_C* PickUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_TakePickup");

	Params::ABP_Controller_C_S_TakePickup_Params Parms{};

	Parms.PickUp = PickUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OC_InterruptInteraction
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OC_InterruptInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_InterruptInteraction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.OC_StopLocalInteract
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OC_StopLocalInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_StopLocalInteract");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.LeaveVehicle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::LeaveVehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "LeaveVehicle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.OC_ReturnToCharacter
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDead                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::OC_ReturnToCharacter(bool IsDead)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_ReturnToCharacter");

	Params::ABP_Controller_C_OC_ReturnToCharacter_Params Parms{};

	Parms.IsDead = IsDead;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_LockVehicle
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_VehicleBase_C*           VehicleRef                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_LockVehicle(class ABP_VehicleBase_C* VehicleRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_LockVehicle");

	Params::ABP_Controller_C_S_LockVehicle_Params Parms{};

	Parms.VehicleRef = VehicleRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InteractReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::InteractReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InteractReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.InteractPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::InteractPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InteractPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.LocalVehicleEject
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::LocalVehicleEject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "LocalVehicleEject");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.S_EngageFromServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_InteractableBase_C*      Interactable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_EngageFromServer(class ABP_InteractableBase_C* Interactable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_EngageFromServer");

	Params::ABP_Controller_C_S_EngageFromServer_Params Parms{};

	Parms.Interactable = Interactable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_StopInteract
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_InteractableBase_C*      InteractableRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_StopInteract(class ABP_InteractableBase_C* InteractableRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_StopInteract");

	Params::ABP_Controller_C_S_StopInteract_Params Parms{};

	Parms.InteractableRef = InteractableRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.EnterVehicle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_VehicleBase_C*           VehicleRef                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::EnterVehicle(class ABP_VehicleBase_C* VehicleRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "EnterVehicle");

	Params::ABP_Controller_C_EnterVehicle_Params Parms{};

	Parms.VehicleRef = VehicleRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_LeaveVehicle
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::S_LeaveVehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_LeaveVehicle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.S_EnterVehicle
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_VehicleBase_C*           VehicleRef                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_EnterVehicle(class ABP_VehicleBase_C* VehicleRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_EnterVehicle");

	Params::ABP_Controller_C_S_EnterVehicle_Params Parms{};

	Parms.VehicleRef = VehicleRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_Interact
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_InteractableBase_C*      InteractableRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_Interact(class ABP_InteractableBase_C* InteractableRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_Interact");

	Params::ABP_Controller_C_S_Interact_Params Parms{};

	Parms.InteractableRef = InteractableRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.WorldmapPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::WorldmapPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "WorldmapPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.OpenWorldMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OpenWorldMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OpenWorldMap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.S_RemoveMarker
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::S_RemoveMarker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_RemoveMarker");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.S_LeaveMapCamera
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::S_LeaveMapCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_LeaveMapCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.S_EnterMapCamera
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::S_EnterMapCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_EnterMapCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.CloseWorldMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::CloseWorldMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "CloseWorldMap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.EnterSpectatorMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::EnterSpectatorMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "EnterSpectatorMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.S_ConquestRespawn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Cost                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MainWeapon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Sidearm                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Melee                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OnDestroyedShip                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::S_ConquestRespawn(int32 Cost, int32 MainWeapon, int32 Sidearm, int32 Melee, bool OnDestroyedShip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_ConquestRespawn");

	Params::ABP_Controller_C_S_ConquestRespawn_Params Parms{};

	Parms.Cost = Cost;
	Parms.MainWeapon = MainWeapon;
	Parms.Sidearm = Sidearm;
	Parms.Melee = Melee;
	Parms.OnDestroyedShip = OnDestroyedShip;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OC_PlayerRespawnOrDeathCompassNotify
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDead                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::OC_PlayerRespawnOrDeathCompassNotify(bool IsDead)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_PlayerRespawnOrDeathCompassNotify");

	Params::ABP_Controller_C_OC_PlayerRespawnOrDeathCompassNotify_Params Parms{};

	Parms.IsDead = IsDead;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.NotifyPlayerDeathForCompass
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDead                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::NotifyPlayerDeathForCompass(bool IsDead)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "NotifyPlayerDeathForCompass");

	Params::ABP_Controller_C_NotifyPlayerDeathForCompass_Params Parms{};

	Parms.IsDead = IsDead;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.EnterSpectatorCam
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::EnterSpectatorCam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "EnterSpectatorCam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.SwitchToDefeatScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::SwitchToDefeatScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "SwitchToDefeatScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "ReceiveEndPlay");

	Params::ABP_Controller_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Controller_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.S_MidGameSpawn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::S_MidGameSpawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_MidGameSpawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.OC_DeathEffect
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OC_DeathEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_DeathEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.OC_RemoveDeathScreen
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OC_RemoveDeathScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_RemoveDeathScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.OC_CharacterDeath
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      KillerPlayerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                              RespawnTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HeadShot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Defeated                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_Weapons               Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      KillerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              KillDistance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              KillerHP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Piratecurse                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::OC_CharacterDeath(const class FString& KillerPlayerName, float RespawnTime, bool HeadShot, bool Defeated, enum class E_Weapons Weapon, const class FString& KillerId, int32 Damage, int32 KillDistance, int32 KillerHP, bool Piratecurse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_CharacterDeath");

	Params::ABP_Controller_C_OC_CharacterDeath_Params Parms{};

	Parms.KillerPlayerName = KillerPlayerName;
	Parms.RespawnTime = RespawnTime;
	Parms.HeadShot = HeadShot;
	Parms.Defeated = Defeated;
	Parms.Weapon = Weapon;
	Parms.KillerId = KillerId;
	Parms.Damage = Damage;
	Parms.KillDistance = KillDistance;
	Parms.KillerHP = KillerHP;
	Parms.Piratecurse = Piratecurse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.CharacterDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      KillerPlayerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               HeadShot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Character_C*             KillerCharacterRef                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AttackerTeamID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Weapons               WeaponInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              KillDistance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              KillerHP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::CharacterDeath(const class FString& KillerPlayerName, bool HeadShot, class ABP_Character_C* KillerCharacterRef, int32 AttackerTeamID, enum class E_Weapons WeaponInfo, int32 Damage, int32 KillDistance, int32 KillerHP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "CharacterDeath");

	Params::ABP_Controller_C_CharacterDeath_Params Parms{};

	Parms.KillerPlayerName = KillerPlayerName;
	Parms.HeadShot = HeadShot;
	Parms.KillerCharacterRef = KillerCharacterRef;
	Parms.AttackerTeamID = AttackerTeamID;
	Parms.WeaponInfo = WeaponInfo;
	Parms.Damage = Damage;
	Parms.KillDistance = KillDistance;
	Parms.KillerHP = KillerHP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.Respawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OnDestroyedShip                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::Respawn(bool OnDestroyedShip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "Respawn");

	Params::ABP_Controller_C_Respawn_Params Parms{};

	Parms.OnDestroyedShip = OnDestroyedShip;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OnCloseInactivityMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OnCloseInactivityMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OnCloseInactivityMessage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_2
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_2(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_2");

	Params::ABP_Controller_C_InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_2_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_1
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_1(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_1");

	Params::ABP_Controller_C_InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_1_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_0
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_0(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_0");

	Params::ABP_Controller_C_InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_0_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.ResetInteractKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::ResetInteractKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "ResetInteractKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.AddCommunicationCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::AddCommunicationCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "AddCommunicationCount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.QuickSnapBackToPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::QuickSnapBackToPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "QuickSnapBackToPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.OverRideCullingOwnerPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OverRideCullingOwnerPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OverRideCullingOwnerPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.OverRideCullingOwnerVehicle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OverRideCullingOwnerVehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OverRideCullingOwnerVehicle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.S_SetBannedPlayerList
// (Net, NetReliable, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_BanListEntry_new>BannedPlayerList                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Controller_C::S_SetBannedPlayerList(TArray<struct FST_BanListEntry_new>& BannedPlayerList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_SetBannedPlayerList");

	Params::ABP_Controller_C_S_SetBannedPlayerList_Params Parms{};

	Parms.BannedPlayerList = BannedPlayerList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.ResetKeys
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::ResetKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "ResetKeys");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.ResetCharacterKeys
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::ResetCharacterKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "ResetCharacterKeys");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.LoadKeys
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::LoadKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "LoadKeys");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.OC_SyncGameTime
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OC_SyncGameTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_SyncGameTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "ReceiveTick");

	Params::ABP_Controller_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.UpdateBoatTrail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    TrailDynMat                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::UpdateBoatTrail(float Speed, class UMaterialInstanceDynamic* TrailDynMat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "UpdateBoatTrail");

	Params::ABP_Controller_C_UpdateBoatTrail_Params Parms{};

	Parms.Speed = Speed;
	Parms.TrailDynMat = TrailDynMat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.RemoveWaterCullingVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BoatMeshBase_C*          BoatMeshBaseRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::RemoveWaterCullingVolume(class ABP_BoatMeshBase_C* BoatMeshBaseRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "RemoveWaterCullingVolume");

	Params::ABP_Controller_C_RemoveWaterCullingVolume_Params Parms{};

	Parms.BoatMeshBaseRef = BoatMeshBaseRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.CreateAndAddWaterCullingVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BoatMeshBase_C*          BoatMeshBaseRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ShipTypes             ShipType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::CreateAndAddWaterCullingVolume(class ABP_BoatMeshBase_C* BoatMeshBaseRef, enum class E_ShipTypes ShipType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "CreateAndAddWaterCullingVolume");

	Params::ABP_Controller_C_CreateAndAddWaterCullingVolume_Params Parms{};

	Parms.BoatMeshBaseRef = BoatMeshBaseRef;
	Parms.ShipType = ShipType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OpenChat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OpenChat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OpenChat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.ChatPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::ChatPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "ChatPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.OC_AddNewChatMessage
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SimpleMessage           ChatMessage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               TeamChat                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FormatText                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FullColorMessage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      PlayerUsernameId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      PlayerKillId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              TeamID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CommandMessage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::OC_AddNewChatMessage(const struct FST_SimpleMessage& ChatMessage, bool TeamChat, bool FormatText, bool FullColorMessage, const class FString& PlayerUsernameId, const class FString& PlayerKillId, int32 TeamID, bool CommandMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_AddNewChatMessage");

	Params::ABP_Controller_C_OC_AddNewChatMessage_Params Parms{};

	Parms.ChatMessage = ChatMessage;
	Parms.TeamChat = TeamChat;
	Parms.FormatText = FormatText;
	Parms.FullColorMessage = FullColorMessage;
	Parms.PlayerUsernameId = PlayerUsernameId;
	Parms.PlayerKillId = PlayerKillId;
	Parms.TeamID = TeamID;
	Parms.CommandMessage = CommandMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_AddNewChatMessage
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SimpleMessage           ChatMessage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               TeamChat                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FormatText                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      PlayerUsernameId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      PlayerKillId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsCommandMessage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::S_AddNewChatMessage(const struct FST_SimpleMessage& ChatMessage, bool TeamChat, bool FormatText, const class FString& PlayerUsernameId, const class FString& PlayerKillId, bool IsCommandMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_AddNewChatMessage");

	Params::ABP_Controller_C_S_AddNewChatMessage_Params Parms{};

	Parms.ChatMessage = ChatMessage;
	Parms.TeamChat = TeamChat;
	Parms.FormatText = FormatText;
	Parms.PlayerUsernameId = PlayerUsernameId;
	Parms.PlayerKillId = PlayerKillId;
	Parms.IsCommandMessage = IsCommandMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.CloseChat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::CloseChat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "CloseChat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.S_AddScoreCaptainCannonHit
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BoatMeshBase_C*          ShipRef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Score                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_AddScoreCaptainCannonHit(class ABP_BoatMeshBase_C* ShipRef, int32 Score)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_AddScoreCaptainCannonHit");

	Params::ABP_Controller_C_S_AddScoreCaptainCannonHit_Params Parms{};

	Parms.ShipRef = ShipRef;
	Parms.Score = Score;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OC_BlockSprint
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             CharacterRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::OC_BlockSprint(class ABP_Character_C* CharacterRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_BlockSprint");

	Params::ABP_Controller_C_OC_BlockSprint_Params Parms{};

	Parms.CharacterRef = CharacterRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_DamageSail
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Brig_MastBase_C*         MastRef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DamageAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_DamageSail(class ABP_Brig_MastBase_C* MastRef, int32 DamageAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_DamageSail");

	Params::ABP_Controller_C_S_DamageSail_Params Parms{};

	Parms.MastRef = MastRef;
	Parms.DamageAmount = DamageAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OC_HitIndicator
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HeadShot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              DamageAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_DamageSort            DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::OC_HitIndicator(bool HeadShot, int32 DamageAmount, bool IsLow, enum class E_DamageSort DamageType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_HitIndicator");

	Params::ABP_Controller_C_OC_HitIndicator_Params Parms{};

	Parms.HeadShot = HeadShot;
	Parms.DamageAmount = DamageAmount;
	Parms.IsLow = IsLow;
	Parms.DamageType = DamageType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_CreateRandomHullDamage
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BoatMeshBase_C*          BoatRef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DamageAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_CreateRandomHullDamage(class ABP_BoatMeshBase_C* BoatRef, int32 DamageAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_CreateRandomHullDamage");

	Params::ABP_Controller_C_S_CreateRandomHullDamage_Params Parms{};

	Parms.BoatRef = BoatRef;
	Parms.DamageAmount = DamageAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.CreateRandomHullDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BoatMeshBase_C*          BoatRef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DamageAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::CreateRandomHullDamage(class ABP_BoatMeshBase_C* BoatRef, int32 DamageAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "CreateRandomHullDamage");

	Params::ABP_Controller_C_CreateRandomHullDamage_Params Parms{};

	Parms.BoatRef = BoatRef;
	Parms.DamageAmount = DamageAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_DamageHull
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_DamageType            DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     RelativeLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactNormal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BoatMeshBase_C*          BoatRef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_DamageHull(int32 DamageAmount, enum class E_DamageType DamageType, const struct FVector& RelativeLocation, const struct FVector& ImpactNormal, class ABP_BoatMeshBase_C* BoatRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_DamageHull");

	Params::ABP_Controller_C_S_DamageHull_Params Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.DamageType = DamageType;
	Parms.RelativeLocation = RelativeLocation;
	Parms.ImpactNormal = ImpactNormal;
	Parms.BoatRef = BoatRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.DamageHull
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_DamageType            DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     RelativeLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactNormal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BoatMeshBase_C*          BoatRef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Weapons               AmmoType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::DamageHull(int32 DamageAmount, enum class E_DamageType DamageType, const struct FVector& RelativeLocation, const struct FVector& ImpactNormal, class ABP_BoatMeshBase_C* BoatRef, enum class E_Weapons AmmoType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "DamageHull");

	Params::ABP_Controller_C_DamageHull_Params Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.DamageType = DamageType;
	Parms.RelativeLocation = RelativeLocation;
	Parms.ImpactNormal = ImpactNormal;
	Parms.BoatRef = BoatRef;
	Parms.AmmoType = AmmoType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.DamageSail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Brig_MastBase_C*         MastRef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Weapons               Ammo_Type                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::DamageSail(int32 Damage, class ABP_Brig_MastBase_C* MastRef, enum class E_Weapons Ammo_Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "DamageSail");

	Params::ABP_Controller_C_DamageSail_Params Parms{};

	Parms.Damage = Damage;
	Parms.MastRef = MastRef;
	Parms.Ammo_Type = Ammo_Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.DamagePlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             PlayerToDamageRef                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HeadShot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               DamageOwnTeamAlso                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               MeleeDamage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CanDamageSelf                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_Weapons               Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ShotID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::DamagePlayer(int32 DamageAmount, class ABP_Character_C* PlayerToDamageRef, bool HeadShot, bool DamageOwnTeamAlso, bool MeleeDamage, bool CanDamageSelf, enum class E_Weapons Weapon, int32 ShotID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "DamagePlayer");

	Params::ABP_Controller_C_DamagePlayer_Params Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.PlayerToDamageRef = PlayerToDamageRef;
	Parms.HeadShot = HeadShot;
	Parms.DamageOwnTeamAlso = DamageOwnTeamAlso;
	Parms.MeleeDamage = MeleeDamage;
	Parms.CanDamageSelf = CanDamageSelf;
	Parms.Weapon = Weapon;
	Parms.ShotID = ShotID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_DamagePlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             PlayerRef                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HeadShot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CanDamageSelf                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               MeleeDamage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               DamageOwnTeamAlso                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_Weapons               Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ShotID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_DamagePlayer(int32 DamageAmount, class ABP_Character_C* PlayerRef, bool HeadShot, bool CanDamageSelf, bool MeleeDamage, bool DamageOwnTeamAlso, enum class E_Weapons Weapon, int32 ShotID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_DamagePlayer");

	Params::ABP_Controller_C_S_DamagePlayer_Params Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.PlayerRef = PlayerRef;
	Parms.HeadShot = HeadShot;
	Parms.CanDamageSelf = CanDamageSelf;
	Parms.MeleeDamage = MeleeDamage;
	Parms.DamageOwnTeamAlso = DamageOwnTeamAlso;
	Parms.Weapon = Weapon;
	Parms.ShotID = ShotID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.AddKill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              GoldMultiplier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TimeAliveModifier                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::AddKill(float GoldMultiplier, float TimeAliveModifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "AddKill");

	Params::ABP_Controller_C_AddKill_Params Parms{};

	Parms.GoldMultiplier = GoldMultiplier;
	Parms.TimeAliveModifier = TimeAliveModifier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_DestroyCharacter
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::S_DestroyCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_DestroyCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.HitIndicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HeadShot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              DamageAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_DamageSort            DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::HitIndicator(bool HeadShot, int32 DamageAmount, bool IsLow, enum class E_DamageSort DamageType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "HitIndicator");

	Params::ABP_Controller_C_HitIndicator_Params Parms{};

	Parms.HeadShot = HeadShot;
	Parms.DamageAmount = DamageAmount;
	Parms.IsLow = IsLow;
	Parms.DamageType = DamageType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OC_KillInfo
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              KillerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Weapons               WeaponType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CursedPlayer_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::OC_KillInfo(const class FString& PlayerName, int32 KillerId, enum class E_Weapons WeaponType, bool CursedPlayer_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_KillInfo");

	Params::ABP_Controller_C_OC_KillInfo_Params Parms{};

	Parms.PlayerName = PlayerName;
	Parms.KillerId = KillerId;
	Parms.WeaponType = WeaponType;
	Parms.CursedPlayer_ = CursedPlayer_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OC_DamageEffects
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     AttackerLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::OC_DamageEffects(const struct FVector& AttackerLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_DamageEffects");

	Params::ABP_Controller_C_OC_DamageEffects_Params Parms{};

	Parms.AttackerLocation = AttackerLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OC_SpectatorCam
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OC_SpectatorCam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_SpectatorCam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.OC_Teleport
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::OC_Teleport(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_Teleport");

	Params::ABP_Controller_C_OC_Teleport_Params Parms{};

	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_PossesPreviousPawn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_PossesPreviousPawn(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_PossesPreviousPawn");

	Params::ABP_Controller_C_S_PossesPreviousPawn_Params Parms{};

	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_SpawnSpectatorCam
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  SpawnTransform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void ABP_Controller_C::S_SpawnSpectatorCam(const struct FTransform& SpawnTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_SpawnSpectatorCam");

	Params::ABP_Controller_C_S_SpawnSpectatorCam_Params Parms{};

	Parms.SpawnTransform = SpawnTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.ScoreboardReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::ScoreboardReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "ScoreboardReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.ScoreboardPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::ScoreboardPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "ScoreboardPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.S_ExecutePingCommand
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      PingableObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CommandPingTypes      Command                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Direction_Optional_                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_ExecutePingCommand(class AActor* PingableObject, enum class E_CommandPingTypes Command, const struct FVector& Direction_Optional_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_ExecutePingCommand");

	Params::ABP_Controller_C_S_ExecutePingCommand_Params Parms{};

	Parms.PingableObject = PingableObject;
	Parms.Command = Command;
	Parms.Direction_Optional_ = Direction_Optional_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.UpdatePlayerCompassIcon
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TeamID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PlayerColor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsDead                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::UpdatePlayerCompassIcon(int32 TeamID, int32 PlayerColor, bool IsDead)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "UpdatePlayerCompassIcon");

	Params::ABP_Controller_C_UpdatePlayerCompassIcon_Params Parms{};

	Parms.TeamID = TeamID;
	Parms.PlayerColor = PlayerColor;
	Parms.IsDead = IsDead;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.UpdateCompassMarker
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TeamID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PlayerColor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AddMarker                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::UpdateCompassMarker(int32 TeamID, int32 PlayerColor, const struct FVector& Location, bool AddMarker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "UpdateCompassMarker");

	Params::ABP_Controller_C_UpdateCompassMarker_Params Parms{};

	Parms.TeamID = TeamID;
	Parms.PlayerColor = PlayerColor;
	Parms.Location = Location;
	Parms.AddMarker = AddMarker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_PlaceMarker
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsHoveringOverMarker                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PickupBase_C*            PickupActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_PlaceMarker(const struct FVector& Location, bool IsHoveringOverMarker, class ABP_PickupBase_C* PickupActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_PlaceMarker");

	Params::ABP_Controller_C_S_PlaceMarker_Params Parms{};

	Parms.Location = Location;
	Parms.IsHoveringOverMarker = IsHoveringOverMarker;
	Parms.PickupActor = PickupActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.PlaceMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TeamPlayerColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           Background                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PickupBase_C*            PickupActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_WaypointMarker_C*        PreviousMarker__Negate_all_actors_of_class_call_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::PlaceMarker(const struct FVector& Location, int32 TeamPlayerColor, class UMaterialInstance* Background, class UTexture2D* Icon, class ABP_PickupBase_C* PickupActor, class ABP_WaypointMarker_C* PreviousMarker__Negate_all_actors_of_class_call_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "PlaceMarker");

	Params::ABP_Controller_C_PlaceMarker_Params Parms{};

	Parms.Location = Location;
	Parms.TeamPlayerColor = TeamPlayerColor;
	Parms.Background = Background;
	Parms.Icon = Icon;
	Parms.PickupActor = PickupActor;
	Parms.PreviousMarker__Negate_all_actors_of_class_call_ = PreviousMarker__Negate_all_actors_of_class_call_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_ActivateInteractable
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_InteractableBase_C*      Interactable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_ActivateInteractable(class ABP_InteractableBase_C* Interactable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_ActivateInteractable");

	Params::ABP_Controller_C_S_ActivateInteractable_Params Parms{};

	Parms.Interactable = Interactable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.ActivateInteractable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_InteractableBase_C*      Interactable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::ActivateInteractable(class ABP_InteractableBase_C* Interactable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "ActivateInteractable");

	Params::ABP_Controller_C_ActivateInteractable_Params Parms{};

	Parms.Interactable = Interactable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OpenCommandWheel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OpenCommandWheel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OpenCommandWheel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.CommandWheelReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::CommandWheelReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "CommandWheelReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.CommandWheelPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::CommandWheelPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "CommandWheelPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.CloseCommandWheel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::CloseCommandWheel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "CloseCommandWheel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.SetNewServerName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewServerName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_Controller_C::SetNewServerName(const class FString& NewServerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "SetNewServerName");

	Params::ABP_Controller_C_SetNewServerName_Params Parms{};

	Parms.NewServerName = NewServerName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_AddedSelfModResponse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*          Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::S_AddedSelfModResponse(class UVaRestRequestJSON* Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_AddedSelfModResponse");

	Params::ABP_Controller_C_S_AddedSelfModResponse_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.ChangeMaxPreGamePlayerCap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerCap                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::ChangeMaxPreGamePlayerCap(int32 PlayerCap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "ChangeMaxPreGamePlayerCap");

	Params::ABP_Controller_C_ChangeMaxPreGamePlayerCap_Params Parms{};

	Parms.PlayerCap = PlayerCap;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.SetNewServerPassword
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewPassword                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_Controller_C::SetNewServerPassword(const class FString& NewPassword)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "SetNewServerPassword");

	Params::ABP_Controller_C_SetNewServerPassword_Params Parms{};

	Parms.NewPassword = NewPassword;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_AddSelfAsModerator
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::S_AddSelfAsModerator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_AddSelfAsModerator");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.SetModeratorSilently
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::SetModeratorSilently()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "SetModeratorSilently");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.AddSelfAsModerator
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::AddSelfAsModerator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "AddSelfAsModerator");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.S_ToggleModerator
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Platform_ID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_Controller_C::S_ToggleModerator(const class FString& Platform_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_ToggleModerator");

	Params::ABP_Controller_C_S_ToggleModerator_Params Parms{};

	Parms.Platform_ID = Platform_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_UpdateBanList
// (Net, NetReliable, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_BanListEntry_new>Banlist                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Controller_C::S_UpdateBanList(TArray<struct FST_BanListEntry_new>& Banlist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_UpdateBanList");

	Params::ABP_Controller_C_S_UpdateBanList_Params Parms{};

	Parms.Banlist = Banlist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OC_AddPlayerToBanList
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      UniqueNetId                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        UserName                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_Controller_C::OC_AddPlayerToBanList(const class FString& UniqueNetId, class FText UserName, const class FString& PlayerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_AddPlayerToBanList");

	Params::ABP_Controller_C_OC_AddPlayerToBanList_Params Parms{};

	Parms.UniqueNetId = UniqueNetId;
	Parms.UserName = UserName;
	Parms.PlayerId = PlayerId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_KickPlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               AddToBanList                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        UserName                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::S_KickPlayer(const class FString& PlayerId, bool AddToBanList, class FText UserName, class FText Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_KickPlayer");

	Params::ABP_Controller_C_S_KickPlayer_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.AddToBanList = AddToBanList;
	Parms.UserName = UserName;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OC_LeaveGame
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_DisconnectReasons     DisconnectReason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::OC_LeaveGame(class FText Reason, enum class E_DisconnectReasons DisconnectReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_LeaveGame");

	Params::ABP_Controller_C_OC_LeaveGame_Params Parms{};

	Parms.Reason = Reason;
	Parms.DisconnectReason = DisconnectReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_CommandAction
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ActionClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Information                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::S_CommandAction(class UClass* ActionClass, class FText Information)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_CommandAction");

	Params::ABP_Controller_C_S_CommandAction_Params Parms{};

	Parms.ActionClass = ActionClass;
	Parms.Information = Information;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.CommandAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ServerCommand                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      ActionClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Information                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::CommandAction(bool ServerCommand, class UClass* ActionClass, class FText Information)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "CommandAction");

	Params::ABP_Controller_C_CommandAction_Params Parms{};

	Parms.ServerCommand = ServerCommand;
	Parms.ActionClass = ActionClass;
	Parms.Information = Information;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OC_WheelCoolDown
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OC_WheelCoolDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_WheelCoolDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.OC_PostGeneralPopup
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::OC_PostGeneralPopup(class FText Message, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_PostGeneralPopup");

	Params::ABP_Controller_C_OC_PostGeneralPopup_Params Parms{};

	Parms.Message = Message;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.PostGeneralPopup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::PostGeneralPopup(class FText Message, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "PostGeneralPopup");

	Params::ABP_Controller_C_PostGeneralPopup_Params Parms{};

	Parms.Message = Message;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OC_BroadcastAnnouncement
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               NotificationSound                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Controller_C::OC_BroadcastAnnouncement(class FText Message, bool NotificationSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_BroadcastAnnouncement");

	Params::ABP_Controller_C_OC_BroadcastAnnouncement_Params Parms{};

	Parms.Message = Message;
	Parms.NotificationSound = NotificationSound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.PostTopScreenMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ExtraInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Controller_C::PostTopScreenMessage(class UClass* Widget, class FText ExtraInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "PostTopScreenMessage");

	Params::ABP_Controller_C_PostTopScreenMessage_Params Parms{};

	Parms.Widget = Widget;
	Parms.ExtraInfo = ExtraInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OC_RemovePlayerFromVotedList
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_Controller_C::OC_RemovePlayerFromVotedList(const class FString& PlayerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_RemovePlayerFromVotedList");

	Params::ABP_Controller_C_OC_RemovePlayerFromVotedList_Params Parms{};

	Parms.PlayerId = PlayerId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.OC_AddVoteKickWidget
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Controller_C::OC_AddVoteKickWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "OC_AddVoteKickWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Controller.BP_Controller_C.S_ParseVoteKickVote
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            KickVoterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::S_ParseVoteKickVote(int32 PlayerId, const struct FUniqueNetIdRepl& KickVoterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_ParseVoteKickVote");

	Params::ABP_Controller_C_S_ParseVoteKickVote_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.KickVoterID = KickVoterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.S_RequestVoteKick
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            KickVoterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::S_RequestVoteKick(int32 PlayerId, const struct FUniqueNetIdRepl& KickVoterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "S_RequestVoteKick");

	Params::ABP_Controller_C_S_RequestVoteKick_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.KickVoterID = KickVoterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.ParseVoteKickVote
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            KickVoterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::ParseVoteKickVote(int32 PlayerId, const struct FUniqueNetIdRepl& KickVoterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "ParseVoteKickVote");

	Params::ABP_Controller_C_ParseVoteKickVote_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.KickVoterID = KickVoterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.RequestVoteKick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            KickVoterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Controller_C::RequestVoteKick(int32 PlayerId, const struct FUniqueNetIdRepl& KickVoterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "RequestVoteKick");

	Params::ABP_Controller_C_RequestVoteKick_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.KickVoterID = KickVoterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.ExecuteUbergraph_BP_Controller
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_PlayerID                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_KickVoterID                                   (HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_VoteKickPlayer_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_TopScreenMessageBase_C*  K2Node_DynamicCast_AsUI_Top_Screen_Message_Base                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Broadcast_C*             CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_InventoryError_C*        CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_TeamId_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bForce                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCrewFleetID_FleetID                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_AfterDelay                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_CrewBanner_C*>    CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// enum class E_DisconnectReasons     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_GameState_C*             K2Node_DynamicCast_AsBP_Game_State                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_VoiceLineRowName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_DisconnectReasons     Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_HullColor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_SailColor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Emblem                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_BowFigure                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_FlagColor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_RopeColor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_FlagEmblem_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_LampColor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_SailEmblemBottom                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_SailColorBottom                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ShipPaint                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ShipPaintColor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_BowFigureColor1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_BowFigureColor2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_BowFigureColor3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_HullPaintDamageAmount                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_SpecialFlag                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_FlagSetup                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_SailTears                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_SailDirt                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_SailPaintWear                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_BoatMeshBase_C*>  CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_ShipName                                      (None)
// int32                              K2Node_CustomEvent_teamColor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_FlagEmblem                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bLockedToParty                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bDeleteEmpty                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_ShipTypes             K2Node_CustomEvent_ShipType_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_TeamId_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DeathCam_C*              K2Node_DynamicCast_AsBP_Death_Cam                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_TeamMenu_C*              K2Node_DynamicCast_AsUI_Team_Menu                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_DamageAmount_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_VehicleCannon_C*         K2Node_CustomEvent_CannonRef_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_DamageAmount_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_VehicleCannon_C*         K2Node_CustomEvent_CannonRef                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BowBarrel_C*             K2Node_CustomEvent_BowBarrel_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BowBarrel_C*             K2Node_CustomEvent_BowBarrel                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_5                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_6                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_7                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVaRestSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_PieMenu_C*               CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           CallFunc_ConstructVaRestJsonObject_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WithEditor_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PickupExplosiveBarrel_C* K2Node_CustomEvent_BarrelRel                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_DetonationDelay_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PickupExplosiveBarrel_C* K2Node_CustomEvent_BarrelRef_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_DetonationDelay                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ExplosiveBarrel_C*       K2Node_CustomEvent_BarrelRef_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ExplosiveBarrel_C*       K2Node_CustomEvent_BarrelRef                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_ShipActorRef_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_VehicleSteeringWheel_C*  K2Node_CustomEvent_SteeringWheelRef_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_VehicleSteeringWheel_C*  K2Node_CustomEvent_SteeringWheelRef                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_ShipActorRef                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BoatMeshBase_C*          K2Node_DynamicCast_AsBP_Boat_Mesh_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAllChildActors_ChildActors                           (ReferenceParm)
// class AActor*                      K2Node_CustomEvent_ActorRef                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_Spectator_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UUI_Spectator_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Lock_Crew                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_8                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_GameState_C*             K2Node_DynamicCast_AsBP_Game_State_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_FleetID                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CoreGameMode_C*          K2Node_DynamicCast_AsBP_Core_Game_Mode                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_Controller_C*>    CallFunc_GetAllActorsOfClass_OutActors_2                         (ReferenceParm)
// bool                               Temp_bool_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WithEditor_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class APlayerStart*>        CallFunc_GetAllActorsOfClass_OutActors_3                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerStart*                CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Information_2                                 (None)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_5                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Scoreboard_C*            CallFunc_Create_ReturnValue_4                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DeathCam_C*              K2Node_DynamicCast_AsBP_Death_Cam_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ShipCustomisations      CallFunc_Get_Ship_Customization_Customization                    (HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_ShipCustomisations      CallFunc_Get_Ship_Customization_Customization_1                  (HasGetValueTypeHash)
// int32                              CallFunc_Get_Team_ID_Team_ID                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_PlayerState_C*        K2Node_DynamicCast_AsAlpha_Player_State                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Get_Team_ID_Team_ID_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Presence                                      (ZeroConstructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WithEditor_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WithEditor_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_9                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// TArray<class UUI_Commands_C*>      CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// class UUI_Commands_C*              CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_1                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_2                                       (HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue_1                    (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_10                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASound_Volume_Detecter_C*    CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_CameraManager_C*         K2Node_DynamicCast_AsBP_Camera_Manager                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_20                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AWaterSettings_C*>    CallFunc_GetAllActorsOfClass_OutActors_4                         (ReferenceParm)
// class AWaterSettings_C*            CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Hit_C*                   CallFunc_Create_ReturnValue_5                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldStayInUIMode__ShouldStay                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_14                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Widget_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue_6                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_BoatSpawn_C*>     CallFunc_GetAllActorsOfClass_OutActors_5                         (ReferenceParm)
// class ABP_BoatSpawn_C*             CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_BoatSpawn_C*>     CallFunc_GetAllActorsOfClass_OutActors_6                         (ReferenceParm)
// class ABP_BoatSpawn_C*             CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_YouKilledInfo_C*         CallFunc_Create_ReturnValue_7                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_11                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_Widget_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue_8                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_22                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_23                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_24                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_21                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_22                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_23                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_24                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_25                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class ABP_VehicleSteeringWheel_C*  K2Node_DynamicCast_AsBP_Vehicle_Steering_Wheel                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_26                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// class ABP_VehicleBase_C*           K2Node_CustomEvent_VehicleRef_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PickupBase_C*            K2Node_CustomEvent_Pickup                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_25                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                CallFunc_GetCurrentActiveMontage_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TreasureTurnInNPC_C*     K2Node_DynamicCast_AsBP_Treasure_Turn_in_NPC                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_27                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Cork_C*                  K2Node_DynamicCast_AsBP_Cork                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_28                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_26                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_12                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCameraComponent*            CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_2                             (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UCameraComponent*            CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult_1                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               K2Node_CustomEvent_IsDead_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_VehicleBase_C*           K2Node_CustomEvent_VehicleRef_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CloseMenus_AnyMenuClosed                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_VehicleSteeringWheel_C*  K2Node_DynamicCast_AsBP_Vehicle_Steering_Wheel_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_29                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_InteractableBase_C*      K2Node_CustomEvent_Interactable_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SteeringWheelKick_C*     K2Node_DynamicCast_AsBP_Steering_Wheel_Kick                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_30                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_27                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_InteractableBase_C*      K2Node_CustomEvent_InteractableRef_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_28                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_29                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_TreasureChest_C*         K2Node_DynamicCast_AsBP_Treasure_Chest                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_31                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_ContainerBase_C*         K2Node_DynamicCast_AsBP_Container_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_32                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_VehicleBase_C*           K2Node_CustomEvent_VehicleRef_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_30                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_31                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_32                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_VehicleSteeringWheel_C*  K2Node_DynamicCast_AsBP_Vehicle_Steering_Wheel_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_33                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerControlled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CloseMenus_AnyMenuClosed_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_34                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_33                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Brig_MastBase_C*         K2Node_DynamicCast_AsBP_Brig_Mast_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_35                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_34                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_VehicleBase_C*           K2Node_CustomEvent_VehicleRef                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_InteractableBase_C*      K2Node_CustomEvent_InteractableRef                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_35                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_36                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_37                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_VehicleBase_C*           K2Node_DynamicCast_AsBP_Vehicle_Base                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_36                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_37                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCameraComponent*            CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPackagedForDistribution_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_13                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_VehicleBase_C*           K2Node_DynamicCast_AsBP_Vehicle_Base_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_38                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_14                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_SoundTester_C*>   CallFunc_GetAllActorsOfClass_OutActors_7                         (ReferenceParm)
// class ABP_SoundTester_C*           CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_38                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DeathCam_C*              K2Node_DynamicCast_AsBP_Death_Cam_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_39                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_SpectatorCam_C*          K2Node_DynamicCast_AsBP_Spectator_Cam                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_40                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_WaypointMarker_C*>CallFunc_GetAllActorsOfClass_OutActors_8                         (ReferenceParm)
// class ABP_WaypointMarker_C*        CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Crew_Member_ID_Is_Same_Team_Crew_And_Ship       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_39                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_40                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_41                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_42                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_43                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_44                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_3                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_4                                       (HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_5           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_6           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_7           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Team_ID_Team_ID_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Team_ID_Team_ID_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Team_ID_Team_ID_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_GameMode_C*           CallFunc_CurrentGameMode_As_Alpha_Game_Mode                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_GameMode_C*           CallFunc_CurrentGameMode_As_Alpha_Game_Mode_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_GameMode_C*           CallFunc_CurrentGameMode_As_Alpha_Game_Mode_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_GameMode_C*           CallFunc_CurrentGameMode_As_Alpha_Game_Mode_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Cost                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_MainWeapon                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_SideArm                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Melee                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_OnDestroyedShip_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsDead_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsDead_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_1                                           (HasGetValueTypeHash)
// class ABP_CoreGameMode_C*          K2Node_DynamicCast_AsBP_Core_Game_Mode_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_41                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEOS_PlayerState_C*          K2Node_DynamicCast_AsEOS_Player_State                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_42                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_11                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRespawnTime_RespawnTime                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRespawnTime_RespawnTime_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRespawnTime_RespawnTime_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_43                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               Temp_bool_IsClosed_Variable_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_15                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Team_ID_Team_ID_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_44                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_45                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_46                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_5                                       (HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GameState_C*             K2Node_DynamicCast_AsBP_Game_State_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_45                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RemoveGoldPercentage_AmountRemoved                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_46                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_47                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_48                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_49                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_47                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State_12                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_48                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_6                                       (HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CoreGameMode_C*          K2Node_DynamicCast_AsBP_Core_Game_Mode_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_49                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue_2                    (IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DeathCam_C*              CallFunc_FinishSpawningActor_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// bool                               CallFunc_IsValid_ReturnValue_50                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_16                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_KillerPlayerName_1                            (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_RespawnTime                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Headshot_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Defeated                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_Weapons               K2Node_CustomEvent_Weapon_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_KillerId_1                                    (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Damage_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_KillDistance_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_KillerHP_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_PirateCurse                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_KillerPlayerName                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Headshot_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Character_C*             K2Node_CustomEvent_KillerCharacterRef                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_AttackerTeamID                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Weapons               K2Node_CustomEvent_WeaponInfo                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Damage_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_KillDistance                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_KillerHP                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_OnDestroyedShip                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_51                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEOS_PlayerState_C*          K2Node_DynamicCast_AsEOS_Player_State_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_50                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_5                         (None)
// struct FST_SimpleMessage           K2Node_MakeStruct_ST_SimpleMessage                               (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_6                         (None)
// struct FST_SimpleMessage           K2Node_MakeStruct_ST_SimpleMessage_1                             (HasGetValueTypeHash)
// class UUI_DeathScreen_C*           CallFunc_Create_ReturnValue_9                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_15                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_15                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_8           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_9           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_52                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_53                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_54                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_17                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_51                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_18                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FST_SimpleMessage           K2Node_MakeStruct_ST_SimpleMessage_2                             (HasGetValueTypeHash)
// class UUI_Spectator_C*             CallFunc_Create_ReturnValue_10                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_DeathBLoodEffect_C*      CallFunc_Create_ReturnValue_11                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_19                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_20                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// struct FST_SimpleMessage           K2Node_MakeStruct_ST_SimpleMessage_3                             (HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_20                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_VehicleCannon_C*         K2Node_DynamicCast_AsBP_Vehicle_Cannon                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_52                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_21                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_ConquestLoadoutSelection_NEW_C*CallFunc_Create_ReturnValue_12                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_21                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_InputAxisKeyEvent_AxisValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_16                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_16                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_22                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInputKeyDown_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInputKeyDown_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_55                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State_13                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_53                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_WorldMap_C*              CallFunc_Create_ReturnValue_13                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_7                                       (HasGetValueTypeHash)
// bool                               CallFunc_GetMousePosition_Success                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMousePosition_X                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMousePosition_Y                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMousePosition_Success_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMousePosition_X_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMousePosition_Y_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMousePosition_Success_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMousePosition_X_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMousePosition_Y_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMousePosition_Success_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMousePosition_X_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMousePosition_Y_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisKeyEvent_AxisValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisKeyEvent_AxisValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_17                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            K2Node_DynamicCast_AsBP_Controller                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_54                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_56                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        Temp_struct_Variable_2                                           (HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_55                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInputKeyDown_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_57                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_58                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKeyBind_Key                                          (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_56                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_22                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PickupBase_C*            K2Node_DynamicCast_AsBP_Pickup_Base                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_57                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_59                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInputKeyDown_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInputKeyDown_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_58                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_60                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PickupBase_C*            K2Node_DynamicCast_AsBP_Pickup_Base_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_59                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_61                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_18                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WithEditor_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKeyBind_Key_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_IsInputKeyDown_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_23                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInputKeyDown_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKeyBind_Key_2                                        (HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKeyBind_Key_3                                        (HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKeyBind_Key_4                                        (HasGetValueTypeHash)
// bool                               CallFunc_IsInputKeyDown_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInputKeyDown_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_24                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SpectatorCam_C*          K2Node_DynamicCast_AsBP_Spectator_Cam_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_60                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_62                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_DeathCam_C*              K2Node_DynamicCast_AsBP_Death_Cam_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_61                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_23                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_24                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_8                                       (HasGetValueTypeHash)
// TArray<class ABP_ShipWaterCulling_C*>CallFunc_GetAllActorsOfClass_OutActors_9                         (ReferenceParm)
// class ABP_ShipWaterCulling_C*      CallFunc_Array_Get_Item_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_12                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_9                                       (HasGetValueTypeHash)
// TArray<class ABP_ShipWaterCulling_C*>CallFunc_GetAllActorsOfClass_OutActors_10                        (ReferenceParm)
// class ABP_ShipWaterCulling_C*      CallFunc_Array_Get_Item_11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_13                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_ShipWaterCulling_C*>CallFunc_GetAllActorsOfClass_OutActors_11                        (ReferenceParm)
// bool                               CallFunc_IsLocalController_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_ShipWaterCulling_C*      CallFunc_Array_Get_Item_12                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_14                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_63                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_25                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_2                                    (HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_25                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FST_BanListEntry_new>K2Node_CustomEvent_BannedPlayerList                              (ConstParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_64                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_65                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckIfPointIsBelowWaterLevel_IsBelowWaterLevel         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_BoatMeshBase_C*>  CallFunc_GetAllActorsOfClass_OutActors_12                        (ReferenceParm)
// TArray<class ABP_BoatMeshBase_C*>  CallFunc_GetAllActorsOfClass_OutActors_13                        (ReferenceParm)
// class ABP_BoatMeshBase_C*          CallFunc_Array_Get_Item_13                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BoatMeshBase_C*          CallFunc_Array_Get_Item_14                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_15                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_16                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_26                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_66                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalController_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_26                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_ShipWaterCulling_C*>CallFunc_GetAllActorsOfClass_OutActors_14                        (ReferenceParm)
// bool                               CallFunc_IsLocalController_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_ShipWaterCulling_C*      CallFunc_Array_Get_Item_15                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_17                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInputKeyDown_ReturnValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKeyBind_Key_5                                        (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_67                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_68                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_2                    (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_3                    (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_3                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_4                             (IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_TransformTransform_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_TInterpTo_ReturnValue                                   (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult_2                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_27                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_GetComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue                        (IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_TransformTransform_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_TInterpTo_ReturnValue_1                                 (IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_69                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_70                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalController_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInputKeyDown_ReturnValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKeyBind_Key_6                                        (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_71                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_72                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_73                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BoatMeshBase_C*          CallFunc_Array_Get_Item_16                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_74                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMyShip_MyShip                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_WaterPP_C*>       CallFunc_GetAllActorsOfClass_OutActors_15                        (ReferenceParm)
// class ABP_WaterPP_C*               CallFunc_Array_Get_Item_17                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_27                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_75                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_CalculateDeltaOnly_Delta                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_IngameMenu_C*            CallFunc_Create_ReturnValue_14                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_15                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Speed                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_CustomEvent_TrailDynMat                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_76                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AWaterPlane_C*>       CallFunc_GetAllActorsOfClass_OutActors_16                        (ReferenceParm)
// class ABP_BoatMeshBase_C*          K2Node_CustomEvent_BoatMeshBaseRef_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWaterPlane_C*               CallFunc_Array_Get_Item_18                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_BoatMeshBase_C*          K2Node_CustomEvent_BoatMeshBaseRef                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ShipTypes             K2Node_CustomEvent_ShipType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetShipWaterCullingClass_CullingClass                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_3                                    (HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_4                    (IsPlainOldData, NoDestructor)
// class UUI_PrepareForBattle_C*      CallFunc_Create_ReturnValue_15                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ShipWaterCulling_C*      CallFunc_FinishSpawningActor_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_GameMode_C*           CallFunc_CurrentGameMode_As_Alpha_Game_Mode_4                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldStayInUIMode__ShouldStay_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_28                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_77                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_78                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_5                             (IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_28                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SpawnSelectionCam_C*     CallFunc_FinishSpawningActor_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_1                                (HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_2                                (HasGetValueTypeHash)
// struct FST_SimpleMessage           K2Node_CustomEvent_ChatMessage_1                                 (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_TeamChat_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_FormatText_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_FullColorMessage                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_PlayerUsernameId_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_PlayerKillId_1                                (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_TeamId_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_CommandMessage                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_SimpleMessage           K2Node_CustomEvent_ChatMessage                                   (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_TeamChat                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_FormatText                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_PlayerUsernameId                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_PlayerKillId                                  (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsCommandMessage                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetTeamFleetChatColor_NewParam                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_ComplexMessage          K2Node_MakeStruct_St_ComplexMessage                              (HasGetValueTypeHash)
// struct FSt_ComplexMessage          K2Node_MakeStruct_St_ComplexMessage_1                            (HasGetValueTypeHash)
// class FText                        CallFunc_GetTeamFleetChatTagUsernameText_Result                  (None)
// struct FSt_ComplexMessage          K2Node_MakeStruct_St_ComplexMessage_2                            (HasGetValueTypeHash)
// class UUI_SpawnSelection_C*        CallFunc_Create_ReturnValue_16                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Team_ID_Team_ID_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class E_ScoreType>     K2Node_MakeArray_Array_2                                         (ReferenceParm)
// int32                              CallFunc_Get_Team_ID_Team_ID_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class E_ScoreType>     K2Node_MakeArray_Array_3                                         (ReferenceParm)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_8                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_62                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_BoatMeshBase_C*          K2Node_CustomEvent_ShipRef                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Score                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CeilDecimals_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_79                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_VehicleSteeringWheel_C*  K2Node_DynamicCast_AsBP_Vehicle_Steering_Wheel_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_63                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class E_ScoreType>     K2Node_MakeArray_Array_4                                         (ReferenceParm)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class E_ScoreType>     K2Node_MakeArray_Array_5                                         (ReferenceParm)
// class ABP_Controller_C*            K2Node_DynamicCast_AsBP_Controller_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_64                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_17                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_19                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_80                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_10          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_CustomEvent_CharacterRef                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StopSprint_WasSprinting                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Brig_MastBase_C*         K2Node_CustomEvent_MastRef_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_DamageAmount_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Headshot_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_DamageAmount_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsLow_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_DamageSort            K2Node_CustomEvent_DamageType_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_81                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_18                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BoatMeshBase_C*          K2Node_CustomEvent_BoatRef_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_DamageAmount_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_13                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      CallFunc_CreateRandomDamage_DamageAmounts                        (ReferenceParm)
// TArray<struct FVector>             CallFunc_CreateRandomDamage_DamageLocations                      (ReferenceParm)
// int32                              CallFunc_Array_Get_Item_19                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_18                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_14                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_20                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BoatMeshBase_C*          K2Node_CustomEvent_BoatRef_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_DamageAmount_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_DamageAmount_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_DamageType            K2Node_CustomEvent_DamageType_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_RelativeLocation_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_ImpactNormal_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BoatMeshBase_C*          K2Node_CustomEvent_BoatRef_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_DamageAmount_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_DamageType            K2Node_CustomEvent_DamageType_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_RelativeLocation                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_ImpactNormal                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BoatMeshBase_C*          K2Node_CustomEvent_BoatRef                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Weapons               K2Node_CustomEvent_AmmoType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetScoreAmountCannonBall_Score                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Brig_MastBase_C*         K2Node_CustomEvent_MastRef                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Weapons               K2Node_CustomEvent_Ammo_Type                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetScoreAmountCannonBall_Score_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_82                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_DamageAmount_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_CustomEvent_PlayerToDamageRef                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Headshot_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_DamageOwnTeamAlso_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_MeleeDamage_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_CanDamageSelf_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_Weapons               K2Node_CustomEvent_Weapon_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ShotID_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_DamageAmount_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_CustomEvent_PlayerRef                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Headshot_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_CanDamageSelf                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_MeleeDamage                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_DamageOwnTeamAlso                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_Weapons               K2Node_CustomEvent_Weapon                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ShotID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_83                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            CallFunc_Array_Get_Item_20                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_GoldMultiplier                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeAliveModifier                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State_14                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_65                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_Chat_C*                  CallFunc_Create_ReturnValue_17                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Headshot                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_DamageAmount                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsLow                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_DamageSort            K2Node_CustomEvent_DamageType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Playername                                    (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_KillerId                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Weapons               K2Node_CustomEvent_WeaponType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_CursedPlayer_                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_CustomEvent_AttackerLocation                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State_15                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_66                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_6                             (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_84                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_Version_C*               CallFunc_Create_ReturnValue_18                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WithEditor_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_85                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_86                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_87                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFontOutlineSettings        K2Node_MakeStruct_FontOutlineSettings                            (NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_Username_C*>      CallFunc_GetAllWidgetsOfClass_FoundWidgets_2                     (ReferenceParm, ContainsInstancedReference)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_3                                (HasGetValueTypeHash)
// class UUI_Username_C*              CallFunc_Array_Get_Item_21                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_ComplexMessage          K2Node_MakeStruct_St_ComplexMessage_3                            (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_88                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_CustomEvent_Location_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_CustomEvent_SpawnTransform                                (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SpectatorCam_C*          CallFunc_FinishSpawningActor_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_7                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_6          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldStayInUIMode__ShouldStay_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_MapCamera_C*             CallFunc_FinishSpawningActor_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_89                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_90                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_FPSCounter_C*            CallFunc_Create_ReturnValue_19                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_10                                      (HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_29                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_Commands_C*              CallFunc_Create_ReturnValue_20                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_29                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_CrewBanner_C*            CallFunc_Array_Get_Item_22                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_11                                      (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_91                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_11          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Get_Team_ID_Team_ID_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Team_ID_Team_ID_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GameState_C*             K2Node_DynamicCast_AsBP_Game_State_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_67                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Get_Item_23                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Get_Item_24                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_PingableObject                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CommandPingTypes      K2Node_CustomEvent_Command                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Direction_Optional_                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_WaypointMarker_C*        CallFunc_GetCurrentWaypointMarker_CurrentMarker                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               CallFunc_IsValid_ReturnValue_92                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_93                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State_16                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_68                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_7                         (None)
// bool                               CallFunc_IsValid_ReturnValue_94                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_TeamId_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_PlayerColor_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsDead                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_TeamId                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_PlayerColor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_AddMarker                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEOS_PlayerState_C*          K2Node_DynamicCast_AsEOS_Player_State_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_69                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_30                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_19                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_15                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_21                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsHoveringOverMarker                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PickupBase_C*            K2Node_CustomEvent_PickupActor_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_12                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Key_IsGamepadKey_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_95                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstance*           CallFunc_GenerateMarkerInfoForPickup_Background                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GenerateMarkerInfoForPickup_Icon                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GenerateMarkerInfoForPickup_Location                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GenerateMarkerInfoForPickup_Message                     (None)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_2                                          (None)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_SimpleMessage           K2Node_MakeStruct_ST_SimpleMessage_4                             (HasGetValueTypeHash)
// TArray<class ABP_WaypointMarker_C*>CallFunc_GetAllActorsOfClass_OutActors_17                        (ReferenceParm)
// class ABP_WaypointMarker_C*        CallFunc_Array_Get_Item_25                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_19                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_16                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Crew_Member_ID_Is_Same_Team_Crew_And_Ship_1     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_ConquestPregame_C*       CallFunc_Create_ReturnValue_21                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_TeamPlayerColor                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           K2Node_CustomEvent_Background                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_Icon                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PickupBase_C*            K2Node_CustomEvent_PickupActor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_WaypointMarker_C*        K2Node_CustomEvent_PreviousMarker__Negate_all_actors_of_class_call_(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_96                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue_3                    (IsPlainOldData, NoDestructor)
// class UUI_InventoryError_C*        CallFunc_Create_ReturnValue_22                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_7          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_WaypointMarker_C*        CallFunc_FinishSpawningActor_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_InteractableBase_C*      K2Node_CustomEvent_Interactable_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_InteractableBase_C*      K2Node_CustomEvent_Interactable                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_97                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_12          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PieMenuSelection        K2Node_MakeStruct_ST_PieMenuSelection                            (HasGetValueTypeHash)
// class ABP_VehicleBase_C*           K2Node_DynamicCast_AsBP_Vehicle_Base_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_70                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_71                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_98                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_PieMenuSelection        K2Node_MakeStruct_ST_PieMenuSelection_1                          (HasGetValueTypeHash)
// struct FST_PieMenuSelection        K2Node_MakeStruct_ST_PieMenuSelection_2                          (HasGetValueTypeHash)
// struct FST_PieMenuSelection        K2Node_MakeStruct_ST_PieMenuSelection_3                          (HasGetValueTypeHash)
// struct FST_PieMenuSelection        K2Node_MakeStruct_ST_PieMenuSelection_4                          (HasGetValueTypeHash)
// struct FST_PieMenuSelection        K2Node_MakeStruct_ST_PieMenuSelection_5                          (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_99                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_PieMenuSelection        K2Node_MakeStruct_ST_PieMenuSelection_6                          (HasGetValueTypeHash)
// struct FST_PieMenuSelection        K2Node_MakeStruct_ST_PieMenuSelection_7                          (HasGetValueTypeHash)
// TArray<struct FST_PieMenuSelection>K2Node_MakeArray_Array_6                                         (ReferenceParm)
// struct FKey                        K2Node_InputKeyEvent_Key_13                                      (HasGetValueTypeHash)
// class AAlpha_PlayerState_C*        CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_30                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         K2Node_DynamicCast_AsEOS_Game_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_72                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_9                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_73                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance_10                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_74                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WithEditor_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_14                                      (HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_NewServerName                                 (ZeroConstructor, HasGetValueTypeHash)
// class ABP_CoreGameMode_C*          K2Node_DynamicCast_AsBP_Core_Game_Mode_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_75                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_1                  (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_15                                      (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UVaRestRequestJSON*          K2Node_CustomEvent_response                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           CallFunc_GetResponseObject_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UVaRestJsonValue*>    CallFunc_GetArrayField_ReturnValue                               (ReferenceParm)
// class ABP_CoreGameMode_C*          K2Node_DynamicCast_AsBP_Core_Game_Mode_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_76                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVaRestJsonValue*            CallFunc_Array_Get_Item_26                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_20                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_100                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_17                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_AsString_ReturnValue                                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_PlayerCap                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_VerifyIfEligableForDedicatedServerMod_isEligableForModerator(ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEOS_PlayerState_C*          K2Node_DynamicCast_AsEOS_Player_State_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_77                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_CoreGameMode_C*          K2Node_DynamicCast_AsBP_Core_Game_Mode_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_78                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_NewPassword                                   (ZeroConstructor, HasGetValueTypeHash)
// class ABP_CoreGameMode_C*          K2Node_DynamicCast_AsBP_Core_Game_Mode_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_79                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CoreGameMode_C*          K2Node_DynamicCast_AsBP_Core_Game_Mode_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_80                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_16                                      (HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State_17                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_81                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CoreGameMode_C*          K2Node_DynamicCast_AsBP_Core_Game_Mode_8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_82                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_WinningScreen_C*         CallFunc_Create_ReturnValue_23                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GameState_C*             K2Node_DynamicCast_AsBP_Game_State_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_83                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerState*                CallFunc_Array_Get_Item_27                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_21                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State_18                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_84                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_18                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_8                         (None)
// struct FST_SimpleMessage           K2Node_MakeStruct_ST_SimpleMessage_5                             (HasGetValueTypeHash)
// class ABP_Controller_C*            K2Node_DynamicCast_AsBP_Controller_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_85                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_SimpleMessage           K2Node_MakeStruct_ST_SimpleMessage_6                             (HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Platform_ID                                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEOS_GameMode_C*             K2Node_DynamicCast_AsEOS_Game_Mode                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_86                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FST_BanListEntry_new>K2Node_CustomEvent_Banlist                                       (ConstParm, ReferenceParm)
// class FString                      K2Node_CustomEvent_UniqueNetID                                   (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Username_1                                    (None)
// class FString                      K2Node_CustomEvent_PlayerID_6                                    (ZeroConstructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_BanListEntry_new        K2Node_MakeStruct_ST_BanListEntry_new                            (HasGetValueTypeHash)
// class ABP_CoreGameMode_C*          K2Node_DynamicCast_AsBP_Core_Game_Mode_9                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_87                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_PlayerID_5                                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_AddToBanList                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_Username                                      (None)
// class FText                        K2Node_CustomEvent_Reason_1                                      (None)
// enum class E_DisconnectReasons     K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Reason                                        (None)
// enum class E_DisconnectReasons     K2Node_CustomEvent_DisconnectReason                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_KickBanPlayer_UniqueNetID                               (ZeroConstructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_8                             (IsPlainOldData, NoDestructor)
// struct FKey                        Temp_struct_Variable_3                                           (HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_9                             (IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_4                                    (HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_ActionClass_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Information_1                                 (None)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_8          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ServerCommand                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_ActionClass                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Information                                   (None)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_9          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ActionBase_C*            CallFunc_FinishSpawningActor_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ActionBase_C*            CallFunc_FinishSpawningActor_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_5                                    (HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Message_2                                     (None)
// float                              K2Node_CustomEvent_Duration_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Message_1                                     (None)
// float                              K2Node_CustomEvent_Duration                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_101                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_31                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_102                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_Message                                       (None)
// bool                               K2Node_CustomEvent_NotificationSound                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_103                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_Widget                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_ExtraInfo                                     (None)
// class AAlpha_PlayerState_C*        CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue_24                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_32                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_31                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_20                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_19                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_22                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_PlayerID_4                                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_32                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_PlayerID_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_KickVoterID_3                                 (HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item_28                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item_29                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State_19                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_88                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_22                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State_20                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_89                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_20                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Ship_Is_Same_Team_Crew_And_Ship                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_23                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_PlayerID_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_KickVoterID_2                                 (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_21                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_PlayerID_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_KickVoterID_1                                 (HasGetValueTypeHash)

void ABP_Controller_C::ExecuteUbergraph_BP_Controller(int32 EntryPoint, int32 K2Node_CustomEvent_PlayerID, const struct FUniqueNetIdRepl& K2Node_CustomEvent_KickVoterID, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable_3, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_IsClosed_Variable_3, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable_4, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_6, int32 Temp_int_Array_Index_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 Temp_int_Array_Index_Variable_6, int32 Temp_int_Array_Index_Variable_7, bool Temp_bool_Has_Been_Initd_Variable_2, int32 Temp_int_Loop_Counter_Variable_7, int32 CallFunc_Add_IntInt_ReturnValue_7, bool Temp_bool_IsClosed_Variable_4, class UUI_VoteKickPlayer_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable_8, int32 Temp_int_Loop_Counter_Variable_9, int32 CallFunc_Add_IntInt_ReturnValue_8, int32 CallFunc_Add_IntInt_ReturnValue_9, bool Temp_bool_True_if_break_was_hit_Variable_2, int32 Temp_int_Array_Index_Variable_8, bool CallFunc_Not_PreBool_ReturnValue_2, int32 Temp_int_Array_Index_Variable_9, bool CallFunc_IsValid_ReturnValue, class UUI_TopScreenMessageBase_C* K2Node_DynamicCast_AsUI_Top_Screen_Message_Base, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_10, int32 CallFunc_Add_IntInt_ReturnValue_10, bool Temp_bool_True_if_break_was_hit_Variable_3, int32 Temp_int_Array_Index_Variable_10, bool CallFunc_Not_PreBool_ReturnValue_3, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UUI_Broadcast_C* CallFunc_Create_ReturnValue_1, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, class UUI_InventoryError_C* CallFunc_Create_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_11, int32 CallFunc_Add_IntInt_ReturnValue_11, int32 K2Node_CustomEvent_TeamId_4, bool K2Node_CustomEvent_bForce, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_GetCrewFleetID_FleetID, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool Temp_bool_Has_Been_Initd_Variable_3, float K2Node_CustomEvent_AfterDelay, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool Temp_bool_Has_Been_Initd_Variable_4, TArray<class ABP_CrewBanner_C*>& CallFunc_GetAllActorsOfClass_OutActors, enum class E_DisconnectReasons Temp_byte_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, int32 Temp_int_Array_Index_Variable_11, bool CallFunc_IsValid_ReturnValue_11, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess_2, int32 K2Node_CustomEvent_Amount, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool Temp_bool_IsClosed_Variable_5, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess_3, class FName K2Node_CustomEvent_VoiceLineRowName, bool CallFunc_IsValid_ReturnValue_12, enum class E_DisconnectReasons Temp_byte_Variable_1, int32 K2Node_CustomEvent_HullColor, int32 K2Node_CustomEvent_SailColor, int32 K2Node_CustomEvent_Emblem, int32 K2Node_CustomEvent_BowFigure, int32 K2Node_CustomEvent_FlagColor, int32 K2Node_CustomEvent_RopeColor, int32 K2Node_CustomEvent_FlagEmblem_1, int32 K2Node_CustomEvent_LampColor, int32 K2Node_CustomEvent_SailEmblemBottom, int32 K2Node_CustomEvent_SailColorBottom, int32 K2Node_CustomEvent_ShipPaint, int32 K2Node_CustomEvent_ShipPaintColor, int32 K2Node_CustomEvent_BowFigureColor1, int32 K2Node_CustomEvent_BowFigureColor2, int32 K2Node_CustomEvent_BowFigureColor3, float K2Node_CustomEvent_HullPaintDamageAmount, int32 K2Node_CustomEvent_SpecialFlag, int32 K2Node_CustomEvent_FlagSetup, float K2Node_CustomEvent_SailTears, float K2Node_CustomEvent_SailDirt, float K2Node_CustomEvent_SailPaintWear, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, int32 CallFunc_Array_Length_ReturnValue_1, class FText K2Node_CustomEvent_ShipName, int32 K2Node_CustomEvent_teamColor, int32 K2Node_CustomEvent_FlagEmblem, bool K2Node_CustomEvent_bLockedToParty, bool K2Node_CustomEvent_bDeleteEmpty, enum class E_ShipTypes K2Node_CustomEvent_ShipType_1, int32 K2Node_CustomEvent_TeamId_3, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class ABP_DeathCam_C* K2Node_DynamicCast_AsBP_Death_Cam, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_13, class UUI_TeamMenu_C* K2Node_DynamicCast_AsUI_Team_Menu, bool K2Node_DynamicCast_bSuccess_5, bool Temp_bool_Variable, int32 K2Node_CustomEvent_DamageAmount_10, class ABP_VehicleCannon_C* K2Node_CustomEvent_CannonRef_1, int32 K2Node_CustomEvent_DamageAmount_9, class ABP_VehicleCannon_C* K2Node_CustomEvent_CannonRef, class ABP_BowBarrel_C* K2Node_CustomEvent_BowBarrel_1, class ABP_BowBarrel_C* K2Node_CustomEvent_BowBarrel, bool Temp_bool_Has_Been_Initd_Variable_5, bool Temp_bool_IsClosed_Variable_6, int32 Temp_int_Loop_Counter_Variable_12, int32 CallFunc_Add_IntInt_ReturnValue_12, bool Temp_bool_Has_Been_Initd_Variable_6, bool Temp_bool_IsClosed_Variable_7, int32 Temp_int_Array_Index_Variable_12, bool Temp_bool_Has_Been_Initd_Variable_7, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State_1, bool K2Node_DynamicCast_bSuccess_6, class UVaRestSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UUI_PieMenu_C* CallFunc_Create_ReturnValue_3, class UVaRestJsonObject* CallFunc_ConstructVaRestJsonObject_ReturnValue, bool CallFunc_WithEditor_ReturnValue, class ABP_PickupExplosiveBarrel_C* K2Node_CustomEvent_BarrelRel, float K2Node_CustomEvent_DetonationDelay_1, class ABP_PickupExplosiveBarrel_C* K2Node_CustomEvent_BarrelRef_2, float K2Node_CustomEvent_DetonationDelay, class ABP_ExplosiveBarrel_C* K2Node_CustomEvent_BarrelRef_1, class ABP_ExplosiveBarrel_C* K2Node_CustomEvent_BarrelRef, bool Temp_bool_IsClosed_Variable_8, class AActor* K2Node_CustomEvent_ShipActorRef_1, class ABP_VehicleSteeringWheel_C* K2Node_CustomEvent_SteeringWheelRef_1, class ABP_VehicleSteeringWheel_C* K2Node_CustomEvent_SteeringWheelRef, class AActor* K2Node_CustomEvent_ShipActorRef, class ABP_BoatMeshBase_C* K2Node_DynamicCast_AsBP_Boat_Mesh_Base, bool K2Node_DynamicCast_bSuccess_7, bool Temp_bool_Variable_1, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors, class AActor* K2Node_CustomEvent_ActorRef, int32 CallFunc_Array_Length_ReturnValue_2, class AActor* K2Node_CustomEvent_Actor, bool Temp_bool_Variable_2, TArray<class UUI_Spectator_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_Spectator_C* CallFunc_Array_Get_Item, int32 Temp_int_Array_Index_Variable_13, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_CustomEvent_Lock_Crew, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_8, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State_1, bool K2Node_DynamicCast_bSuccess_8, int32 K2Node_CustomEvent_FleetID, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ABP_CoreGameMode_C* K2Node_DynamicCast_AsBP_Core_Game_Mode, bool K2Node_DynamicCast_bSuccess_9, TArray<class ABP_Controller_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, bool Temp_bool_Variable_3, int32 CallFunc_Array_Length_ReturnValue_3, bool Temp_bool_IsClosed_Variable_9, bool CallFunc_WithEditor_ReturnValue_1, bool Temp_bool_Variable_4, TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClass_OutActors_3, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class APlayerStart* CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class FText K2Node_CustomEvent_Information_2, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, bool Temp_bool_Variable_5, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UUI_Scoreboard_C* CallFunc_Create_ReturnValue_4, class ABP_Character_C* CallFunc_FinishSpawningActor_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State_2, bool K2Node_DynamicCast_bSuccess_10, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class ABP_DeathCam_C* K2Node_DynamicCast_AsBP_Death_Cam_1, bool K2Node_DynamicCast_bSuccess_11, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess_12, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_13, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_14, const struct FST_ShipCustomisations& CallFunc_Get_Ship_Customization_Customization, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_3, bool K2Node_DynamicCast_bSuccess_15, const struct FST_ShipCustomisations& CallFunc_Get_Ship_Customization_Customization_1, int32 CallFunc_Get_Team_ID_Team_ID, class AAlpha_PlayerState_C* K2Node_DynamicCast_AsAlpha_Player_State, bool K2Node_DynamicCast_bSuccess_16, int32 CallFunc_Get_Team_ID_Team_ID_1, const class FString& K2Node_CustomEvent_Presence, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, bool CallFunc_IsValid_ReturnValue_14, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_2, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable_13, int32 Temp_int_Array_Index_Variable_14, int32 CallFunc_Add_IntInt_ReturnValue_13, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, bool CallFunc_WithEditor_ReturnValue_2, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_4, bool K2Node_DynamicCast_bSuccess_17, bool CallFunc_WithEditor_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State_3, bool K2Node_DynamicCast_bSuccess_18, bool CallFunc_BooleanOR_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_9, const struct FKey& K2Node_InputKeyEvent_Key, TArray<class UUI_Commands_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UUI_Commands_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_1, const struct FKey& K2Node_InputKeyEvent_Key_2, bool CallFunc_IsServer_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State_4, bool K2Node_DynamicCast_bSuccess_19, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_10, class ASound_Volume_Detecter_C* CallFunc_FinishSpawningActor_ReturnValue_1, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, bool Temp_bool_IsClosed_Variable_10, class ABP_CameraManager_C* K2Node_DynamicCast_AsBP_Camera_Manager, bool K2Node_DynamicCast_bSuccess_20, TArray<class AWaterSettings_C*>& CallFunc_GetAllActorsOfClass_OutActors_4, class AWaterSettings_C* CallFunc_Array_Get_Item_3, class UUI_Hit_C* CallFunc_Create_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_15, int32 Temp_int_Loop_Counter_Variable_14, bool CallFunc_ShouldStayInUIMode__ShouldStay, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_14, class UClass* K2Node_CustomEvent_Widget_2, class UUserWidget* CallFunc_Create_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_16, bool CallFunc_IsValid_ReturnValue_17, bool CallFunc_IsValid_ReturnValue_18, bool CallFunc_IsValid_ReturnValue_19, TArray<class ABP_BoatSpawn_C*>& CallFunc_GetAllActorsOfClass_OutActors_5, class ABP_BoatSpawn_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_8, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class ABP_BoatSpawn_C*>& CallFunc_GetAllActorsOfClass_OutActors_6, class ABP_BoatSpawn_C* CallFunc_Array_Get_Item_5, bool CallFunc_IsValid_ReturnValue_20, int32 CallFunc_Array_Length_ReturnValue_9, bool CallFunc_Less_IntInt_ReturnValue_2, class UUI_YouKilledInfo_C* CallFunc_Create_ReturnValue_7, bool Temp_bool_Has_Been_Initd_Variable_11, bool CallFunc_IsValid_ReturnValue_21, class UClass* K2Node_CustomEvent_Widget_1, class UUserWidget* CallFunc_Create_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_22, bool CallFunc_IsValid_ReturnValue_23, bool Temp_bool_IsClosed_Variable_11, bool CallFunc_IsValid_ReturnValue_24, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_5, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_6, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_5, bool K2Node_DynamicCast_bSuccess_21, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_6, bool K2Node_DynamicCast_bSuccess_22, float CallFunc_Conv_IntToFloat_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State_5, bool K2Node_DynamicCast_bSuccess_23, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State_6, bool K2Node_DynamicCast_bSuccess_24, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State_7, bool K2Node_DynamicCast_bSuccess_25, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class ABP_VehicleSteeringWheel_C* K2Node_DynamicCast_AsBP_Vehicle_Steering_Wheel, bool K2Node_DynamicCast_bSuccess_26, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class ABP_VehicleBase_C* K2Node_CustomEvent_VehicleRef_3, class ABP_PickupBase_C* K2Node_CustomEvent_Pickup, bool CallFunc_IsValid_ReturnValue_25, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, class ABP_TreasureTurnInNPC_C* K2Node_DynamicCast_AsBP_Treasure_Turn_in_NPC, bool K2Node_DynamicCast_bSuccess_27, class ABP_Cork_C* K2Node_DynamicCast_AsBP_Cork, bool K2Node_DynamicCast_bSuccess_28, bool CallFunc_IsValid_ReturnValue_26, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_12, class UCameraComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_2, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, class UCameraComponent* CallFunc_GetComponentByClass_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult_1, bool K2Node_CustomEvent_IsDead_3, class ABP_VehicleBase_C* K2Node_CustomEvent_VehicleRef_2, bool CallFunc_CloseMenus_AnyMenuClosed, class ABP_VehicleSteeringWheel_C* K2Node_DynamicCast_AsBP_Vehicle_Steering_Wheel_1, bool K2Node_DynamicCast_bSuccess_29, class ABP_InteractableBase_C* K2Node_CustomEvent_Interactable_2, class ABP_SteeringWheelKick_C* K2Node_DynamicCast_AsBP_Steering_Wheel_Kick, bool K2Node_DynamicCast_bSuccess_30, bool Temp_bool_IsClosed_Variable_12, bool CallFunc_IsValid_ReturnValue_27, class ABP_InteractableBase_C* K2Node_CustomEvent_InteractableRef_1, bool CallFunc_IsValid_ReturnValue_28, bool CallFunc_IsValid_ReturnValue_29, bool CallFunc_Array_RemoveItem_ReturnValue, class ABP_TreasureChest_C* K2Node_DynamicCast_AsBP_Treasure_Chest, bool K2Node_DynamicCast_bSuccess_31, class ABP_ContainerBase_C* K2Node_DynamicCast_AsBP_Container_Base, bool K2Node_DynamicCast_bSuccess_32, class ABP_VehicleBase_C* K2Node_CustomEvent_VehicleRef_1, bool CallFunc_IsValid_ReturnValue_30, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_31, bool CallFunc_IsValid_ReturnValue_32, class ABP_VehicleSteeringWheel_C* K2Node_DynamicCast_AsBP_Vehicle_Steering_Wheel_2, bool K2Node_DynamicCast_bSuccess_33, bool CallFunc_IsPlayerControlled_ReturnValue, bool CallFunc_CloseMenus_AnyMenuClosed_1, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State_8, bool K2Node_DynamicCast_bSuccess_34, bool CallFunc_IsValid_ReturnValue_33, class ABP_Brig_MastBase_C* K2Node_DynamicCast_AsBP_Brig_Mast_Base, bool K2Node_DynamicCast_bSuccess_35, bool CallFunc_IsValid_ReturnValue_34, class ABP_VehicleBase_C* K2Node_CustomEvent_VehicleRef, class ABP_InteractableBase_C* K2Node_CustomEvent_InteractableRef, bool CallFunc_IsValid_ReturnValue_35, bool CallFunc_IsValid_ReturnValue_36, int32 CallFunc_Array_Add_ReturnValue, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_3, bool CallFunc_IsValid_ReturnValue_37, class ABP_VehicleBase_C* K2Node_DynamicCast_AsBP_Vehicle_Base, bool K2Node_DynamicCast_bSuccess_36, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character_1, bool K2Node_DynamicCast_bSuccess_37, class UCameraComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsPackagedForDistribution_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_13, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, class ABP_VehicleBase_C* K2Node_DynamicCast_AsBP_Vehicle_Base_1, bool K2Node_DynamicCast_bSuccess_38, class APawn* CallFunc_K2_GetPawn_ReturnValue_4, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable_6, bool CallFunc_Greater_IntInt_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_14, TArray<class ABP_SoundTester_C*>& CallFunc_GetAllActorsOfClass_OutActors_7, class ABP_SoundTester_C* CallFunc_Array_Get_Item_6, bool CallFunc_IsValid_ReturnValue_38, bool Temp_bool_Variable_7, class APawn* CallFunc_K2_GetPawn_ReturnValue_5, class ABP_DeathCam_C* K2Node_DynamicCast_AsBP_Death_Cam_2, bool K2Node_DynamicCast_bSuccess_39, class ABP_SpectatorCam_C* K2Node_DynamicCast_AsBP_Spectator_Cam, bool K2Node_DynamicCast_bSuccess_40, TArray<class ABP_WaypointMarker_C*>& CallFunc_GetAllActorsOfClass_OutActors_8, class ABP_WaypointMarker_C* CallFunc_Array_Get_Item_7, int32 CallFunc_Array_Length_ReturnValue_10, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Compare_Crew_Member_ID_Is_Same_Team_Crew_And_Ship, bool Temp_bool_IsClosed_Variable_13, bool CallFunc_IsValid_ReturnValue_39, bool CallFunc_IsValid_ReturnValue_40, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_41, bool CallFunc_IsValid_ReturnValue_42, bool CallFunc_IsValid_ReturnValue_43, const struct FKey& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue_44, const struct FKey& K2Node_InputKeyEvent_Key_3, const struct FKey& K2Node_InputKeyEvent_Key_4, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_4, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_5, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_6, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_7, int32 CallFunc_Get_Team_ID_Team_ID_2, int32 CallFunc_Get_Team_ID_Team_ID_3, int32 CallFunc_Get_Team_ID_Team_ID_4, class AAlpha_GameMode_C* CallFunc_CurrentGameMode_As_Alpha_Game_Mode, class AAlpha_GameMode_C* CallFunc_CurrentGameMode_As_Alpha_Game_Mode_1, class AAlpha_GameMode_C* CallFunc_CurrentGameMode_As_Alpha_Game_Mode_2, class AAlpha_GameMode_C* CallFunc_CurrentGameMode_As_Alpha_Game_Mode_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 K2Node_CustomEvent_Cost, int32 K2Node_CustomEvent_MainWeapon, int32 K2Node_CustomEvent_SideArm, int32 K2Node_CustomEvent_Melee, bool K2Node_CustomEvent_OnDestroyedShip_1, bool K2Node_CustomEvent_IsDead_2, bool K2Node_CustomEvent_IsDead_1, bool Temp_bool_IsClosed_Variable_14, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, const struct FKey& Temp_struct_Variable_1, class ABP_CoreGameMode_C* K2Node_DynamicCast_AsBP_Core_Game_Mode_1, bool K2Node_DynamicCast_bSuccess_41, class AEOS_PlayerState_C* K2Node_DynamicCast_AsEOS_Player_State, bool K2Node_DynamicCast_bSuccess_42, int32 CallFunc_Array_Length_ReturnValue_11, float CallFunc_GetRespawnTime_RespawnTime, float CallFunc_GetRespawnTime_RespawnTime_1, float CallFunc_GetRespawnTime_RespawnTime_2, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State_9, bool K2Node_DynamicCast_bSuccess_43, class FText CallFunc_Conv_StringToText_ReturnValue, bool Temp_bool_IsClosed_Variable_15, bool Temp_bool_Has_Been_Initd_Variable_15, int32 Temp_int_Array_Index_Variable_15, class ABP_Controller_C* CallFunc_Array_Get_Item_8, int32 CallFunc_Get_Team_ID_Team_ID_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State_10, bool K2Node_DynamicCast_bSuccess_44, bool CallFunc_IsValid_ReturnValue_45, enum class EEndPlayReason K2Node_Event_EndPlayReason, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_46, float CallFunc_FClamp_ReturnValue_1, const struct FKey& K2Node_InputKeyEvent_Key_5, class AGameStateBase* CallFunc_GetGameState_ReturnValue_2, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State_2, bool K2Node_DynamicCast_bSuccess_45, class APawn* CallFunc_K2_GetPawn_ReturnValue_6, int32 CallFunc_RemoveGoldPercentage_AmountRemoved, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character_2, bool K2Node_DynamicCast_bSuccess_46, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_47, bool CallFunc_IsValid_ReturnValue_48, bool CallFunc_IsValid_ReturnValue_49, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State_11, bool K2Node_DynamicCast_bSuccess_47, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State_12, bool K2Node_DynamicCast_bSuccess_48, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_4, const struct FKey& K2Node_InputKeyEvent_Key_6, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_2, class ABP_CoreGameMode_C* K2Node_DynamicCast_AsBP_Core_Game_Mode_2, bool K2Node_DynamicCast_bSuccess_49, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class ABP_DeathCam_C* CallFunc_FinishSpawningActor_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_50, bool Temp_bool_Has_Been_Initd_Variable_16, const class FString& K2Node_CustomEvent_KillerPlayerName_1, float K2Node_CustomEvent_RespawnTime, bool K2Node_CustomEvent_Headshot_5, bool K2Node_CustomEvent_Defeated, enum class E_Weapons K2Node_CustomEvent_Weapon_2, const class FString& K2Node_CustomEvent_KillerId_1, int32 K2Node_CustomEvent_Damage_2, int32 K2Node_CustomEvent_KillDistance_1, int32 K2Node_CustomEvent_KillerHP_1, bool K2Node_CustomEvent_PirateCurse, bool Temp_bool_IsClosed_Variable_16, const class FString& K2Node_CustomEvent_KillerPlayerName, bool K2Node_CustomEvent_Headshot_4, class ABP_Character_C* K2Node_CustomEvent_KillerCharacterRef, int32 K2Node_CustomEvent_AttackerTeamID, enum class E_Weapons K2Node_CustomEvent_WeaponInfo, int32 K2Node_CustomEvent_Damage_1, int32 K2Node_CustomEvent_KillDistance, int32 K2Node_CustomEvent_KillerHP, bool K2Node_CustomEvent_OnDestroyedShip, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_51, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class AEOS_PlayerState_C* K2Node_DynamicCast_AsEOS_Player_State_1, bool K2Node_DynamicCast_bSuccess_50, class FText CallFunc_Conv_StringToText_ReturnValue_4, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_5, const struct FST_SimpleMessage& K2Node_MakeStruct_ST_SimpleMessage, class FText CallFunc_Conv_StringToText_ReturnValue_6, const struct FST_SimpleMessage& K2Node_MakeStruct_ST_SimpleMessage_1, class UUI_DeathScreen_C* CallFunc_Create_ReturnValue_9, int32 Temp_int_Loop_Counter_Variable_15, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_15, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_8, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_9, bool CallFunc_IsValid_ReturnValue_52, bool CallFunc_IsValid_ReturnValue_53, int32 Temp_int_Array_Index_Variable_16, bool CallFunc_IsValid_ReturnValue_54, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool Temp_bool_IsClosed_Variable_17, bool Temp_bool_Has_Been_Initd_Variable_17, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_7, bool Temp_bool_IsClosed_Variable_18, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_7, bool K2Node_DynamicCast_bSuccess_51, bool Temp_bool_Has_Been_Initd_Variable_18, bool Temp_bool_IsClosed_Variable_19, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FST_SimpleMessage& K2Node_MakeStruct_ST_SimpleMessage_2, class UUI_Spectator_C* CallFunc_Create_ReturnValue_10, class UUI_DeathBLoodEffect_C* CallFunc_Create_ReturnValue_11, bool Temp_bool_Has_Been_Initd_Variable_19, bool Temp_bool_IsClosed_Variable_20, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const struct FST_SimpleMessage& K2Node_MakeStruct_ST_SimpleMessage_3, bool Temp_bool_Has_Been_Initd_Variable_20, int32 Temp_int_Array_Index_Variable_17, class AActor* CallFunc_Array_Get_Item_9, class ABP_VehicleCannon_C* K2Node_DynamicCast_AsBP_Vehicle_Cannon, bool K2Node_DynamicCast_bSuccess_52, bool Temp_bool_IsClosed_Variable_21, class UUI_ConquestLoadoutSelection_NEW_C* CallFunc_Create_ReturnValue_12, bool Temp_bool_Has_Been_Initd_Variable_21, float K2Node_InputAxisKeyEvent_AxisValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable_16, bool CallFunc_Less_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_16, bool Temp_bool_IsClosed_Variable_22, bool CallFunc_IsInputKeyDown_ReturnValue, bool CallFunc_IsInputKeyDown_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_55, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State_13, bool K2Node_DynamicCast_bSuccess_53, class UUI_WorldMap_C* CallFunc_Create_ReturnValue_13, const struct FKey& K2Node_InputKeyEvent_Key_7, bool CallFunc_GetMousePosition_Success, int32 CallFunc_GetMousePosition_X, int32 CallFunc_GetMousePosition_Y, bool CallFunc_GetMousePosition_Success_1, int32 CallFunc_GetMousePosition_X_1, int32 CallFunc_GetMousePosition_Y_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, bool CallFunc_GetMousePosition_Success_2, int32 CallFunc_GetMousePosition_X_2, int32 CallFunc_GetMousePosition_Y_2, bool CallFunc_GetMousePosition_Success_3, int32 CallFunc_GetMousePosition_X_3, int32 CallFunc_GetMousePosition_Y_3, float K2Node_InputAxisKeyEvent_AxisValue_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, float K2Node_Select_Default, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_3, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_2, float K2Node_InputAxisKeyEvent_AxisValue, float CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue_3, bool CallFunc_Less_FloatFloat_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_3, float K2Node_Select_Default_1, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_4, int32 CallFunc_Round_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_17, bool Temp_bool_Variable_8, bool CallFunc_Not_PreBool_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess_54, bool CallFunc_IsValid_ReturnValue_56, const struct FKey& Temp_struct_Variable_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_7, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character_3, bool K2Node_DynamicCast_bSuccess_55, bool CallFunc_IsInputKeyDown_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_57, bool CallFunc_IsValid_ReturnValue_58, bool CallFunc_BooleanOR_ReturnValue_3, const struct FKey& K2Node_InputActionEvent_Key, const struct FKey& CallFunc_GetKeyBind_Key, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_8, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character_4, bool K2Node_DynamicCast_bSuccess_56, bool Temp_bool_Has_Been_Initd_Variable_22, class ABP_PickupBase_C* K2Node_DynamicCast_AsBP_Pickup_Base, bool K2Node_DynamicCast_bSuccess_57, bool CallFunc_IsValid_ReturnValue_59, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_IsInputKeyDown_ReturnValue_3, bool CallFunc_IsInputKeyDown_ReturnValue_4, class APawn* CallFunc_K2_GetPawn_ReturnValue_9, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character_5, bool K2Node_DynamicCast_bSuccess_58, bool CallFunc_IsValid_ReturnValue_60, class ABP_PickupBase_C* K2Node_DynamicCast_AsBP_Pickup_Base_1, bool K2Node_DynamicCast_bSuccess_59, bool CallFunc_IsValid_ReturnValue_61, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_18, int32 CallFunc_Clamp_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_WithEditor_ReturnValue_4, const struct FKey& CallFunc_GetKeyBind_Key_1, bool CallFunc_IsInputKeyDown_ReturnValue_5, bool Temp_bool_Has_Been_Initd_Variable_23, bool CallFunc_IsInputKeyDown_ReturnValue_6, const struct FKey& CallFunc_GetKeyBind_Key_2, const struct FKey& CallFunc_GetKeyBind_Key_3, const struct FKey& CallFunc_GetKeyBind_Key_4, bool CallFunc_IsInputKeyDown_ReturnValue_7, bool CallFunc_IsInputKeyDown_ReturnValue_8, bool Temp_bool_Has_Been_Initd_Variable_24, class APawn* CallFunc_K2_GetPawn_ReturnValue_10, class ABP_SpectatorCam_C* K2Node_DynamicCast_AsBP_Spectator_Cam_1, bool K2Node_DynamicCast_bSuccess_60, bool CallFunc_IsValid_ReturnValue_62, class ABP_DeathCam_C* K2Node_DynamicCast_AsBP_Death_Cam_3, bool K2Node_DynamicCast_bSuccess_61, bool CallFunc_IsLocalController_ReturnValue, bool Temp_bool_IsClosed_Variable_23, bool Temp_bool_IsClosed_Variable_24, const struct FKey& K2Node_InputKeyEvent_Key_8, TArray<class ABP_ShipWaterCulling_C*>& CallFunc_GetAllActorsOfClass_OutActors_9, class ABP_ShipWaterCulling_C* CallFunc_Array_Get_Item_10, int32 CallFunc_Array_Length_ReturnValue_12, bool CallFunc_Less_IntInt_ReturnValue_7, const struct FKey& K2Node_InputKeyEvent_Key_9, TArray<class ABP_ShipWaterCulling_C*>& CallFunc_GetAllActorsOfClass_OutActors_10, class ABP_ShipWaterCulling_C* CallFunc_Array_Get_Item_11, int32 CallFunc_Array_Length_ReturnValue_13, bool CallFunc_Less_IntInt_ReturnValue_8, TArray<class ABP_ShipWaterCulling_C*>& CallFunc_GetAllActorsOfClass_OutActors_11, bool CallFunc_IsLocalController_ReturnValue_1, class ABP_ShipWaterCulling_C* CallFunc_Array_Get_Item_12, int32 CallFunc_Array_Length_ReturnValue_14, bool CallFunc_Less_IntInt_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_63, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_25, bool CallFunc_IsLocalPlayerController_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_1, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, const class FString& CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_2, bool Temp_bool_IsClosed_Variable_25, TArray<struct FST_BanListEntry_new>& K2Node_CustomEvent_BannedPlayerList, bool CallFunc_IsValid_ReturnValue_64, bool CallFunc_IsValid_ReturnValue_65, bool CallFunc_CheckIfPointIsBelowWaterLevel_IsBelowWaterLevel, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors_12, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors_13, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item_13, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item_14, int32 CallFunc_Array_Length_ReturnValue_15, int32 CallFunc_Array_Length_ReturnValue_16, bool Temp_bool_Has_Been_Initd_Variable_26, bool CallFunc_Less_IntInt_ReturnValue_10, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_66, bool CallFunc_IsLocalController_ReturnValue_2, bool Temp_bool_IsClosed_Variable_26, TArray<class ABP_ShipWaterCulling_C*>& CallFunc_GetAllActorsOfClass_OutActors_14, bool CallFunc_IsLocalController_ReturnValue_3, class ABP_ShipWaterCulling_C* CallFunc_Array_Get_Item_15, int32 CallFunc_Array_Length_ReturnValue_17, class APawn* CallFunc_K2_GetPawn_ReturnValue_11, bool CallFunc_Less_IntInt_ReturnValue_11, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsInputKeyDown_ReturnValue_9, const struct FKey& CallFunc_GetKeyBind_Key_5, bool CallFunc_IsValid_ReturnValue_67, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue_3, int32 CallFunc_FTrunc_ReturnValue_4, int32 CallFunc_FTrunc_ReturnValue_5, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_68, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_2, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_3, const struct FVector& CallFunc_BreakTransform_Location_3, const struct FRotator& CallFunc_BreakTransform_Rotation_3, const struct FVector& CallFunc_BreakTransform_Scale_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_4, bool CallFunc_NearlyEqual_TransformTransform_ReturnValue, const struct FTransform& CallFunc_TInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult_2, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_7, bool Temp_bool_Has_Been_Initd_Variable_27, float CallFunc_Multiply_FloatFloat_ReturnValue_8, float CallFunc_Add_FloatFloat_ReturnValue_1, class UCameraComponent* CallFunc_GetComponentByClass_ReturnValue_3, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, bool CallFunc_NearlyEqual_TransformTransform_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_9, float CallFunc_Multiply_FloatFloat_ReturnValue_10, const struct FTransform& CallFunc_TInterpTo_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_11, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, float CallFunc_Multiply_FloatFloat_ReturnValue_12, float CallFunc_Add_FloatFloat_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_69, bool CallFunc_IsValid_ReturnValue_70, bool CallFunc_IsLocalController_ReturnValue_4, bool CallFunc_IsInputKeyDown_ReturnValue_10, const struct FKey& CallFunc_GetKeyBind_Key_6, bool CallFunc_IsValid_ReturnValue_71, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_72, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_73, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_IsServer_ReturnValue_3, int32 Temp_int_Array_Index_Variable_18, class AGameStateBase* CallFunc_GetGameState_ReturnValue_3, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item_16, bool CallFunc_IsValid_ReturnValue_74, bool CallFunc_IsMyShip_MyShip, TArray<class ABP_WaterPP_C*>& CallFunc_GetAllActorsOfClass_OutActors_15, class ABP_WaterPP_C* CallFunc_Array_Get_Item_17, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, bool Temp_bool_IsClosed_Variable_27, bool CallFunc_IsValid_ReturnValue_75, const struct FVector& CallFunc_CalculateDeltaOnly_Delta, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, class UUI_IngameMenu_C* CallFunc_Create_ReturnValue_14, float CallFunc_Add_FloatFloat_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_13, float CallFunc_Multiply_FloatFloat_ReturnValue_14, float CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue_15, float CallFunc_Subtract_FloatFloat_ReturnValue_3, float CallFunc_FClamp_ReturnValue_2, float CallFunc_FInterpTo_ReturnValue, float K2Node_CustomEvent_Speed, class UMaterialInstanceDynamic* K2Node_CustomEvent_TrailDynMat, bool CallFunc_IsValid_ReturnValue_76, class APawn* CallFunc_K2_GetPawn_ReturnValue_12, TArray<class AWaterPlane_C*>& CallFunc_GetAllActorsOfClass_OutActors_16, class ABP_BoatMeshBase_C* K2Node_CustomEvent_BoatMeshBaseRef_1, class AWaterPlane_C* CallFunc_Array_Get_Item_18, bool CallFunc_Array_RemoveItem_ReturnValue_1, class ABP_BoatMeshBase_C* K2Node_CustomEvent_BoatMeshBaseRef, enum class E_ShipTypes K2Node_CustomEvent_ShipType, class UClass* CallFunc_GetShipWaterCullingClass_CullingClass, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_3, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_4, class UUI_PrepareForBattle_C* CallFunc_Create_ReturnValue_15, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3, class ABP_ShipWaterCulling_C* CallFunc_FinishSpawningActor_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_1, class AAlpha_GameMode_C* CallFunc_CurrentGameMode_As_Alpha_Game_Mode_4, bool CallFunc_ShouldStayInUIMode__ShouldStay_1, bool Temp_bool_Has_Been_Initd_Variable_28, bool CallFunc_IsValid_ReturnValue_77, bool CallFunc_IsValid_ReturnValue_78, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FTransform& CallFunc_MakeTransform_ReturnValue_5, bool Temp_bool_IsClosed_Variable_28, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4, class ABP_SpawnSelectionCam_C* CallFunc_FinishSpawningActor_ReturnValue_4, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_2, const struct FST_SimpleMessage& K2Node_CustomEvent_ChatMessage_1, bool K2Node_CustomEvent_TeamChat_1, bool K2Node_CustomEvent_FormatText_1, bool K2Node_CustomEvent_FullColorMessage, const class FString& K2Node_CustomEvent_PlayerUsernameId_1, const class FString& K2Node_CustomEvent_PlayerKillId_1, int32 K2Node_CustomEvent_TeamId_2, bool K2Node_CustomEvent_CommandMessage, const struct FST_SimpleMessage& K2Node_CustomEvent_ChatMessage, bool K2Node_CustomEvent_TeamChat, bool K2Node_CustomEvent_FormatText, const class FString& K2Node_CustomEvent_PlayerUsernameId, const class FString& K2Node_CustomEvent_PlayerKillId, bool K2Node_CustomEvent_IsCommandMessage, const struct FLinearColor& CallFunc_GetTeamFleetChatColor_NewParam, const struct FSt_ComplexMessage& K2Node_MakeStruct_St_ComplexMessage, const struct FSt_ComplexMessage& K2Node_MakeStruct_St_ComplexMessage_1, class FText CallFunc_GetTeamFleetChatTagUsernameText_Result, const struct FSt_ComplexMessage& K2Node_MakeStruct_St_ComplexMessage_2, class UUI_SpawnSelection_C* CallFunc_Create_ReturnValue_16, int32 CallFunc_Get_Team_ID_Team_ID_6, TArray<enum class E_ScoreType>& K2Node_MakeArray_Array_2, int32 CallFunc_Get_Team_ID_Team_ID_7, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_8, TArray<enum class E_ScoreType>& K2Node_MakeArray_Array_3, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_8, bool K2Node_DynamicCast_bSuccess_62, class ABP_BoatMeshBase_C* K2Node_CustomEvent_ShipRef, int32 K2Node_CustomEvent_Score, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_CeilDecimals_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_79, class ABP_VehicleSteeringWheel_C* K2Node_DynamicCast_AsBP_Vehicle_Steering_Wheel_3, bool K2Node_DynamicCast_bSuccess_63, TArray<enum class E_ScoreType>& K2Node_MakeArray_Array_4, class AController* CallFunc_GetController_ReturnValue, TArray<enum class E_ScoreType>& K2Node_MakeArray_Array_5, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller_1, bool K2Node_DynamicCast_bSuccess_64, int32 Temp_int_Loop_Counter_Variable_17, bool CallFunc_Less_IntInt_ReturnValue_12, int32 CallFunc_Add_IntInt_ReturnValue_19, bool CallFunc_IsValid_ReturnValue_80, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_10, class ABP_Character_C* K2Node_CustomEvent_CharacterRef, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_StopSprint_WasSprinting, class ABP_Brig_MastBase_C* K2Node_CustomEvent_MastRef_1, int32 K2Node_CustomEvent_DamageAmount_8, bool K2Node_CustomEvent_Headshot_3, int32 K2Node_CustomEvent_DamageAmount_7, bool K2Node_CustomEvent_IsLow_1, enum class E_DamageSort K2Node_CustomEvent_DamageType_3, bool CallFunc_IsValid_ReturnValue_81, int32 Temp_int_Loop_Counter_Variable_18, class ABP_BoatMeshBase_C* K2Node_CustomEvent_BoatRef_3, int32 K2Node_CustomEvent_DamageAmount_6, bool CallFunc_Less_IntInt_ReturnValue_13, TArray<int32>& CallFunc_CreateRandomDamage_DamageAmounts, TArray<struct FVector>& CallFunc_CreateRandomDamage_DamageLocations, int32 CallFunc_Array_Get_Item_19, int32 CallFunc_Array_Length_ReturnValue_18, bool CallFunc_Less_IntInt_ReturnValue_14, int32 CallFunc_Add_IntInt_ReturnValue_20, class ABP_BoatMeshBase_C* K2Node_CustomEvent_BoatRef_2, int32 K2Node_CustomEvent_DamageAmount_5, int32 K2Node_CustomEvent_DamageAmount_4, enum class E_DamageType K2Node_CustomEvent_DamageType_2, const struct FVector& K2Node_CustomEvent_RelativeLocation_1, const struct FVector& K2Node_CustomEvent_ImpactNormal_1, class ABP_BoatMeshBase_C* K2Node_CustomEvent_BoatRef_1, int32 K2Node_CustomEvent_DamageAmount_3, enum class E_DamageType K2Node_CustomEvent_DamageType_1, const struct FVector& K2Node_CustomEvent_RelativeLocation, const struct FVector& K2Node_CustomEvent_ImpactNormal, class ABP_BoatMeshBase_C* K2Node_CustomEvent_BoatRef, enum class E_Weapons K2Node_CustomEvent_AmmoType, int32 CallFunc_GetScoreAmountCannonBall_Score, int32 K2Node_CustomEvent_Damage, class ABP_Brig_MastBase_C* K2Node_CustomEvent_MastRef, enum class E_Weapons K2Node_CustomEvent_Ammo_Type, int32 CallFunc_GetScoreAmountCannonBall_Score_1, bool CallFunc_IsValid_ReturnValue_82, int32 K2Node_CustomEvent_DamageAmount_2, class ABP_Character_C* K2Node_CustomEvent_PlayerToDamageRef, bool K2Node_CustomEvent_Headshot_2, bool K2Node_CustomEvent_DamageOwnTeamAlso_1, bool K2Node_CustomEvent_MeleeDamage_1, bool K2Node_CustomEvent_CanDamageSelf_1, enum class E_Weapons K2Node_CustomEvent_Weapon_1, int32 K2Node_CustomEvent_ShotID_1, int32 K2Node_CustomEvent_DamageAmount_1, class ABP_Character_C* K2Node_CustomEvent_PlayerRef, bool K2Node_CustomEvent_Headshot_1, bool K2Node_CustomEvent_CanDamageSelf, bool K2Node_CustomEvent_MeleeDamage, bool K2Node_CustomEvent_DamageOwnTeamAlso, enum class E_Weapons K2Node_CustomEvent_Weapon, int32 K2Node_CustomEvent_ShotID, bool CallFunc_IsValid_ReturnValue_83, int32 Temp_int_Array_Index_Variable_19, class ABP_Controller_C* CallFunc_Array_Get_Item_20, float K2Node_CustomEvent_GoldMultiplier, float K2Node_CustomEvent_TimeAliveModifier, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State_14, bool K2Node_DynamicCast_bSuccess_65, class UUI_Chat_C* CallFunc_Create_ReturnValue_17, bool K2Node_CustomEvent_Headshot, int32 K2Node_CustomEvent_DamageAmount, bool K2Node_CustomEvent_IsLow, enum class E_DamageSort K2Node_CustomEvent_DamageType, const class FString& K2Node_CustomEvent_Playername, int32 K2Node_CustomEvent_KillerId, enum class E_Weapons K2Node_CustomEvent_WeaponType, bool K2Node_CustomEvent_CursedPlayer_, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, const struct FVector& K2Node_CustomEvent_AttackerLocation, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_6, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_2, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State_15, bool K2Node_DynamicCast_bSuccess_66, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_84, class UUI_Version_C* CallFunc_Create_ReturnValue_18, bool CallFunc_WithEditor_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_85, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_86, bool CallFunc_IsValid_ReturnValue_87, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_3, const struct FVector& CallFunc_GetCameraLocation_ReturnValue_2, const struct FVector& K2Node_CustomEvent_Location_4, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, TArray<class UUI_Username_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_2, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_3, class UUI_Username_C* CallFunc_Array_Get_Item_21, const struct FSt_ComplexMessage& K2Node_MakeStruct_St_ComplexMessage_3, bool CallFunc_IsValid_ReturnValue_88, const struct FVector& K2Node_CustomEvent_Location_3, const struct FTransform& K2Node_CustomEvent_SpawnTransform, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5, class ABP_SpectatorCam_C* CallFunc_FinishSpawningActor_ReturnValue_5, const struct FTransform& CallFunc_MakeTransform_ReturnValue_7, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_6, bool CallFunc_ShouldStayInUIMode__ShouldStay_2, class ABP_MapCamera_C* CallFunc_FinishSpawningActor_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_89, bool CallFunc_IsValid_ReturnValue_90, class UUI_FPSCounter_C* CallFunc_Create_ReturnValue_19, bool CallFunc_Not_PreBool_ReturnValue_7, const struct FKey& K2Node_InputKeyEvent_Key_10, bool Temp_bool_Has_Been_Initd_Variable_29, class UUI_Commands_C* CallFunc_Create_ReturnValue_20, int32 Temp_int_Array_Index_Variable_20, bool Temp_bool_IsClosed_Variable_29, class ABP_CrewBanner_C* CallFunc_Array_Get_Item_22, const struct FKey& K2Node_InputKeyEvent_Key_11, bool CallFunc_IsValid_ReturnValue_91, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Get_Team_ID_Team_ID_8, int32 CallFunc_Get_Team_ID_Team_ID_9, class AGameStateBase* CallFunc_GetGameState_ReturnValue_4, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State_3, bool K2Node_DynamicCast_bSuccess_67, bool CallFunc_Array_Get_Item_23, bool CallFunc_Array_Get_Item_24, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, class AActor* K2Node_CustomEvent_PingableObject, enum class E_CommandPingTypes K2Node_CustomEvent_Command, const struct FVector& K2Node_CustomEvent_Direction_Optional_, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class ABP_WaypointMarker_C* CallFunc_GetCurrentWaypointMarker_CurrentMarker, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_IsValid_ReturnValue_92, bool CallFunc_IsValid_ReturnValue_93, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State_16, bool K2Node_DynamicCast_bSuccess_68, class FText CallFunc_Conv_StringToText_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_94, int32 K2Node_CustomEvent_TeamId_1, int32 K2Node_CustomEvent_PlayerColor_1, bool K2Node_CustomEvent_IsDead, int32 K2Node_CustomEvent_TeamId, int32 K2Node_CustomEvent_PlayerColor, const struct FVector& K2Node_CustomEvent_Location_2, bool K2Node_CustomEvent_AddMarker, class AEOS_PlayerState_C* K2Node_DynamicCast_AsEOS_Player_State_2, bool K2Node_DynamicCast_bSuccess_69, bool Temp_bool_Has_Been_Initd_Variable_30, int32 Temp_int_Loop_Counter_Variable_19, bool CallFunc_Less_IntInt_ReturnValue_15, int32 CallFunc_Add_IntInt_ReturnValue_21, const struct FVector& K2Node_CustomEvent_Location_1, bool K2Node_CustomEvent_IsHoveringOverMarker, class ABP_PickupBase_C* K2Node_CustomEvent_PickupActor_1, const struct FKey& K2Node_InputKeyEvent_Key_12, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_Key_IsGamepadKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_95, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, class UMaterialInstance* CallFunc_GenerateMarkerInfoForPickup_Background, class UTexture2D* CallFunc_GenerateMarkerInfoForPickup_Icon, const struct FVector& CallFunc_GenerateMarkerInfoForPickup_Location, class FText CallFunc_GenerateMarkerInfoForPickup_Message, bool CallFunc_BooleanOR_ReturnValue_7, class FText K2Node_Select_Default_2, bool CallFunc_BooleanAND_ReturnValue_7, const struct FST_SimpleMessage& K2Node_MakeStruct_ST_SimpleMessage_4, TArray<class ABP_WaypointMarker_C*>& CallFunc_GetAllActorsOfClass_OutActors_17, class ABP_WaypointMarker_C* CallFunc_Array_Get_Item_25, int32 CallFunc_Array_Length_ReturnValue_19, bool CallFunc_Less_IntInt_ReturnValue_16, bool CallFunc_Compare_Crew_Member_ID_Is_Same_Team_Crew_And_Ship_1, class UUI_ConquestPregame_C* CallFunc_Create_ReturnValue_21, const struct FVector& K2Node_CustomEvent_Location, int32 K2Node_CustomEvent_TeamPlayerColor, class UMaterialInstance* K2Node_CustomEvent_Background, class UTexture2D* K2Node_CustomEvent_Icon, class ABP_PickupBase_C* K2Node_CustomEvent_PickupActor, class ABP_WaypointMarker_C* K2Node_CustomEvent_PreviousMarker__Negate_all_actors_of_class_call_, bool CallFunc_IsValid_ReturnValue_96, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_3, class UUI_InventoryError_C* CallFunc_Create_ReturnValue_22, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_7, class ABP_WaypointMarker_C* CallFunc_FinishSpawningActor_ReturnValue_7, class ABP_InteractableBase_C* K2Node_CustomEvent_Interactable_1, class ABP_InteractableBase_C* K2Node_CustomEvent_Interactable, bool CallFunc_IsValid_ReturnValue_97, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_12, class APawn* CallFunc_K2_GetPawn_ReturnValue_13, const struct FST_PieMenuSelection& K2Node_MakeStruct_ST_PieMenuSelection, class ABP_VehicleBase_C* K2Node_DynamicCast_AsBP_Vehicle_Base_2, bool K2Node_DynamicCast_bSuccess_70, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character_6, bool K2Node_DynamicCast_bSuccess_71, bool CallFunc_IsValid_ReturnValue_98, const struct FST_PieMenuSelection& K2Node_MakeStruct_ST_PieMenuSelection_1, const struct FST_PieMenuSelection& K2Node_MakeStruct_ST_PieMenuSelection_2, const struct FST_PieMenuSelection& K2Node_MakeStruct_ST_PieMenuSelection_3, const struct FST_PieMenuSelection& K2Node_MakeStruct_ST_PieMenuSelection_4, const struct FST_PieMenuSelection& K2Node_MakeStruct_ST_PieMenuSelection_5, bool CallFunc_IsValid_ReturnValue_99, const struct FST_PieMenuSelection& K2Node_MakeStruct_ST_PieMenuSelection_6, const struct FST_PieMenuSelection& K2Node_MakeStruct_ST_PieMenuSelection_7, TArray<struct FST_PieMenuSelection>& K2Node_MakeArray_Array_6, const struct FKey& K2Node_InputKeyEvent_Key_13, class AAlpha_PlayerState_C* CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State, bool Temp_bool_IsClosed_Variable_30, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_9, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_10, class UEOS_GameInstance_C* K2Node_DynamicCast_AsEOS_Game_Instance, bool K2Node_DynamicCast_bSuccess_72, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_9, bool K2Node_DynamicCast_bSuccess_73, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_11, bool CallFunc_HasAuthority_ReturnValue_3, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance_10, bool K2Node_DynamicCast_bSuccess_74, bool CallFunc_WithEditor_ReturnValue_6, const struct FKey& K2Node_InputKeyEvent_Key_14, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_3, const class FString& K2Node_CustomEvent_NewServerName, class ABP_CoreGameMode_C* K2Node_DynamicCast_AsBP_Core_Game_Mode_3, bool K2Node_DynamicCast_bSuccess_75, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_1, const struct FKey& K2Node_InputKeyEvent_Key_15, const class FString& CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UVaRestRequestJSON* K2Node_CustomEvent_response, class UVaRestJsonObject* CallFunc_GetResponseObject_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_4, TArray<class UVaRestJsonValue*>& CallFunc_GetArrayField_ReturnValue, class ABP_CoreGameMode_C* K2Node_DynamicCast_AsBP_Core_Game_Mode_4, bool K2Node_DynamicCast_bSuccess_76, class UVaRestJsonValue* CallFunc_Array_Get_Item_26, int32 CallFunc_Array_Length_ReturnValue_20, bool CallFunc_IsValid_ReturnValue_100, bool CallFunc_Less_IntInt_ReturnValue_17, bool CallFunc_BooleanAND_ReturnValue_8, const class FString& CallFunc_AsString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, int32 K2Node_CustomEvent_PlayerCap, bool CallFunc_VerifyIfEligableForDedicatedServerMod_isEligableForModerator, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_5, class AEOS_PlayerState_C* K2Node_DynamicCast_AsEOS_Player_State_3, bool K2Node_DynamicCast_bSuccess_77, class ABP_CoreGameMode_C* K2Node_DynamicCast_AsBP_Core_Game_Mode_5, bool K2Node_DynamicCast_bSuccess_78, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_6, const class FString& K2Node_CustomEvent_NewPassword, class ABP_CoreGameMode_C* K2Node_DynamicCast_AsBP_Core_Game_Mode_6, bool K2Node_DynamicCast_bSuccess_79, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_7, class ABP_CoreGameMode_C* K2Node_DynamicCast_AsBP_Core_Game_Mode_7, bool K2Node_DynamicCast_bSuccess_80, const struct FKey& K2Node_InputKeyEvent_Key_16, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State_17, bool K2Node_DynamicCast_bSuccess_81, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_8, class ABP_CoreGameMode_C* K2Node_DynamicCast_AsBP_Core_Game_Mode_8, bool K2Node_DynamicCast_bSuccess_82, class AGameStateBase* CallFunc_GetGameState_ReturnValue_5, class UUI_WinningScreen_C* CallFunc_Create_ReturnValue_23, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State_4, bool K2Node_DynamicCast_bSuccess_83, class APlayerState* CallFunc_Array_Get_Item_27, int32 CallFunc_Array_Length_ReturnValue_21, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State_18, bool K2Node_DynamicCast_bSuccess_84, bool CallFunc_Less_IntInt_ReturnValue_18, bool CallFunc_BooleanAND_ReturnValue_9, class FText CallFunc_Conv_StringToText_ReturnValue_8, const struct FST_SimpleMessage& K2Node_MakeStruct_ST_SimpleMessage_5, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller_2, bool K2Node_DynamicCast_bSuccess_85, const struct FST_SimpleMessage& K2Node_MakeStruct_ST_SimpleMessage_6, const class FString& K2Node_CustomEvent_Platform_ID, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_9, class AEOS_GameMode_C* K2Node_DynamicCast_AsEOS_Game_Mode, bool K2Node_DynamicCast_bSuccess_86, TArray<struct FST_BanListEntry_new>& K2Node_CustomEvent_Banlist, const class FString& K2Node_CustomEvent_UniqueNetID, class FText K2Node_CustomEvent_Username_1, const class FString& K2Node_CustomEvent_PlayerID_6, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_10, const struct FST_BanListEntry_new& K2Node_MakeStruct_ST_BanListEntry_new, class ABP_CoreGameMode_C* K2Node_DynamicCast_AsBP_Core_Game_Mode_9, bool K2Node_DynamicCast_bSuccess_87, int32 CallFunc_Array_Add_ReturnValue_2, const class FString& K2Node_CustomEvent_PlayerID_5, bool K2Node_CustomEvent_AddToBanList, class FText K2Node_CustomEvent_Username, class FText K2Node_CustomEvent_Reason_1, enum class E_DisconnectReasons K2Node_Select_Default_3, class FText K2Node_CustomEvent_Reason, enum class E_DisconnectReasons K2Node_CustomEvent_DisconnectReason, const class FString& CallFunc_KickBanPlayer_UniqueNetID, const struct FTransform& CallFunc_MakeTransform_ReturnValue_8, const struct FKey& Temp_struct_Variable_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_9, const struct FKey& K2Node_InputActionEvent_Key_4, class UClass* K2Node_CustomEvent_ActionClass_1, class FText K2Node_CustomEvent_Information_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_8, bool K2Node_CustomEvent_ServerCommand, class UClass* K2Node_CustomEvent_ActionClass, class FText K2Node_CustomEvent_Information, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_9, class ABP_ActionBase_C* CallFunc_FinishSpawningActor_ReturnValue_8, class ABP_ActionBase_C* CallFunc_FinishSpawningActor_ReturnValue_9, const struct FKey& K2Node_InputActionEvent_Key_5, class FText K2Node_CustomEvent_Message_2, float K2Node_CustomEvent_Duration_1, class FText K2Node_CustomEvent_Message_1, float K2Node_CustomEvent_Duration, bool CallFunc_IsValid_ReturnValue_101, bool Temp_bool_Has_Been_Initd_Variable_31, bool CallFunc_IsValid_ReturnValue_102, class FText K2Node_CustomEvent_Message, bool K2Node_CustomEvent_NotificationSound, bool CallFunc_IsValid_ReturnValue_103, class UClass* K2Node_CustomEvent_Widget, class FText K2Node_CustomEvent_ExtraInfo, class AAlpha_PlayerState_C* CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State_1, class UUserWidget* CallFunc_Create_ReturnValue_24, bool Temp_bool_Has_Been_Initd_Variable_32, bool Temp_bool_IsClosed_Variable_31, int32 Temp_int_Loop_Counter_Variable_20, bool CallFunc_Less_IntInt_ReturnValue_19, int32 CallFunc_Add_IntInt_ReturnValue_22, const class FString& K2Node_CustomEvent_PlayerID_4, bool CallFunc_HasAuthority_ReturnValue_4, bool Temp_bool_IsClosed_Variable_32, class AGameStateBase* CallFunc_GetGameState_ReturnValue_6, int32 K2Node_CustomEvent_PlayerID_3, const struct FUniqueNetIdRepl& K2Node_CustomEvent_KickVoterID_3, class AGameStateBase* CallFunc_GetGameState_ReturnValue_7, class APlayerState* CallFunc_Array_Get_Item_28, class APlayerState* CallFunc_Array_Get_Item_29, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State_19, bool K2Node_DynamicCast_bSuccess_88, int32 CallFunc_Array_Length_ReturnValue_22, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State_20, bool K2Node_DynamicCast_bSuccess_89, bool CallFunc_Less_IntInt_ReturnValue_20, bool CallFunc_BooleanAND_ReturnValue_10, bool CallFunc_Compare_Ship_Is_Same_Team_Crew_And_Ship, int32 CallFunc_Array_Length_ReturnValue_23, int32 K2Node_CustomEvent_PlayerID_2, const struct FUniqueNetIdRepl& K2Node_CustomEvent_KickVoterID_2, bool CallFunc_Less_IntInt_ReturnValue_21, bool CallFunc_BooleanAND_ReturnValue_11, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, int32 K2Node_CustomEvent_PlayerID_1, const struct FUniqueNetIdRepl& K2Node_CustomEvent_KickVoterID_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "ExecuteUbergraph_BP_Controller");

	Params::ABP_Controller_C_ExecuteUbergraph_BP_Controller_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_PlayerID = K2Node_CustomEvent_PlayerID;
	Parms.K2Node_CustomEvent_KickVoterID = K2Node_CustomEvent_KickVoterID;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.Temp_bool_IsClosed_Variable_4 = Temp_bool_IsClosed_Variable_4;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_8 = Temp_int_Loop_Counter_Variable_8;
	Parms.Temp_int_Loop_Counter_Variable_9 = Temp_int_Loop_Counter_Variable_9;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.CallFunc_Add_IntInt_ReturnValue_9 = CallFunc_Add_IntInt_ReturnValue_9;
	Parms.Temp_bool_True_if_break_was_hit_Variable_2 = Temp_bool_True_if_break_was_hit_Variable_2;
	Parms.Temp_int_Array_Index_Variable_8 = Temp_int_Array_Index_Variable_8;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_9 = Temp_int_Array_Index_Variable_9;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Top_Screen_Message_Base = K2Node_DynamicCast_AsUI_Top_Screen_Message_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable_10 = Temp_int_Loop_Counter_Variable_10;
	Parms.CallFunc_Add_IntInt_ReturnValue_10 = CallFunc_Add_IntInt_ReturnValue_10;
	Parms.Temp_bool_True_if_break_was_hit_Variable_3 = Temp_bool_True_if_break_was_hit_Variable_3;
	Parms.Temp_int_Array_Index_Variable_10 = Temp_int_Array_Index_Variable_10;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_11 = Temp_int_Loop_Counter_Variable_11;
	Parms.CallFunc_Add_IntInt_ReturnValue_11 = CallFunc_Add_IntInt_ReturnValue_11;
	Parms.K2Node_CustomEvent_TeamId_4 = K2Node_CustomEvent_TeamId_4;
	Parms.K2Node_CustomEvent_bForce = K2Node_CustomEvent_bForce;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetCrewFleetID_FleetID = CallFunc_GetCrewFleetID_FleetID;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.K2Node_CustomEvent_AfterDelay = K2Node_CustomEvent_AfterDelay;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.Temp_bool_Has_Been_Initd_Variable_4 = Temp_bool_Has_Been_Initd_Variable_4;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.Temp_int_Array_Index_Variable_11 = Temp_int_Array_Index_Variable_11;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_5 = Temp_bool_IsClosed_Variable_5;
	Parms.K2Node_DynamicCast_AsBP_Game_State = K2Node_DynamicCast_AsBP_Game_State;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CustomEvent_VoiceLineRowName = K2Node_CustomEvent_VoiceLineRowName;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CustomEvent_HullColor = K2Node_CustomEvent_HullColor;
	Parms.K2Node_CustomEvent_SailColor = K2Node_CustomEvent_SailColor;
	Parms.K2Node_CustomEvent_Emblem = K2Node_CustomEvent_Emblem;
	Parms.K2Node_CustomEvent_BowFigure = K2Node_CustomEvent_BowFigure;
	Parms.K2Node_CustomEvent_FlagColor = K2Node_CustomEvent_FlagColor;
	Parms.K2Node_CustomEvent_RopeColor = K2Node_CustomEvent_RopeColor;
	Parms.K2Node_CustomEvent_FlagEmblem_1 = K2Node_CustomEvent_FlagEmblem_1;
	Parms.K2Node_CustomEvent_LampColor = K2Node_CustomEvent_LampColor;
	Parms.K2Node_CustomEvent_SailEmblemBottom = K2Node_CustomEvent_SailEmblemBottom;
	Parms.K2Node_CustomEvent_SailColorBottom = K2Node_CustomEvent_SailColorBottom;
	Parms.K2Node_CustomEvent_ShipPaint = K2Node_CustomEvent_ShipPaint;
	Parms.K2Node_CustomEvent_ShipPaintColor = K2Node_CustomEvent_ShipPaintColor;
	Parms.K2Node_CustomEvent_BowFigureColor1 = K2Node_CustomEvent_BowFigureColor1;
	Parms.K2Node_CustomEvent_BowFigureColor2 = K2Node_CustomEvent_BowFigureColor2;
	Parms.K2Node_CustomEvent_BowFigureColor3 = K2Node_CustomEvent_BowFigureColor3;
	Parms.K2Node_CustomEvent_HullPaintDamageAmount = K2Node_CustomEvent_HullPaintDamageAmount;
	Parms.K2Node_CustomEvent_SpecialFlag = K2Node_CustomEvent_SpecialFlag;
	Parms.K2Node_CustomEvent_FlagSetup = K2Node_CustomEvent_FlagSetup;
	Parms.K2Node_CustomEvent_SailTears = K2Node_CustomEvent_SailTears;
	Parms.K2Node_CustomEvent_SailDirt = K2Node_CustomEvent_SailDirt;
	Parms.K2Node_CustomEvent_SailPaintWear = K2Node_CustomEvent_SailPaintWear;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_CustomEvent_ShipName = K2Node_CustomEvent_ShipName;
	Parms.K2Node_CustomEvent_teamColor = K2Node_CustomEvent_teamColor;
	Parms.K2Node_CustomEvent_FlagEmblem = K2Node_CustomEvent_FlagEmblem;
	Parms.K2Node_CustomEvent_bLockedToParty = K2Node_CustomEvent_bLockedToParty;
	Parms.K2Node_CustomEvent_bDeleteEmpty = K2Node_CustomEvent_bDeleteEmpty;
	Parms.K2Node_CustomEvent_ShipType_1 = K2Node_CustomEvent_ShipType_1;
	Parms.K2Node_CustomEvent_TeamId_3 = K2Node_CustomEvent_TeamId_3;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Death_Cam = K2Node_DynamicCast_AsBP_Death_Cam;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.K2Node_DynamicCast_AsUI_Team_Menu = K2Node_DynamicCast_AsUI_Team_Menu;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_DamageAmount_10 = K2Node_CustomEvent_DamageAmount_10;
	Parms.K2Node_CustomEvent_CannonRef_1 = K2Node_CustomEvent_CannonRef_1;
	Parms.K2Node_CustomEvent_DamageAmount_9 = K2Node_CustomEvent_DamageAmount_9;
	Parms.K2Node_CustomEvent_CannonRef = K2Node_CustomEvent_CannonRef;
	Parms.K2Node_CustomEvent_BowBarrel_1 = K2Node_CustomEvent_BowBarrel_1;
	Parms.K2Node_CustomEvent_BowBarrel = K2Node_CustomEvent_BowBarrel;
	Parms.Temp_bool_Has_Been_Initd_Variable_5 = Temp_bool_Has_Been_Initd_Variable_5;
	Parms.Temp_bool_IsClosed_Variable_6 = Temp_bool_IsClosed_Variable_6;
	Parms.Temp_int_Loop_Counter_Variable_12 = Temp_int_Loop_Counter_Variable_12;
	Parms.CallFunc_Add_IntInt_ReturnValue_12 = CallFunc_Add_IntInt_ReturnValue_12;
	Parms.Temp_bool_Has_Been_Initd_Variable_6 = Temp_bool_Has_Been_Initd_Variable_6;
	Parms.Temp_bool_IsClosed_Variable_7 = Temp_bool_IsClosed_Variable_7;
	Parms.Temp_int_Array_Index_Variable_12 = Temp_int_Array_Index_Variable_12;
	Parms.Temp_bool_Has_Been_Initd_Variable_7 = Temp_bool_Has_Been_Initd_Variable_7;
	Parms.K2Node_DynamicCast_AsBP_Player_State_1 = K2Node_DynamicCast_AsBP_Player_State_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_ConstructVaRestJsonObject_ReturnValue = CallFunc_ConstructVaRestJsonObject_ReturnValue;
	Parms.CallFunc_WithEditor_ReturnValue = CallFunc_WithEditor_ReturnValue;
	Parms.K2Node_CustomEvent_BarrelRel = K2Node_CustomEvent_BarrelRel;
	Parms.K2Node_CustomEvent_DetonationDelay_1 = K2Node_CustomEvent_DetonationDelay_1;
	Parms.K2Node_CustomEvent_BarrelRef_2 = K2Node_CustomEvent_BarrelRef_2;
	Parms.K2Node_CustomEvent_DetonationDelay = K2Node_CustomEvent_DetonationDelay;
	Parms.K2Node_CustomEvent_BarrelRef_1 = K2Node_CustomEvent_BarrelRef_1;
	Parms.K2Node_CustomEvent_BarrelRef = K2Node_CustomEvent_BarrelRef;
	Parms.Temp_bool_IsClosed_Variable_8 = Temp_bool_IsClosed_Variable_8;
	Parms.K2Node_CustomEvent_ShipActorRef_1 = K2Node_CustomEvent_ShipActorRef_1;
	Parms.K2Node_CustomEvent_SteeringWheelRef_1 = K2Node_CustomEvent_SteeringWheelRef_1;
	Parms.K2Node_CustomEvent_SteeringWheelRef = K2Node_CustomEvent_SteeringWheelRef;
	Parms.K2Node_CustomEvent_ShipActorRef = K2Node_CustomEvent_ShipActorRef;
	Parms.K2Node_DynamicCast_AsBP_Boat_Mesh_Base = K2Node_DynamicCast_AsBP_Boat_Mesh_Base;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetAllChildActors_ChildActors = CallFunc_GetAllChildActors_ChildActors;
	Parms.K2Node_CustomEvent_ActorRef = K2Node_CustomEvent_ActorRef;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Array_Index_Variable_13 = Temp_int_Array_Index_Variable_13;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CustomEvent_Lock_Crew = K2Node_CustomEvent_Lock_Crew;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_8 = Temp_bool_Has_Been_Initd_Variable_8;
	Parms.K2Node_DynamicCast_AsBP_Game_State_1 = K2Node_DynamicCast_AsBP_Game_State_1;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_CustomEvent_FleetID = K2Node_CustomEvent_FleetID;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Core_Game_Mode = K2Node_DynamicCast_AsBP_Core_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_2 = CallFunc_GetAllActorsOfClass_OutActors_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.Temp_bool_IsClosed_Variable_9 = Temp_bool_IsClosed_Variable_9;
	Parms.CallFunc_WithEditor_ReturnValue_1 = CallFunc_WithEditor_ReturnValue_1;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_3 = CallFunc_GetAllActorsOfClass_OutActors_3;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_CustomEvent_Information_2 = K2Node_CustomEvent_Information_2;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_4 = CallFunc_Create_ReturnValue_4;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_State_2 = K2Node_DynamicCast_AsBP_Player_State_2;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Death_Cam_1 = K2Node_DynamicCast_AsBP_Death_Cam_1;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_1 = K2Node_DynamicCast_AsBP_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_2 = K2Node_DynamicCast_AsBP_Game_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_Get_Ship_Customization_Customization = CallFunc_Get_Ship_Customization_Customization;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_3 = K2Node_DynamicCast_AsBP_Game_Instance_3;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_Get_Ship_Customization_Customization_1 = CallFunc_Get_Ship_Customization_Customization_1;
	Parms.CallFunc_Get_Team_ID_Team_ID = CallFunc_Get_Team_ID_Team_ID;
	Parms.K2Node_DynamicCast_AsAlpha_Player_State = K2Node_DynamicCast_AsAlpha_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_Get_Team_ID_Team_ID_1 = CallFunc_Get_Team_ID_Team_ID_1;
	Parms.K2Node_CustomEvent_Presence = K2Node_CustomEvent_Presence;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1 = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_2 = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable_13 = Temp_int_Loop_Counter_Variable_13;
	Parms.Temp_int_Array_Index_Variable_14 = Temp_int_Array_Index_Variable_14;
	Parms.CallFunc_Add_IntInt_ReturnValue_13 = CallFunc_Add_IntInt_ReturnValue_13;
	Parms.CallFunc_GetGameInstance_ReturnValue_4 = CallFunc_GetGameInstance_ReturnValue_4;
	Parms.CallFunc_WithEditor_ReturnValue_2 = CallFunc_WithEditor_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_4 = K2Node_DynamicCast_AsBP_Game_Instance_4;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.CallFunc_WithEditor_ReturnValue_3 = CallFunc_WithEditor_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_State_3 = K2Node_DynamicCast_AsBP_Player_State_3;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_9 = Temp_bool_Has_Been_Initd_Variable_9;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key_1 = K2Node_InputKeyEvent_Key_1;
	Parms.K2Node_InputKeyEvent_Key_2 = K2Node_InputKeyEvent_Key_2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_State_4 = K2Node_DynamicCast_AsBP_Player_State_4;
	Parms.K2Node_DynamicCast_bSuccess_19 = K2Node_DynamicCast_bSuccess_19;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue_1 = CallFunc_Conv_VectorToTransform_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_10 = Temp_bool_Has_Been_Initd_Variable_10;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_1 = CallFunc_GetPlayerCameraManager_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable_10 = Temp_bool_IsClosed_Variable_10;
	Parms.K2Node_DynamicCast_AsBP_Camera_Manager = K2Node_DynamicCast_AsBP_Camera_Manager;
	Parms.K2Node_DynamicCast_bSuccess_20 = K2Node_DynamicCast_bSuccess_20;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_4 = CallFunc_GetAllActorsOfClass_OutActors_4;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Create_ReturnValue_5 = CallFunc_Create_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.Temp_int_Loop_Counter_Variable_14 = Temp_int_Loop_Counter_Variable_14;
	Parms.CallFunc_ShouldStayInUIMode__ShouldStay = CallFunc_ShouldStayInUIMode__ShouldStay;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_14 = CallFunc_Add_IntInt_ReturnValue_14;
	Parms.K2Node_CustomEvent_Widget_2 = K2Node_CustomEvent_Widget_2;
	Parms.CallFunc_Create_ReturnValue_6 = CallFunc_Create_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_5 = CallFunc_GetAllActorsOfClass_OutActors_5;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_6 = CallFunc_GetAllActorsOfClass_OutActors_6;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.CallFunc_Array_Length_ReturnValue_9 = CallFunc_Array_Length_ReturnValue_9;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_7 = CallFunc_Create_ReturnValue_7;
	Parms.Temp_bool_Has_Been_Initd_Variable_11 = Temp_bool_Has_Been_Initd_Variable_11;
	Parms.CallFunc_IsValid_ReturnValue_21 = CallFunc_IsValid_ReturnValue_21;
	Parms.K2Node_CustomEvent_Widget_1 = K2Node_CustomEvent_Widget_1;
	Parms.CallFunc_Create_ReturnValue_8 = CallFunc_Create_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_22 = CallFunc_IsValid_ReturnValue_22;
	Parms.CallFunc_IsValid_ReturnValue_23 = CallFunc_IsValid_ReturnValue_23;
	Parms.Temp_bool_IsClosed_Variable_11 = Temp_bool_IsClosed_Variable_11;
	Parms.CallFunc_IsValid_ReturnValue_24 = CallFunc_IsValid_ReturnValue_24;
	Parms.CallFunc_GetGameInstance_ReturnValue_5 = CallFunc_GetGameInstance_ReturnValue_5;
	Parms.CallFunc_GetGameInstance_ReturnValue_6 = CallFunc_GetGameInstance_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_5 = K2Node_DynamicCast_AsBP_Game_Instance_5;
	Parms.K2Node_DynamicCast_bSuccess_21 = K2Node_DynamicCast_bSuccess_21;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_6 = K2Node_DynamicCast_AsBP_Game_Instance_6;
	Parms.K2Node_DynamicCast_bSuccess_22 = K2Node_DynamicCast_bSuccess_22;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_State_5 = K2Node_DynamicCast_AsBP_Player_State_5;
	Parms.K2Node_DynamicCast_bSuccess_23 = K2Node_DynamicCast_bSuccess_23;
	Parms.K2Node_DynamicCast_AsBP_Player_State_6 = K2Node_DynamicCast_AsBP_Player_State_6;
	Parms.K2Node_DynamicCast_bSuccess_24 = K2Node_DynamicCast_bSuccess_24;
	Parms.K2Node_DynamicCast_AsBP_Player_State_7 = K2Node_DynamicCast_AsBP_Player_State_7;
	Parms.K2Node_DynamicCast_bSuccess_25 = K2Node_DynamicCast_bSuccess_25;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Vehicle_Steering_Wheel = K2Node_DynamicCast_AsBP_Vehicle_Steering_Wheel;
	Parms.K2Node_DynamicCast_bSuccess_26 = K2Node_DynamicCast_bSuccess_26;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.K2Node_CustomEvent_VehicleRef_3 = K2Node_CustomEvent_VehicleRef_3;
	Parms.K2Node_CustomEvent_Pickup = K2Node_CustomEvent_Pickup;
	Parms.CallFunc_IsValid_ReturnValue_25 = CallFunc_IsValid_ReturnValue_25;
	Parms.CallFunc_GetCurrentActiveMontage_ReturnValue = CallFunc_GetCurrentActiveMontage_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Treasure_Turn_in_NPC = K2Node_DynamicCast_AsBP_Treasure_Turn_in_NPC;
	Parms.K2Node_DynamicCast_bSuccess_27 = K2Node_DynamicCast_bSuccess_27;
	Parms.K2Node_DynamicCast_AsBP_Cork = K2Node_DynamicCast_AsBP_Cork;
	Parms.K2Node_DynamicCast_bSuccess_28 = K2Node_DynamicCast_bSuccess_28;
	Parms.CallFunc_IsValid_ReturnValue_26 = CallFunc_IsValid_ReturnValue_26;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_12 = Temp_bool_Has_Been_Initd_Variable_12;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_1 = CallFunc_K2_GetComponentRotation_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_2 = CallFunc_K2_GetComponentRotation_ReturnValue_2;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_MakeTransform_ReturnValue_2 = CallFunc_MakeTransform_ReturnValue_2;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult_1 = CallFunc_K2_SetWorldTransform_SweepHitResult_1;
	Parms.K2Node_CustomEvent_IsDead_3 = K2Node_CustomEvent_IsDead_3;
	Parms.K2Node_CustomEvent_VehicleRef_2 = K2Node_CustomEvent_VehicleRef_2;
	Parms.CallFunc_CloseMenus_AnyMenuClosed = CallFunc_CloseMenus_AnyMenuClosed;
	Parms.K2Node_DynamicCast_AsBP_Vehicle_Steering_Wheel_1 = K2Node_DynamicCast_AsBP_Vehicle_Steering_Wheel_1;
	Parms.K2Node_DynamicCast_bSuccess_29 = K2Node_DynamicCast_bSuccess_29;
	Parms.K2Node_CustomEvent_Interactable_2 = K2Node_CustomEvent_Interactable_2;
	Parms.K2Node_DynamicCast_AsBP_Steering_Wheel_Kick = K2Node_DynamicCast_AsBP_Steering_Wheel_Kick;
	Parms.K2Node_DynamicCast_bSuccess_30 = K2Node_DynamicCast_bSuccess_30;
	Parms.Temp_bool_IsClosed_Variable_12 = Temp_bool_IsClosed_Variable_12;
	Parms.CallFunc_IsValid_ReturnValue_27 = CallFunc_IsValid_ReturnValue_27;
	Parms.K2Node_CustomEvent_InteractableRef_1 = K2Node_CustomEvent_InteractableRef_1;
	Parms.CallFunc_IsValid_ReturnValue_28 = CallFunc_IsValid_ReturnValue_28;
	Parms.CallFunc_IsValid_ReturnValue_29 = CallFunc_IsValid_ReturnValue_29;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Treasure_Chest = K2Node_DynamicCast_AsBP_Treasure_Chest;
	Parms.K2Node_DynamicCast_bSuccess_31 = K2Node_DynamicCast_bSuccess_31;
	Parms.K2Node_DynamicCast_AsBP_Container_Base = K2Node_DynamicCast_AsBP_Container_Base;
	Parms.K2Node_DynamicCast_bSuccess_32 = K2Node_DynamicCast_bSuccess_32;
	Parms.K2Node_CustomEvent_VehicleRef_1 = K2Node_CustomEvent_VehicleRef_1;
	Parms.CallFunc_IsValid_ReturnValue_30 = CallFunc_IsValid_ReturnValue_30;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_31 = CallFunc_IsValid_ReturnValue_31;
	Parms.CallFunc_IsValid_ReturnValue_32 = CallFunc_IsValid_ReturnValue_32;
	Parms.K2Node_DynamicCast_AsBP_Vehicle_Steering_Wheel_2 = K2Node_DynamicCast_AsBP_Vehicle_Steering_Wheel_2;
	Parms.K2Node_DynamicCast_bSuccess_33 = K2Node_DynamicCast_bSuccess_33;
	Parms.CallFunc_IsPlayerControlled_ReturnValue = CallFunc_IsPlayerControlled_ReturnValue;
	Parms.CallFunc_CloseMenus_AnyMenuClosed_1 = CallFunc_CloseMenus_AnyMenuClosed_1;
	Parms.K2Node_DynamicCast_AsBP_Player_State_8 = K2Node_DynamicCast_AsBP_Player_State_8;
	Parms.K2Node_DynamicCast_bSuccess_34 = K2Node_DynamicCast_bSuccess_34;
	Parms.CallFunc_IsValid_ReturnValue_33 = CallFunc_IsValid_ReturnValue_33;
	Parms.K2Node_DynamicCast_AsBP_Brig_Mast_Base = K2Node_DynamicCast_AsBP_Brig_Mast_Base;
	Parms.K2Node_DynamicCast_bSuccess_35 = K2Node_DynamicCast_bSuccess_35;
	Parms.CallFunc_IsValid_ReturnValue_34 = CallFunc_IsValid_ReturnValue_34;
	Parms.K2Node_CustomEvent_VehicleRef = K2Node_CustomEvent_VehicleRef;
	Parms.K2Node_CustomEvent_InteractableRef = K2Node_CustomEvent_InteractableRef;
	Parms.CallFunc_IsValid_ReturnValue_35 = CallFunc_IsValid_ReturnValue_35;
	Parms.CallFunc_IsValid_ReturnValue_36 = CallFunc_IsValid_ReturnValue_36;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_3 = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_3;
	Parms.CallFunc_IsValid_ReturnValue_37 = CallFunc_IsValid_ReturnValue_37;
	Parms.K2Node_DynamicCast_AsBP_Vehicle_Base = K2Node_DynamicCast_AsBP_Vehicle_Base;
	Parms.K2Node_DynamicCast_bSuccess_36 = K2Node_DynamicCast_bSuccess_36;
	Parms.K2Node_DynamicCast_AsBP_Character_1 = K2Node_DynamicCast_AsBP_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_37 = K2Node_DynamicCast_bSuccess_37;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_IsPackagedForDistribution_ReturnValue = CallFunc_IsPackagedForDistribution_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_13 = Temp_bool_Has_Been_Initd_Variable_13;
	Parms.CallFunc_K2_GetPawn_ReturnValue_3 = CallFunc_K2_GetPawn_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_Vehicle_Base_1 = K2Node_DynamicCast_AsBP_Vehicle_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_38 = K2Node_DynamicCast_bSuccess_38;
	Parms.CallFunc_K2_GetPawn_ReturnValue_4 = CallFunc_K2_GetPawn_ReturnValue_4;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_14 = Temp_bool_Has_Been_Initd_Variable_14;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_7 = CallFunc_GetAllActorsOfClass_OutActors_7;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_IsValid_ReturnValue_38 = CallFunc_IsValid_ReturnValue_38;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.CallFunc_K2_GetPawn_ReturnValue_5 = CallFunc_K2_GetPawn_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBP_Death_Cam_2 = K2Node_DynamicCast_AsBP_Death_Cam_2;
	Parms.K2Node_DynamicCast_bSuccess_39 = K2Node_DynamicCast_bSuccess_39;
	Parms.K2Node_DynamicCast_AsBP_Spectator_Cam = K2Node_DynamicCast_AsBP_Spectator_Cam;
	Parms.K2Node_DynamicCast_bSuccess_40 = K2Node_DynamicCast_bSuccess_40;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_8 = CallFunc_GetAllActorsOfClass_OutActors_8;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Array_Length_ReturnValue_10 = CallFunc_Array_Length_ReturnValue_10;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Compare_Crew_Member_ID_Is_Same_Team_Crew_And_Ship = CallFunc_Compare_Crew_Member_ID_Is_Same_Team_Crew_And_Ship;
	Parms.Temp_bool_IsClosed_Variable_13 = Temp_bool_IsClosed_Variable_13;
	Parms.CallFunc_IsValid_ReturnValue_39 = CallFunc_IsValid_ReturnValue_39;
	Parms.CallFunc_IsValid_ReturnValue_40 = CallFunc_IsValid_ReturnValue_40;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_41 = CallFunc_IsValid_ReturnValue_41;
	Parms.CallFunc_IsValid_ReturnValue_42 = CallFunc_IsValid_ReturnValue_42;
	Parms.CallFunc_IsValid_ReturnValue_43 = CallFunc_IsValid_ReturnValue_43;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue_44 = CallFunc_IsValid_ReturnValue_44;
	Parms.K2Node_InputKeyEvent_Key_3 = K2Node_InputKeyEvent_Key_3;
	Parms.K2Node_InputKeyEvent_Key_4 = K2Node_InputKeyEvent_Key_4;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_4 = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_4;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_5 = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_5;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_6 = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_6;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_7 = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_7;
	Parms.CallFunc_Get_Team_ID_Team_ID_2 = CallFunc_Get_Team_ID_Team_ID_2;
	Parms.CallFunc_Get_Team_ID_Team_ID_3 = CallFunc_Get_Team_ID_Team_ID_3;
	Parms.CallFunc_Get_Team_ID_Team_ID_4 = CallFunc_Get_Team_ID_Team_ID_4;
	Parms.CallFunc_CurrentGameMode_As_Alpha_Game_Mode = CallFunc_CurrentGameMode_As_Alpha_Game_Mode;
	Parms.CallFunc_CurrentGameMode_As_Alpha_Game_Mode_1 = CallFunc_CurrentGameMode_As_Alpha_Game_Mode_1;
	Parms.CallFunc_CurrentGameMode_As_Alpha_Game_Mode_2 = CallFunc_CurrentGameMode_As_Alpha_Game_Mode_2;
	Parms.CallFunc_CurrentGameMode_As_Alpha_Game_Mode_3 = CallFunc_CurrentGameMode_As_Alpha_Game_Mode_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.K2Node_CustomEvent_Cost = K2Node_CustomEvent_Cost;
	Parms.K2Node_CustomEvent_MainWeapon = K2Node_CustomEvent_MainWeapon;
	Parms.K2Node_CustomEvent_SideArm = K2Node_CustomEvent_SideArm;
	Parms.K2Node_CustomEvent_Melee = K2Node_CustomEvent_Melee;
	Parms.K2Node_CustomEvent_OnDestroyedShip_1 = K2Node_CustomEvent_OnDestroyedShip_1;
	Parms.K2Node_CustomEvent_IsDead_2 = K2Node_CustomEvent_IsDead_2;
	Parms.K2Node_CustomEvent_IsDead_1 = K2Node_CustomEvent_IsDead_1;
	Parms.Temp_bool_IsClosed_Variable_14 = Temp_bool_IsClosed_Variable_14;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_DynamicCast_AsBP_Core_Game_Mode_1 = K2Node_DynamicCast_AsBP_Core_Game_Mode_1;
	Parms.K2Node_DynamicCast_bSuccess_41 = K2Node_DynamicCast_bSuccess_41;
	Parms.K2Node_DynamicCast_AsEOS_Player_State = K2Node_DynamicCast_AsEOS_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_42 = K2Node_DynamicCast_bSuccess_42;
	Parms.CallFunc_Array_Length_ReturnValue_11 = CallFunc_Array_Length_ReturnValue_11;
	Parms.CallFunc_GetRespawnTime_RespawnTime = CallFunc_GetRespawnTime_RespawnTime;
	Parms.CallFunc_GetRespawnTime_RespawnTime_1 = CallFunc_GetRespawnTime_RespawnTime_1;
	Parms.CallFunc_GetRespawnTime_RespawnTime_2 = CallFunc_GetRespawnTime_RespawnTime_2;
	Parms.K2Node_DynamicCast_AsBP_Player_State_9 = K2Node_DynamicCast_AsBP_Player_State_9;
	Parms.K2Node_DynamicCast_bSuccess_43 = K2Node_DynamicCast_bSuccess_43;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_15 = Temp_bool_IsClosed_Variable_15;
	Parms.Temp_bool_Has_Been_Initd_Variable_15 = Temp_bool_Has_Been_Initd_Variable_15;
	Parms.Temp_int_Array_Index_Variable_15 = Temp_int_Array_Index_Variable_15;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Get_Team_ID_Team_ID_5 = CallFunc_Get_Team_ID_Team_ID_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Player_State_10 = K2Node_DynamicCast_AsBP_Player_State_10;
	Parms.K2Node_DynamicCast_bSuccess_44 = K2Node_DynamicCast_bSuccess_44;
	Parms.CallFunc_IsValid_ReturnValue_45 = CallFunc_IsValid_ReturnValue_45;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_46 = CallFunc_IsValid_ReturnValue_46;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.K2Node_InputKeyEvent_Key_5 = K2Node_InputKeyEvent_Key_5;
	Parms.CallFunc_GetGameState_ReturnValue_2 = CallFunc_GetGameState_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Game_State_2 = K2Node_DynamicCast_AsBP_Game_State_2;
	Parms.K2Node_DynamicCast_bSuccess_45 = K2Node_DynamicCast_bSuccess_45;
	Parms.CallFunc_K2_GetPawn_ReturnValue_6 = CallFunc_K2_GetPawn_ReturnValue_6;
	Parms.CallFunc_RemoveGoldPercentage_AmountRemoved = CallFunc_RemoveGoldPercentage_AmountRemoved;
	Parms.K2Node_DynamicCast_AsBP_Character_2 = K2Node_DynamicCast_AsBP_Character_2;
	Parms.K2Node_DynamicCast_bSuccess_46 = K2Node_DynamicCast_bSuccess_46;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_47 = CallFunc_IsValid_ReturnValue_47;
	Parms.CallFunc_IsValid_ReturnValue_48 = CallFunc_IsValid_ReturnValue_48;
	Parms.CallFunc_IsValid_ReturnValue_49 = CallFunc_IsValid_ReturnValue_49;
	Parms.K2Node_DynamicCast_AsBP_Player_State_11 = K2Node_DynamicCast_AsBP_Player_State_11;
	Parms.K2Node_DynamicCast_bSuccess_47 = K2Node_DynamicCast_bSuccess_47;
	Parms.K2Node_DynamicCast_AsBP_Player_State_12 = K2Node_DynamicCast_AsBP_Player_State_12;
	Parms.K2Node_DynamicCast_bSuccess_48 = K2Node_DynamicCast_bSuccess_48;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.K2Node_InputKeyEvent_Key_6 = K2Node_InputKeyEvent_Key_6;
	Parms.CallFunc_GetGameMode_ReturnValue_2 = CallFunc_GetGameMode_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Core_Game_Mode_2 = K2Node_DynamicCast_AsBP_Core_Game_Mode_2;
	Parms.K2Node_DynamicCast_bSuccess_49 = K2Node_DynamicCast_bSuccess_49;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue_2 = CallFunc_Conv_VectorToTransform_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_2 = CallFunc_FinishSpawningActor_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_50 = CallFunc_IsValid_ReturnValue_50;
	Parms.Temp_bool_Has_Been_Initd_Variable_16 = Temp_bool_Has_Been_Initd_Variable_16;
	Parms.K2Node_CustomEvent_KillerPlayerName_1 = K2Node_CustomEvent_KillerPlayerName_1;
	Parms.K2Node_CustomEvent_RespawnTime = K2Node_CustomEvent_RespawnTime;
	Parms.K2Node_CustomEvent_Headshot_5 = K2Node_CustomEvent_Headshot_5;
	Parms.K2Node_CustomEvent_Defeated = K2Node_CustomEvent_Defeated;
	Parms.K2Node_CustomEvent_Weapon_2 = K2Node_CustomEvent_Weapon_2;
	Parms.K2Node_CustomEvent_KillerId_1 = K2Node_CustomEvent_KillerId_1;
	Parms.K2Node_CustomEvent_Damage_2 = K2Node_CustomEvent_Damage_2;
	Parms.K2Node_CustomEvent_KillDistance_1 = K2Node_CustomEvent_KillDistance_1;
	Parms.K2Node_CustomEvent_KillerHP_1 = K2Node_CustomEvent_KillerHP_1;
	Parms.K2Node_CustomEvent_PirateCurse = K2Node_CustomEvent_PirateCurse;
	Parms.Temp_bool_IsClosed_Variable_16 = Temp_bool_IsClosed_Variable_16;
	Parms.K2Node_CustomEvent_KillerPlayerName = K2Node_CustomEvent_KillerPlayerName;
	Parms.K2Node_CustomEvent_Headshot_4 = K2Node_CustomEvent_Headshot_4;
	Parms.K2Node_CustomEvent_KillerCharacterRef = K2Node_CustomEvent_KillerCharacterRef;
	Parms.K2Node_CustomEvent_AttackerTeamID = K2Node_CustomEvent_AttackerTeamID;
	Parms.K2Node_CustomEvent_WeaponInfo = K2Node_CustomEvent_WeaponInfo;
	Parms.K2Node_CustomEvent_Damage_1 = K2Node_CustomEvent_Damage_1;
	Parms.K2Node_CustomEvent_KillDistance = K2Node_CustomEvent_KillDistance;
	Parms.K2Node_CustomEvent_KillerHP = K2Node_CustomEvent_KillerHP;
	Parms.K2Node_CustomEvent_OnDestroyedShip = K2Node_CustomEvent_OnDestroyedShip;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_4 = CallFunc_K2_GetActorLocation_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_51 = CallFunc_IsValid_ReturnValue_51;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsEOS_Player_State_1 = K2Node_DynamicCast_AsEOS_Player_State_1;
	Parms.K2Node_DynamicCast_bSuccess_50 = K2Node_DynamicCast_bSuccess_50;
	Parms.CallFunc_Conv_StringToText_ReturnValue_4 = CallFunc_Conv_StringToText_ReturnValue_4;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_5 = CallFunc_Conv_StringToText_ReturnValue_5;
	Parms.K2Node_MakeStruct_ST_SimpleMessage = K2Node_MakeStruct_ST_SimpleMessage;
	Parms.CallFunc_Conv_StringToText_ReturnValue_6 = CallFunc_Conv_StringToText_ReturnValue_6;
	Parms.K2Node_MakeStruct_ST_SimpleMessage_1 = K2Node_MakeStruct_ST_SimpleMessage_1;
	Parms.CallFunc_Create_ReturnValue_9 = CallFunc_Create_ReturnValue_9;
	Parms.Temp_int_Loop_Counter_Variable_15 = Temp_int_Loop_Counter_Variable_15;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_15 = CallFunc_Add_IntInt_ReturnValue_15;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_8 = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_8;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_9 = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_9;
	Parms.CallFunc_IsValid_ReturnValue_52 = CallFunc_IsValid_ReturnValue_52;
	Parms.CallFunc_IsValid_ReturnValue_53 = CallFunc_IsValid_ReturnValue_53;
	Parms.Temp_int_Array_Index_Variable_16 = Temp_int_Array_Index_Variable_16;
	Parms.CallFunc_IsValid_ReturnValue_54 = CallFunc_IsValid_ReturnValue_54;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_17 = Temp_bool_IsClosed_Variable_17;
	Parms.Temp_bool_Has_Been_Initd_Variable_17 = Temp_bool_Has_Been_Initd_Variable_17;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_7 = CallFunc_GetGameInstance_ReturnValue_7;
	Parms.Temp_bool_IsClosed_Variable_18 = Temp_bool_IsClosed_Variable_18;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_7 = K2Node_DynamicCast_AsBP_Game_Instance_7;
	Parms.K2Node_DynamicCast_bSuccess_51 = K2Node_DynamicCast_bSuccess_51;
	Parms.Temp_bool_Has_Been_Initd_Variable_18 = Temp_bool_Has_Been_Initd_Variable_18;
	Parms.Temp_bool_IsClosed_Variable_19 = Temp_bool_IsClosed_Variable_19;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_ST_SimpleMessage_2 = K2Node_MakeStruct_ST_SimpleMessage_2;
	Parms.CallFunc_Create_ReturnValue_10 = CallFunc_Create_ReturnValue_10;
	Parms.CallFunc_Create_ReturnValue_11 = CallFunc_Create_ReturnValue_11;
	Parms.Temp_bool_Has_Been_Initd_Variable_19 = Temp_bool_Has_Been_Initd_Variable_19;
	Parms.Temp_bool_IsClosed_Variable_20 = Temp_bool_IsClosed_Variable_20;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_MakeStruct_ST_SimpleMessage_3 = K2Node_MakeStruct_ST_SimpleMessage_3;
	Parms.Temp_bool_Has_Been_Initd_Variable_20 = Temp_bool_Has_Been_Initd_Variable_20;
	Parms.Temp_int_Array_Index_Variable_17 = Temp_int_Array_Index_Variable_17;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.K2Node_DynamicCast_AsBP_Vehicle_Cannon = K2Node_DynamicCast_AsBP_Vehicle_Cannon;
	Parms.K2Node_DynamicCast_bSuccess_52 = K2Node_DynamicCast_bSuccess_52;
	Parms.Temp_bool_IsClosed_Variable_21 = Temp_bool_IsClosed_Variable_21;
	Parms.CallFunc_Create_ReturnValue_12 = CallFunc_Create_ReturnValue_12;
	Parms.Temp_bool_Has_Been_Initd_Variable_21 = Temp_bool_Has_Been_Initd_Variable_21;
	Parms.K2Node_InputAxisKeyEvent_AxisValue_2 = K2Node_InputAxisKeyEvent_AxisValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_16 = Temp_int_Loop_Counter_Variable_16;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_16 = CallFunc_Add_IntInt_ReturnValue_16;
	Parms.Temp_bool_IsClosed_Variable_22 = Temp_bool_IsClosed_Variable_22;
	Parms.CallFunc_IsInputKeyDown_ReturnValue = CallFunc_IsInputKeyDown_ReturnValue;
	Parms.CallFunc_IsInputKeyDown_ReturnValue_1 = CallFunc_IsInputKeyDown_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_55 = CallFunc_IsValid_ReturnValue_55;
	Parms.K2Node_DynamicCast_AsBP_Player_State_13 = K2Node_DynamicCast_AsBP_Player_State_13;
	Parms.K2Node_DynamicCast_bSuccess_53 = K2Node_DynamicCast_bSuccess_53;
	Parms.CallFunc_Create_ReturnValue_13 = CallFunc_Create_ReturnValue_13;
	Parms.K2Node_InputKeyEvent_Key_7 = K2Node_InputKeyEvent_Key_7;
	Parms.CallFunc_GetMousePosition_Success = CallFunc_GetMousePosition_Success;
	Parms.CallFunc_GetMousePosition_X = CallFunc_GetMousePosition_X;
	Parms.CallFunc_GetMousePosition_Y = CallFunc_GetMousePosition_Y;
	Parms.CallFunc_GetMousePosition_Success_1 = CallFunc_GetMousePosition_Success_1;
	Parms.CallFunc_GetMousePosition_X_1 = CallFunc_GetMousePosition_X_1;
	Parms.CallFunc_GetMousePosition_Y_1 = CallFunc_GetMousePosition_Y_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetMousePosition_Success_2 = CallFunc_GetMousePosition_Success_2;
	Parms.CallFunc_GetMousePosition_X_2 = CallFunc_GetMousePosition_X_2;
	Parms.CallFunc_GetMousePosition_Y_2 = CallFunc_GetMousePosition_Y_2;
	Parms.CallFunc_GetMousePosition_Success_3 = CallFunc_GetMousePosition_Success_3;
	Parms.CallFunc_GetMousePosition_X_3 = CallFunc_GetMousePosition_X_3;
	Parms.CallFunc_GetMousePosition_Y_3 = CallFunc_GetMousePosition_Y_3;
	Parms.K2Node_InputAxisKeyEvent_AxisValue_1 = K2Node_InputAxisKeyEvent_AxisValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.K2Node_InputAxisKeyEvent_AxisValue = K2Node_InputAxisKeyEvent_AxisValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_2 = CallFunc_Less_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_3 = CallFunc_Less_FloatFloat_ReturnValue_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_17 = CallFunc_Add_IntInt_ReturnValue_17;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Controller = K2Node_DynamicCast_AsBP_Controller;
	Parms.K2Node_DynamicCast_bSuccess_54 = K2Node_DynamicCast_bSuccess_54;
	Parms.CallFunc_IsValid_ReturnValue_56 = CallFunc_IsValid_ReturnValue_56;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue_7 = CallFunc_K2_GetPawn_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsBP_Character_3 = K2Node_DynamicCast_AsBP_Character_3;
	Parms.K2Node_DynamicCast_bSuccess_55 = K2Node_DynamicCast_bSuccess_55;
	Parms.CallFunc_IsInputKeyDown_ReturnValue_2 = CallFunc_IsInputKeyDown_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_57 = CallFunc_IsValid_ReturnValue_57;
	Parms.CallFunc_IsValid_ReturnValue_58 = CallFunc_IsValid_ReturnValue_58;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.CallFunc_GetKeyBind_Key = CallFunc_GetKeyBind_Key;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_8 = CallFunc_K2_GetPawn_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsBP_Character_4 = K2Node_DynamicCast_AsBP_Character_4;
	Parms.K2Node_DynamicCast_bSuccess_56 = K2Node_DynamicCast_bSuccess_56;
	Parms.Temp_bool_Has_Been_Initd_Variable_22 = Temp_bool_Has_Been_Initd_Variable_22;
	Parms.K2Node_DynamicCast_AsBP_Pickup_Base = K2Node_DynamicCast_AsBP_Pickup_Base;
	Parms.K2Node_DynamicCast_bSuccess_57 = K2Node_DynamicCast_bSuccess_57;
	Parms.CallFunc_IsValid_ReturnValue_59 = CallFunc_IsValid_ReturnValue_59;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_IsInputKeyDown_ReturnValue_3 = CallFunc_IsInputKeyDown_ReturnValue_3;
	Parms.CallFunc_IsInputKeyDown_ReturnValue_4 = CallFunc_IsInputKeyDown_ReturnValue_4;
	Parms.CallFunc_K2_GetPawn_ReturnValue_9 = CallFunc_K2_GetPawn_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsBP_Character_5 = K2Node_DynamicCast_AsBP_Character_5;
	Parms.K2Node_DynamicCast_bSuccess_58 = K2Node_DynamicCast_bSuccess_58;
	Parms.CallFunc_IsValid_ReturnValue_60 = CallFunc_IsValid_ReturnValue_60;
	Parms.K2Node_DynamicCast_AsBP_Pickup_Base_1 = K2Node_DynamicCast_AsBP_Pickup_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_59 = K2Node_DynamicCast_bSuccess_59;
	Parms.CallFunc_IsValid_ReturnValue_61 = CallFunc_IsValid_ReturnValue_61;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_18 = CallFunc_Add_IntInt_ReturnValue_18;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_WithEditor_ReturnValue_4 = CallFunc_WithEditor_ReturnValue_4;
	Parms.CallFunc_GetKeyBind_Key_1 = CallFunc_GetKeyBind_Key_1;
	Parms.CallFunc_IsInputKeyDown_ReturnValue_5 = CallFunc_IsInputKeyDown_ReturnValue_5;
	Parms.Temp_bool_Has_Been_Initd_Variable_23 = Temp_bool_Has_Been_Initd_Variable_23;
	Parms.CallFunc_IsInputKeyDown_ReturnValue_6 = CallFunc_IsInputKeyDown_ReturnValue_6;
	Parms.CallFunc_GetKeyBind_Key_2 = CallFunc_GetKeyBind_Key_2;
	Parms.CallFunc_GetKeyBind_Key_3 = CallFunc_GetKeyBind_Key_3;
	Parms.CallFunc_GetKeyBind_Key_4 = CallFunc_GetKeyBind_Key_4;
	Parms.CallFunc_IsInputKeyDown_ReturnValue_7 = CallFunc_IsInputKeyDown_ReturnValue_7;
	Parms.CallFunc_IsInputKeyDown_ReturnValue_8 = CallFunc_IsInputKeyDown_ReturnValue_8;
	Parms.Temp_bool_Has_Been_Initd_Variable_24 = Temp_bool_Has_Been_Initd_Variable_24;
	Parms.CallFunc_K2_GetPawn_ReturnValue_10 = CallFunc_K2_GetPawn_ReturnValue_10;
	Parms.K2Node_DynamicCast_AsBP_Spectator_Cam_1 = K2Node_DynamicCast_AsBP_Spectator_Cam_1;
	Parms.K2Node_DynamicCast_bSuccess_60 = K2Node_DynamicCast_bSuccess_60;
	Parms.CallFunc_IsValid_ReturnValue_62 = CallFunc_IsValid_ReturnValue_62;
	Parms.K2Node_DynamicCast_AsBP_Death_Cam_3 = K2Node_DynamicCast_AsBP_Death_Cam_3;
	Parms.K2Node_DynamicCast_bSuccess_61 = K2Node_DynamicCast_bSuccess_61;
	Parms.CallFunc_IsLocalController_ReturnValue = CallFunc_IsLocalController_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_23 = Temp_bool_IsClosed_Variable_23;
	Parms.Temp_bool_IsClosed_Variable_24 = Temp_bool_IsClosed_Variable_24;
	Parms.K2Node_InputKeyEvent_Key_8 = K2Node_InputKeyEvent_Key_8;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_9 = CallFunc_GetAllActorsOfClass_OutActors_9;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_Array_Length_ReturnValue_12 = CallFunc_Array_Length_ReturnValue_12;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.K2Node_InputKeyEvent_Key_9 = K2Node_InputKeyEvent_Key_9;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_10 = CallFunc_GetAllActorsOfClass_OutActors_10;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.CallFunc_Array_Length_ReturnValue_13 = CallFunc_Array_Length_ReturnValue_13;
	Parms.CallFunc_Less_IntInt_ReturnValue_8 = CallFunc_Less_IntInt_ReturnValue_8;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_11 = CallFunc_GetAllActorsOfClass_OutActors_11;
	Parms.CallFunc_IsLocalController_ReturnValue_1 = CallFunc_IsLocalController_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_12 = CallFunc_Array_Get_Item_12;
	Parms.CallFunc_Array_Length_ReturnValue_14 = CallFunc_Array_Length_ReturnValue_14;
	Parms.CallFunc_Less_IntInt_ReturnValue_9 = CallFunc_Less_IntInt_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_63 = CallFunc_IsValid_ReturnValue_63;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_3 = CallFunc_K2_GetComponentLocation_ReturnValue_3;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_25 = Temp_bool_Has_Been_Initd_Variable_25;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue_1 = CallFunc_IsLocalPlayerController_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue = CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_2 = K2Node_InputActionEvent_Key_2;
	Parms.Temp_bool_IsClosed_Variable_25 = Temp_bool_IsClosed_Variable_25;
	Parms.K2Node_CustomEvent_BannedPlayerList = K2Node_CustomEvent_BannedPlayerList;
	Parms.CallFunc_IsValid_ReturnValue_64 = CallFunc_IsValid_ReturnValue_64;
	Parms.CallFunc_IsValid_ReturnValue_65 = CallFunc_IsValid_ReturnValue_65;
	Parms.CallFunc_CheckIfPointIsBelowWaterLevel_IsBelowWaterLevel = CallFunc_CheckIfPointIsBelowWaterLevel_IsBelowWaterLevel;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_12 = CallFunc_GetAllActorsOfClass_OutActors_12;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_13 = CallFunc_GetAllActorsOfClass_OutActors_13;
	Parms.CallFunc_Array_Get_Item_13 = CallFunc_Array_Get_Item_13;
	Parms.CallFunc_Array_Get_Item_14 = CallFunc_Array_Get_Item_14;
	Parms.CallFunc_Array_Length_ReturnValue_15 = CallFunc_Array_Length_ReturnValue_15;
	Parms.CallFunc_Array_Length_ReturnValue_16 = CallFunc_Array_Length_ReturnValue_16;
	Parms.Temp_bool_Has_Been_Initd_Variable_26 = Temp_bool_Has_Been_Initd_Variable_26;
	Parms.CallFunc_Less_IntInt_ReturnValue_10 = CallFunc_Less_IntInt_ReturnValue_10;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_66 = CallFunc_IsValid_ReturnValue_66;
	Parms.CallFunc_IsLocalController_ReturnValue_2 = CallFunc_IsLocalController_ReturnValue_2;
	Parms.Temp_bool_IsClosed_Variable_26 = Temp_bool_IsClosed_Variable_26;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_14 = CallFunc_GetAllActorsOfClass_OutActors_14;
	Parms.CallFunc_IsLocalController_ReturnValue_3 = CallFunc_IsLocalController_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_15 = CallFunc_Array_Get_Item_15;
	Parms.CallFunc_Array_Length_ReturnValue_17 = CallFunc_Array_Length_ReturnValue_17;
	Parms.CallFunc_K2_GetPawn_ReturnValue_11 = CallFunc_K2_GetPawn_ReturnValue_11;
	Parms.CallFunc_Less_IntInt_ReturnValue_11 = CallFunc_Less_IntInt_ReturnValue_11;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsInputKeyDown_ReturnValue_9 = CallFunc_IsInputKeyDown_ReturnValue_9;
	Parms.CallFunc_GetKeyBind_Key_5 = CallFunc_GetKeyBind_Key_5;
	Parms.CallFunc_IsValid_ReturnValue_67 = CallFunc_IsValid_ReturnValue_67;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue_2 = CallFunc_FTrunc_ReturnValue_2;
	Parms.CallFunc_FTrunc_ReturnValue_3 = CallFunc_FTrunc_ReturnValue_3;
	Parms.CallFunc_FTrunc_ReturnValue_4 = CallFunc_FTrunc_ReturnValue_4;
	Parms.CallFunc_FTrunc_ReturnValue_5 = CallFunc_FTrunc_ReturnValue_5;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_1 = CallFunc_K2_AttachToComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_68 = CallFunc_IsValid_ReturnValue_68;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_2 = CallFunc_K2_GetComponentToWorld_ReturnValue_2;
	Parms.CallFunc_BreakTransform_Location_2 = CallFunc_BreakTransform_Location_2;
	Parms.CallFunc_BreakTransform_Rotation_2 = CallFunc_BreakTransform_Rotation_2;
	Parms.CallFunc_BreakTransform_Scale_2 = CallFunc_BreakTransform_Scale_2;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_3 = CallFunc_K2_GetComponentToWorld_ReturnValue_3;
	Parms.CallFunc_BreakTransform_Location_3 = CallFunc_BreakTransform_Location_3;
	Parms.CallFunc_BreakTransform_Rotation_3 = CallFunc_BreakTransform_Rotation_3;
	Parms.CallFunc_BreakTransform_Scale_3 = CallFunc_BreakTransform_Scale_3;
	Parms.CallFunc_MakeTransform_ReturnValue_3 = CallFunc_MakeTransform_ReturnValue_3;
	Parms.CallFunc_MakeTransform_ReturnValue_4 = CallFunc_MakeTransform_ReturnValue_4;
	Parms.CallFunc_NearlyEqual_TransformTransform_ReturnValue = CallFunc_NearlyEqual_TransformTransform_ReturnValue;
	Parms.CallFunc_TInterpTo_ReturnValue = CallFunc_TInterpTo_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult_2 = CallFunc_K2_SetWorldTransform_SweepHitResult_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_6 = CallFunc_Multiply_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_7 = CallFunc_Multiply_FloatFloat_ReturnValue_7;
	Parms.Temp_bool_Has_Been_Initd_Variable_27 = Temp_bool_Has_Been_Initd_Variable_27;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_8 = CallFunc_Multiply_FloatFloat_ReturnValue_8;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_3 = CallFunc_GetComponentByClass_ReturnValue_3;
	Parms.CallFunc_GetRelativeTransform_ReturnValue = CallFunc_GetRelativeTransform_ReturnValue;
	Parms.CallFunc_NearlyEqual_TransformTransform_ReturnValue_1 = CallFunc_NearlyEqual_TransformTransform_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_9 = CallFunc_Multiply_FloatFloat_ReturnValue_9;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_10 = CallFunc_Multiply_FloatFloat_ReturnValue_10;
	Parms.CallFunc_TInterpTo_ReturnValue_1 = CallFunc_TInterpTo_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_11 = CallFunc_Multiply_FloatFloat_ReturnValue_11;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_12 = CallFunc_Multiply_FloatFloat_ReturnValue_12;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_69 = CallFunc_IsValid_ReturnValue_69;
	Parms.CallFunc_IsValid_ReturnValue_70 = CallFunc_IsValid_ReturnValue_70;
	Parms.CallFunc_IsLocalController_ReturnValue_4 = CallFunc_IsLocalController_ReturnValue_4;
	Parms.CallFunc_IsInputKeyDown_ReturnValue_10 = CallFunc_IsInputKeyDown_ReturnValue_10;
	Parms.CallFunc_GetKeyBind_Key_6 = CallFunc_GetKeyBind_Key_6;
	Parms.CallFunc_IsValid_ReturnValue_71 = CallFunc_IsValid_ReturnValue_71;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_72 = CallFunc_IsValid_ReturnValue_72;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_5 = CallFunc_K2_GetActorLocation_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_73 = CallFunc_IsValid_ReturnValue_73;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_18 = Temp_int_Array_Index_Variable_18;
	Parms.CallFunc_GetGameState_ReturnValue_3 = CallFunc_GetGameState_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_16 = CallFunc_Array_Get_Item_16;
	Parms.CallFunc_IsValid_ReturnValue_74 = CallFunc_IsValid_ReturnValue_74;
	Parms.CallFunc_IsMyShip_MyShip = CallFunc_IsMyShip_MyShip;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_15 = CallFunc_GetAllActorsOfClass_OutActors_15;
	Parms.CallFunc_Array_Get_Item_17 = CallFunc_Array_Get_Item_17;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_27 = Temp_bool_IsClosed_Variable_27;
	Parms.CallFunc_IsValid_ReturnValue_75 = CallFunc_IsValid_ReturnValue_75;
	Parms.CallFunc_CalculateDeltaOnly_Delta = CallFunc_CalculateDeltaOnly_Delta;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_Create_ReturnValue_14 = CallFunc_Create_ReturnValue_14;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_3 = CallFunc_Greater_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_13 = CallFunc_Multiply_FloatFloat_ReturnValue_13;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_14 = CallFunc_Multiply_FloatFloat_ReturnValue_14;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_2 = CallFunc_Subtract_FloatFloat_ReturnValue_2;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_15 = CallFunc_Multiply_FloatFloat_ReturnValue_15;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_3 = CallFunc_Subtract_FloatFloat_ReturnValue_3;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.K2Node_CustomEvent_Speed = K2Node_CustomEvent_Speed;
	Parms.K2Node_CustomEvent_TrailDynMat = K2Node_CustomEvent_TrailDynMat;
	Parms.CallFunc_IsValid_ReturnValue_76 = CallFunc_IsValid_ReturnValue_76;
	Parms.CallFunc_K2_GetPawn_ReturnValue_12 = CallFunc_K2_GetPawn_ReturnValue_12;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_16 = CallFunc_GetAllActorsOfClass_OutActors_16;
	Parms.K2Node_CustomEvent_BoatMeshBaseRef_1 = K2Node_CustomEvent_BoatMeshBaseRef_1;
	Parms.CallFunc_Array_Get_Item_18 = CallFunc_Array_Get_Item_18;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.K2Node_CustomEvent_BoatMeshBaseRef = K2Node_CustomEvent_BoatMeshBaseRef;
	Parms.K2Node_CustomEvent_ShipType = K2Node_CustomEvent_ShipType;
	Parms.CallFunc_GetShipWaterCullingClass_CullingClass = CallFunc_GetShipWaterCullingClass_CullingClass;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_3 = K2Node_InputActionEvent_Key_3;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_4 = CallFunc_K2_GetComponentToWorld_ReturnValue_4;
	Parms.CallFunc_Create_ReturnValue_15 = CallFunc_Create_ReturnValue_15;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_3 = CallFunc_FinishSpawningActor_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_CurrentGameMode_As_Alpha_Game_Mode_4 = CallFunc_CurrentGameMode_As_Alpha_Game_Mode_4;
	Parms.CallFunc_ShouldStayInUIMode__ShouldStay_1 = CallFunc_ShouldStayInUIMode__ShouldStay_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_28 = Temp_bool_Has_Been_Initd_Variable_28;
	Parms.CallFunc_IsValid_ReturnValue_77 = CallFunc_IsValid_ReturnValue_77;
	Parms.CallFunc_IsValid_ReturnValue_78 = CallFunc_IsValid_ReturnValue_78;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.CallFunc_MakeTransform_ReturnValue_5 = CallFunc_MakeTransform_ReturnValue_5;
	Parms.Temp_bool_IsClosed_Variable_28 = Temp_bool_IsClosed_Variable_28;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_4 = CallFunc_FinishSpawningActor_ReturnValue_4;
	Parms.K2Node_MakeStruct_SlateFontInfo_1 = K2Node_MakeStruct_SlateFontInfo_1;
	Parms.K2Node_MakeStruct_SlateFontInfo_2 = K2Node_MakeStruct_SlateFontInfo_2;
	Parms.K2Node_CustomEvent_ChatMessage_1 = K2Node_CustomEvent_ChatMessage_1;
	Parms.K2Node_CustomEvent_TeamChat_1 = K2Node_CustomEvent_TeamChat_1;
	Parms.K2Node_CustomEvent_FormatText_1 = K2Node_CustomEvent_FormatText_1;
	Parms.K2Node_CustomEvent_FullColorMessage = K2Node_CustomEvent_FullColorMessage;
	Parms.K2Node_CustomEvent_PlayerUsernameId_1 = K2Node_CustomEvent_PlayerUsernameId_1;
	Parms.K2Node_CustomEvent_PlayerKillId_1 = K2Node_CustomEvent_PlayerKillId_1;
	Parms.K2Node_CustomEvent_TeamId_2 = K2Node_CustomEvent_TeamId_2;
	Parms.K2Node_CustomEvent_CommandMessage = K2Node_CustomEvent_CommandMessage;
	Parms.K2Node_CustomEvent_ChatMessage = K2Node_CustomEvent_ChatMessage;
	Parms.K2Node_CustomEvent_TeamChat = K2Node_CustomEvent_TeamChat;
	Parms.K2Node_CustomEvent_FormatText = K2Node_CustomEvent_FormatText;
	Parms.K2Node_CustomEvent_PlayerUsernameId = K2Node_CustomEvent_PlayerUsernameId;
	Parms.K2Node_CustomEvent_PlayerKillId = K2Node_CustomEvent_PlayerKillId;
	Parms.K2Node_CustomEvent_IsCommandMessage = K2Node_CustomEvent_IsCommandMessage;
	Parms.CallFunc_GetTeamFleetChatColor_NewParam = CallFunc_GetTeamFleetChatColor_NewParam;
	Parms.K2Node_MakeStruct_St_ComplexMessage = K2Node_MakeStruct_St_ComplexMessage;
	Parms.K2Node_MakeStruct_St_ComplexMessage_1 = K2Node_MakeStruct_St_ComplexMessage_1;
	Parms.CallFunc_GetTeamFleetChatTagUsernameText_Result = CallFunc_GetTeamFleetChatTagUsernameText_Result;
	Parms.K2Node_MakeStruct_St_ComplexMessage_2 = K2Node_MakeStruct_St_ComplexMessage_2;
	Parms.CallFunc_Create_ReturnValue_16 = CallFunc_Create_ReturnValue_16;
	Parms.CallFunc_Get_Team_ID_Team_ID_6 = CallFunc_Get_Team_ID_Team_ID_6;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Get_Team_ID_Team_ID_7 = CallFunc_Get_Team_ID_Team_ID_7;
	Parms.CallFunc_GetGameInstance_ReturnValue_8 = CallFunc_GetGameInstance_ReturnValue_8;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_8 = K2Node_DynamicCast_AsBP_Game_Instance_8;
	Parms.K2Node_DynamicCast_bSuccess_62 = K2Node_DynamicCast_bSuccess_62;
	Parms.K2Node_CustomEvent_ShipRef = K2Node_CustomEvent_ShipRef;
	Parms.K2Node_CustomEvent_Score = K2Node_CustomEvent_Score;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_CeilDecimals_ReturnValue = CallFunc_CeilDecimals_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_6 = CallFunc_FTrunc_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_79 = CallFunc_IsValid_ReturnValue_79;
	Parms.K2Node_DynamicCast_AsBP_Vehicle_Steering_Wheel_3 = K2Node_DynamicCast_AsBP_Vehicle_Steering_Wheel_3;
	Parms.K2Node_DynamicCast_bSuccess_63 = K2Node_DynamicCast_bSuccess_63;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_DynamicCast_AsBP_Controller_1 = K2Node_DynamicCast_AsBP_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_64 = K2Node_DynamicCast_bSuccess_64;
	Parms.Temp_int_Loop_Counter_Variable_17 = Temp_int_Loop_Counter_Variable_17;
	Parms.CallFunc_Less_IntInt_ReturnValue_12 = CallFunc_Less_IntInt_ReturnValue_12;
	Parms.CallFunc_Add_IntInt_ReturnValue_19 = CallFunc_Add_IntInt_ReturnValue_19;
	Parms.CallFunc_IsValid_ReturnValue_80 = CallFunc_IsValid_ReturnValue_80;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_10 = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_10;
	Parms.K2Node_CustomEvent_CharacterRef = K2Node_CustomEvent_CharacterRef;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_StopSprint_WasSprinting = CallFunc_StopSprint_WasSprinting;
	Parms.K2Node_CustomEvent_MastRef_1 = K2Node_CustomEvent_MastRef_1;
	Parms.K2Node_CustomEvent_DamageAmount_8 = K2Node_CustomEvent_DamageAmount_8;
	Parms.K2Node_CustomEvent_Headshot_3 = K2Node_CustomEvent_Headshot_3;
	Parms.K2Node_CustomEvent_DamageAmount_7 = K2Node_CustomEvent_DamageAmount_7;
	Parms.K2Node_CustomEvent_IsLow_1 = K2Node_CustomEvent_IsLow_1;
	Parms.K2Node_CustomEvent_DamageType_3 = K2Node_CustomEvent_DamageType_3;
	Parms.CallFunc_IsValid_ReturnValue_81 = CallFunc_IsValid_ReturnValue_81;
	Parms.Temp_int_Loop_Counter_Variable_18 = Temp_int_Loop_Counter_Variable_18;
	Parms.K2Node_CustomEvent_BoatRef_3 = K2Node_CustomEvent_BoatRef_3;
	Parms.K2Node_CustomEvent_DamageAmount_6 = K2Node_CustomEvent_DamageAmount_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_13 = CallFunc_Less_IntInt_ReturnValue_13;
	Parms.CallFunc_CreateRandomDamage_DamageAmounts = CallFunc_CreateRandomDamage_DamageAmounts;
	Parms.CallFunc_CreateRandomDamage_DamageLocations = CallFunc_CreateRandomDamage_DamageLocations;
	Parms.CallFunc_Array_Get_Item_19 = CallFunc_Array_Get_Item_19;
	Parms.CallFunc_Array_Length_ReturnValue_18 = CallFunc_Array_Length_ReturnValue_18;
	Parms.CallFunc_Less_IntInt_ReturnValue_14 = CallFunc_Less_IntInt_ReturnValue_14;
	Parms.CallFunc_Add_IntInt_ReturnValue_20 = CallFunc_Add_IntInt_ReturnValue_20;
	Parms.K2Node_CustomEvent_BoatRef_2 = K2Node_CustomEvent_BoatRef_2;
	Parms.K2Node_CustomEvent_DamageAmount_5 = K2Node_CustomEvent_DamageAmount_5;
	Parms.K2Node_CustomEvent_DamageAmount_4 = K2Node_CustomEvent_DamageAmount_4;
	Parms.K2Node_CustomEvent_DamageType_2 = K2Node_CustomEvent_DamageType_2;
	Parms.K2Node_CustomEvent_RelativeLocation_1 = K2Node_CustomEvent_RelativeLocation_1;
	Parms.K2Node_CustomEvent_ImpactNormal_1 = K2Node_CustomEvent_ImpactNormal_1;
	Parms.K2Node_CustomEvent_BoatRef_1 = K2Node_CustomEvent_BoatRef_1;
	Parms.K2Node_CustomEvent_DamageAmount_3 = K2Node_CustomEvent_DamageAmount_3;
	Parms.K2Node_CustomEvent_DamageType_1 = K2Node_CustomEvent_DamageType_1;
	Parms.K2Node_CustomEvent_RelativeLocation = K2Node_CustomEvent_RelativeLocation;
	Parms.K2Node_CustomEvent_ImpactNormal = K2Node_CustomEvent_ImpactNormal;
	Parms.K2Node_CustomEvent_BoatRef = K2Node_CustomEvent_BoatRef;
	Parms.K2Node_CustomEvent_AmmoType = K2Node_CustomEvent_AmmoType;
	Parms.CallFunc_GetScoreAmountCannonBall_Score = CallFunc_GetScoreAmountCannonBall_Score;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_MastRef = K2Node_CustomEvent_MastRef;
	Parms.K2Node_CustomEvent_Ammo_Type = K2Node_CustomEvent_Ammo_Type;
	Parms.CallFunc_GetScoreAmountCannonBall_Score_1 = CallFunc_GetScoreAmountCannonBall_Score_1;
	Parms.CallFunc_IsValid_ReturnValue_82 = CallFunc_IsValid_ReturnValue_82;
	Parms.K2Node_CustomEvent_DamageAmount_2 = K2Node_CustomEvent_DamageAmount_2;
	Parms.K2Node_CustomEvent_PlayerToDamageRef = K2Node_CustomEvent_PlayerToDamageRef;
	Parms.K2Node_CustomEvent_Headshot_2 = K2Node_CustomEvent_Headshot_2;
	Parms.K2Node_CustomEvent_DamageOwnTeamAlso_1 = K2Node_CustomEvent_DamageOwnTeamAlso_1;
	Parms.K2Node_CustomEvent_MeleeDamage_1 = K2Node_CustomEvent_MeleeDamage_1;
	Parms.K2Node_CustomEvent_CanDamageSelf_1 = K2Node_CustomEvent_CanDamageSelf_1;
	Parms.K2Node_CustomEvent_Weapon_1 = K2Node_CustomEvent_Weapon_1;
	Parms.K2Node_CustomEvent_ShotID_1 = K2Node_CustomEvent_ShotID_1;
	Parms.K2Node_CustomEvent_DamageAmount_1 = K2Node_CustomEvent_DamageAmount_1;
	Parms.K2Node_CustomEvent_PlayerRef = K2Node_CustomEvent_PlayerRef;
	Parms.K2Node_CustomEvent_Headshot_1 = K2Node_CustomEvent_Headshot_1;
	Parms.K2Node_CustomEvent_CanDamageSelf = K2Node_CustomEvent_CanDamageSelf;
	Parms.K2Node_CustomEvent_MeleeDamage = K2Node_CustomEvent_MeleeDamage;
	Parms.K2Node_CustomEvent_DamageOwnTeamAlso = K2Node_CustomEvent_DamageOwnTeamAlso;
	Parms.K2Node_CustomEvent_Weapon = K2Node_CustomEvent_Weapon;
	Parms.K2Node_CustomEvent_ShotID = K2Node_CustomEvent_ShotID;
	Parms.CallFunc_IsValid_ReturnValue_83 = CallFunc_IsValid_ReturnValue_83;
	Parms.Temp_int_Array_Index_Variable_19 = Temp_int_Array_Index_Variable_19;
	Parms.CallFunc_Array_Get_Item_20 = CallFunc_Array_Get_Item_20;
	Parms.K2Node_CustomEvent_GoldMultiplier = K2Node_CustomEvent_GoldMultiplier;
	Parms.K2Node_CustomEvent_TimeAliveModifier = K2Node_CustomEvent_TimeAliveModifier;
	Parms.K2Node_DynamicCast_AsBP_Player_State_14 = K2Node_DynamicCast_AsBP_Player_State_14;
	Parms.K2Node_DynamicCast_bSuccess_65 = K2Node_DynamicCast_bSuccess_65;
	Parms.CallFunc_Create_ReturnValue_17 = CallFunc_Create_ReturnValue_17;
	Parms.K2Node_CustomEvent_Headshot = K2Node_CustomEvent_Headshot;
	Parms.K2Node_CustomEvent_DamageAmount = K2Node_CustomEvent_DamageAmount;
	Parms.K2Node_CustomEvent_IsLow = K2Node_CustomEvent_IsLow;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.K2Node_CustomEvent_Playername = K2Node_CustomEvent_Playername;
	Parms.K2Node_CustomEvent_KillerId = K2Node_CustomEvent_KillerId;
	Parms.K2Node_CustomEvent_WeaponType = K2Node_CustomEvent_WeaponType;
	Parms.K2Node_CustomEvent_CursedPlayer_ = K2Node_CustomEvent_CursedPlayer_;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.K2Node_CustomEvent_AttackerLocation = K2Node_CustomEvent_AttackerLocation;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_6 = CallFunc_K2_GetActorLocation_ReturnValue_6;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_2 = CallFunc_GetPlayerCameraManager_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Player_State_15 = K2Node_DynamicCast_AsBP_Player_State_15;
	Parms.K2Node_DynamicCast_bSuccess_66 = K2Node_DynamicCast_bSuccess_66;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue_1 = CallFunc_GetCameraLocation_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_6 = CallFunc_MakeTransform_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_84 = CallFunc_IsValid_ReturnValue_84;
	Parms.CallFunc_Create_ReturnValue_18 = CallFunc_Create_ReturnValue_18;
	Parms.CallFunc_WithEditor_ReturnValue_5 = CallFunc_WithEditor_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_85 = CallFunc_IsValid_ReturnValue_85;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_86 = CallFunc_IsValid_ReturnValue_86;
	Parms.CallFunc_IsValid_ReturnValue_87 = CallFunc_IsValid_ReturnValue_87;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_3 = CallFunc_GetPlayerCameraManager_ReturnValue_3;
	Parms.CallFunc_GetCameraLocation_ReturnValue_2 = CallFunc_GetCameraLocation_ReturnValue_2;
	Parms.K2Node_CustomEvent_Location_4 = K2Node_CustomEvent_Location_4;
	Parms.K2Node_MakeStruct_FontOutlineSettings = K2Node_MakeStruct_FontOutlineSettings;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_2 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_2;
	Parms.K2Node_MakeStruct_SlateFontInfo_3 = K2Node_MakeStruct_SlateFontInfo_3;
	Parms.CallFunc_Array_Get_Item_21 = CallFunc_Array_Get_Item_21;
	Parms.K2Node_MakeStruct_St_ComplexMessage_3 = K2Node_MakeStruct_St_ComplexMessage_3;
	Parms.CallFunc_IsValid_ReturnValue_88 = CallFunc_IsValid_ReturnValue_88;
	Parms.K2Node_CustomEvent_Location_3 = K2Node_CustomEvent_Location_3;
	Parms.K2Node_CustomEvent_SpawnTransform = K2Node_CustomEvent_SpawnTransform;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_5 = CallFunc_FinishSpawningActor_ReturnValue_5;
	Parms.CallFunc_MakeTransform_ReturnValue_7 = CallFunc_MakeTransform_ReturnValue_7;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_6 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_6;
	Parms.CallFunc_ShouldStayInUIMode__ShouldStay_2 = CallFunc_ShouldStayInUIMode__ShouldStay_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_6 = CallFunc_FinishSpawningActor_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_89 = CallFunc_IsValid_ReturnValue_89;
	Parms.CallFunc_IsValid_ReturnValue_90 = CallFunc_IsValid_ReturnValue_90;
	Parms.CallFunc_Create_ReturnValue_19 = CallFunc_Create_ReturnValue_19;
	Parms.CallFunc_Not_PreBool_ReturnValue_7 = CallFunc_Not_PreBool_ReturnValue_7;
	Parms.K2Node_InputKeyEvent_Key_10 = K2Node_InputKeyEvent_Key_10;
	Parms.Temp_bool_Has_Been_Initd_Variable_29 = Temp_bool_Has_Been_Initd_Variable_29;
	Parms.CallFunc_Create_ReturnValue_20 = CallFunc_Create_ReturnValue_20;
	Parms.Temp_int_Array_Index_Variable_20 = Temp_int_Array_Index_Variable_20;
	Parms.Temp_bool_IsClosed_Variable_29 = Temp_bool_IsClosed_Variable_29;
	Parms.CallFunc_Array_Get_Item_22 = CallFunc_Array_Get_Item_22;
	Parms.K2Node_InputKeyEvent_Key_11 = K2Node_InputKeyEvent_Key_11;
	Parms.CallFunc_IsValid_ReturnValue_91 = CallFunc_IsValid_ReturnValue_91;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_11 = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_11;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Get_Team_ID_Team_ID_8 = CallFunc_Get_Team_ID_Team_ID_8;
	Parms.CallFunc_Get_Team_ID_Team_ID_9 = CallFunc_Get_Team_ID_Team_ID_9;
	Parms.CallFunc_GetGameState_ReturnValue_4 = CallFunc_GetGameState_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBP_Game_State_3 = K2Node_DynamicCast_AsBP_Game_State_3;
	Parms.K2Node_DynamicCast_bSuccess_67 = K2Node_DynamicCast_bSuccess_67;
	Parms.CallFunc_Array_Get_Item_23 = CallFunc_Array_Get_Item_23;
	Parms.CallFunc_Array_Get_Item_24 = CallFunc_Array_Get_Item_24;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue_1 = CallFunc_MakeLiteralFloat_ReturnValue_1;
	Parms.K2Node_CustomEvent_PingableObject = K2Node_CustomEvent_PingableObject;
	Parms.K2Node_CustomEvent_Command = K2Node_CustomEvent_Command;
	Parms.K2Node_CustomEvent_Direction_Optional_ = K2Node_CustomEvent_Direction_Optional_;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_GetCurrentWaypointMarker_CurrentMarker = CallFunc_GetCurrentWaypointMarker_CurrentMarker;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_92 = CallFunc_IsValid_ReturnValue_92;
	Parms.CallFunc_IsValid_ReturnValue_93 = CallFunc_IsValid_ReturnValue_93;
	Parms.K2Node_DynamicCast_AsBP_Player_State_16 = K2Node_DynamicCast_AsBP_Player_State_16;
	Parms.K2Node_DynamicCast_bSuccess_68 = K2Node_DynamicCast_bSuccess_68;
	Parms.CallFunc_Conv_StringToText_ReturnValue_7 = CallFunc_Conv_StringToText_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_94 = CallFunc_IsValid_ReturnValue_94;
	Parms.K2Node_CustomEvent_TeamId_1 = K2Node_CustomEvent_TeamId_1;
	Parms.K2Node_CustomEvent_PlayerColor_1 = K2Node_CustomEvent_PlayerColor_1;
	Parms.K2Node_CustomEvent_IsDead = K2Node_CustomEvent_IsDead;
	Parms.K2Node_CustomEvent_TeamId = K2Node_CustomEvent_TeamId;
	Parms.K2Node_CustomEvent_PlayerColor = K2Node_CustomEvent_PlayerColor;
	Parms.K2Node_CustomEvent_Location_2 = K2Node_CustomEvent_Location_2;
	Parms.K2Node_CustomEvent_AddMarker = K2Node_CustomEvent_AddMarker;
	Parms.K2Node_DynamicCast_AsEOS_Player_State_2 = K2Node_DynamicCast_AsEOS_Player_State_2;
	Parms.K2Node_DynamicCast_bSuccess_69 = K2Node_DynamicCast_bSuccess_69;
	Parms.Temp_bool_Has_Been_Initd_Variable_30 = Temp_bool_Has_Been_Initd_Variable_30;
	Parms.Temp_int_Loop_Counter_Variable_19 = Temp_int_Loop_Counter_Variable_19;
	Parms.CallFunc_Less_IntInt_ReturnValue_15 = CallFunc_Less_IntInt_ReturnValue_15;
	Parms.CallFunc_Add_IntInt_ReturnValue_21 = CallFunc_Add_IntInt_ReturnValue_21;
	Parms.K2Node_CustomEvent_Location_1 = K2Node_CustomEvent_Location_1;
	Parms.K2Node_CustomEvent_IsHoveringOverMarker = K2Node_CustomEvent_IsHoveringOverMarker;
	Parms.K2Node_CustomEvent_PickupActor_1 = K2Node_CustomEvent_PickupActor_1;
	Parms.K2Node_InputKeyEvent_Key_12 = K2Node_InputKeyEvent_Key_12;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_Key_IsGamepadKey_ReturnValue = CallFunc_Key_IsGamepadKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_95 = CallFunc_IsValid_ReturnValue_95;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_GenerateMarkerInfoForPickup_Background = CallFunc_GenerateMarkerInfoForPickup_Background;
	Parms.CallFunc_GenerateMarkerInfoForPickup_Icon = CallFunc_GenerateMarkerInfoForPickup_Icon;
	Parms.CallFunc_GenerateMarkerInfoForPickup_Location = CallFunc_GenerateMarkerInfoForPickup_Location;
	Parms.CallFunc_GenerateMarkerInfoForPickup_Message = CallFunc_GenerateMarkerInfoForPickup_Message;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.K2Node_MakeStruct_ST_SimpleMessage_4 = K2Node_MakeStruct_ST_SimpleMessage_4;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_17 = CallFunc_GetAllActorsOfClass_OutActors_17;
	Parms.CallFunc_Array_Get_Item_25 = CallFunc_Array_Get_Item_25;
	Parms.CallFunc_Array_Length_ReturnValue_19 = CallFunc_Array_Length_ReturnValue_19;
	Parms.CallFunc_Less_IntInt_ReturnValue_16 = CallFunc_Less_IntInt_ReturnValue_16;
	Parms.CallFunc_Compare_Crew_Member_ID_Is_Same_Team_Crew_And_Ship_1 = CallFunc_Compare_Crew_Member_ID_Is_Same_Team_Crew_And_Ship_1;
	Parms.CallFunc_Create_ReturnValue_21 = CallFunc_Create_ReturnValue_21;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.K2Node_CustomEvent_TeamPlayerColor = K2Node_CustomEvent_TeamPlayerColor;
	Parms.K2Node_CustomEvent_Background = K2Node_CustomEvent_Background;
	Parms.K2Node_CustomEvent_Icon = K2Node_CustomEvent_Icon;
	Parms.K2Node_CustomEvent_PickupActor = K2Node_CustomEvent_PickupActor;
	Parms.K2Node_CustomEvent_PreviousMarker__Negate_all_actors_of_class_call_ = K2Node_CustomEvent_PreviousMarker__Negate_all_actors_of_class_call_;
	Parms.CallFunc_IsValid_ReturnValue_96 = CallFunc_IsValid_ReturnValue_96;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue_3 = CallFunc_Conv_VectorToTransform_ReturnValue_3;
	Parms.CallFunc_Create_ReturnValue_22 = CallFunc_Create_ReturnValue_22;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_7 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_7;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_7 = CallFunc_FinishSpawningActor_ReturnValue_7;
	Parms.K2Node_CustomEvent_Interactable_1 = K2Node_CustomEvent_Interactable_1;
	Parms.K2Node_CustomEvent_Interactable = K2Node_CustomEvent_Interactable;
	Parms.CallFunc_IsValid_ReturnValue_97 = CallFunc_IsValid_ReturnValue_97;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_12 = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_12;
	Parms.CallFunc_K2_GetPawn_ReturnValue_13 = CallFunc_K2_GetPawn_ReturnValue_13;
	Parms.K2Node_MakeStruct_ST_PieMenuSelection = K2Node_MakeStruct_ST_PieMenuSelection;
	Parms.K2Node_DynamicCast_AsBP_Vehicle_Base_2 = K2Node_DynamicCast_AsBP_Vehicle_Base_2;
	Parms.K2Node_DynamicCast_bSuccess_70 = K2Node_DynamicCast_bSuccess_70;
	Parms.K2Node_DynamicCast_AsBP_Character_6 = K2Node_DynamicCast_AsBP_Character_6;
	Parms.K2Node_DynamicCast_bSuccess_71 = K2Node_DynamicCast_bSuccess_71;
	Parms.CallFunc_IsValid_ReturnValue_98 = CallFunc_IsValid_ReturnValue_98;
	Parms.K2Node_MakeStruct_ST_PieMenuSelection_1 = K2Node_MakeStruct_ST_PieMenuSelection_1;
	Parms.K2Node_MakeStruct_ST_PieMenuSelection_2 = K2Node_MakeStruct_ST_PieMenuSelection_2;
	Parms.K2Node_MakeStruct_ST_PieMenuSelection_3 = K2Node_MakeStruct_ST_PieMenuSelection_3;
	Parms.K2Node_MakeStruct_ST_PieMenuSelection_4 = K2Node_MakeStruct_ST_PieMenuSelection_4;
	Parms.K2Node_MakeStruct_ST_PieMenuSelection_5 = K2Node_MakeStruct_ST_PieMenuSelection_5;
	Parms.CallFunc_IsValid_ReturnValue_99 = CallFunc_IsValid_ReturnValue_99;
	Parms.K2Node_MakeStruct_ST_PieMenuSelection_6 = K2Node_MakeStruct_ST_PieMenuSelection_6;
	Parms.K2Node_MakeStruct_ST_PieMenuSelection_7 = K2Node_MakeStruct_ST_PieMenuSelection_7;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.K2Node_InputKeyEvent_Key_13 = K2Node_InputKeyEvent_Key_13;
	Parms.CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State = CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State;
	Parms.Temp_bool_IsClosed_Variable_30 = Temp_bool_IsClosed_Variable_30;
	Parms.CallFunc_GetGameInstance_ReturnValue_9 = CallFunc_GetGameInstance_ReturnValue_9;
	Parms.CallFunc_GetGameInstance_ReturnValue_10 = CallFunc_GetGameInstance_ReturnValue_10;
	Parms.K2Node_DynamicCast_AsEOS_Game_Instance = K2Node_DynamicCast_AsEOS_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_72 = K2Node_DynamicCast_bSuccess_72;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_9 = K2Node_DynamicCast_AsBP_Game_Instance_9;
	Parms.K2Node_DynamicCast_bSuccess_73 = K2Node_DynamicCast_bSuccess_73;
	Parms.CallFunc_GetGameInstance_ReturnValue_11 = CallFunc_GetGameInstance_ReturnValue_11;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance_10 = K2Node_DynamicCast_AsBP_Game_Instance_10;
	Parms.K2Node_DynamicCast_bSuccess_74 = K2Node_DynamicCast_bSuccess_74;
	Parms.CallFunc_WithEditor_ReturnValue_6 = CallFunc_WithEditor_ReturnValue_6;
	Parms.K2Node_InputKeyEvent_Key_14 = K2Node_InputKeyEvent_Key_14;
	Parms.CallFunc_GetGameMode_ReturnValue_3 = CallFunc_GetGameMode_ReturnValue_3;
	Parms.K2Node_CustomEvent_NewServerName = K2Node_CustomEvent_NewServerName;
	Parms.K2Node_DynamicCast_AsBP_Core_Game_Mode_3 = K2Node_DynamicCast_AsBP_Core_Game_Mode_3;
	Parms.K2Node_DynamicCast_bSuccess_75 = K2Node_DynamicCast_bSuccess_75;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_1 = CallFunc_GetControllerUniqueNetId_ReturnValue_1;
	Parms.K2Node_InputKeyEvent_Key_15 = K2Node_InputKeyEvent_Key_15;
	Parms.CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue_1 = CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_response = K2Node_CustomEvent_response;
	Parms.CallFunc_GetResponseObject_ReturnValue = CallFunc_GetResponseObject_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue_4 = CallFunc_GetGameMode_ReturnValue_4;
	Parms.CallFunc_GetArrayField_ReturnValue = CallFunc_GetArrayField_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Core_Game_Mode_4 = K2Node_DynamicCast_AsBP_Core_Game_Mode_4;
	Parms.K2Node_DynamicCast_bSuccess_76 = K2Node_DynamicCast_bSuccess_76;
	Parms.CallFunc_Array_Get_Item_26 = CallFunc_Array_Get_Item_26;
	Parms.CallFunc_Array_Length_ReturnValue_20 = CallFunc_Array_Length_ReturnValue_20;
	Parms.CallFunc_IsValid_ReturnValue_100 = CallFunc_IsValid_ReturnValue_100;
	Parms.CallFunc_Less_IntInt_ReturnValue_17 = CallFunc_Less_IntInt_ReturnValue_17;
	Parms.CallFunc_BooleanAND_ReturnValue_8 = CallFunc_BooleanAND_ReturnValue_8;
	Parms.CallFunc_AsString_ReturnValue = CallFunc_AsString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.K2Node_CustomEvent_PlayerCap = K2Node_CustomEvent_PlayerCap;
	Parms.CallFunc_VerifyIfEligableForDedicatedServerMod_isEligableForModerator = CallFunc_VerifyIfEligableForDedicatedServerMod_isEligableForModerator;
	Parms.CallFunc_GetGameMode_ReturnValue_5 = CallFunc_GetGameMode_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsEOS_Player_State_3 = K2Node_DynamicCast_AsEOS_Player_State_3;
	Parms.K2Node_DynamicCast_bSuccess_77 = K2Node_DynamicCast_bSuccess_77;
	Parms.K2Node_DynamicCast_AsBP_Core_Game_Mode_5 = K2Node_DynamicCast_AsBP_Core_Game_Mode_5;
	Parms.K2Node_DynamicCast_bSuccess_78 = K2Node_DynamicCast_bSuccess_78;
	Parms.CallFunc_GetGameMode_ReturnValue_6 = CallFunc_GetGameMode_ReturnValue_6;
	Parms.K2Node_CustomEvent_NewPassword = K2Node_CustomEvent_NewPassword;
	Parms.K2Node_DynamicCast_AsBP_Core_Game_Mode_6 = K2Node_DynamicCast_AsBP_Core_Game_Mode_6;
	Parms.K2Node_DynamicCast_bSuccess_79 = K2Node_DynamicCast_bSuccess_79;
	Parms.CallFunc_GetGameMode_ReturnValue_7 = CallFunc_GetGameMode_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsBP_Core_Game_Mode_7 = K2Node_DynamicCast_AsBP_Core_Game_Mode_7;
	Parms.K2Node_DynamicCast_bSuccess_80 = K2Node_DynamicCast_bSuccess_80;
	Parms.K2Node_InputKeyEvent_Key_16 = K2Node_InputKeyEvent_Key_16;
	Parms.K2Node_DynamicCast_AsBP_Player_State_17 = K2Node_DynamicCast_AsBP_Player_State_17;
	Parms.K2Node_DynamicCast_bSuccess_81 = K2Node_DynamicCast_bSuccess_81;
	Parms.CallFunc_GetGameMode_ReturnValue_8 = CallFunc_GetGameMode_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsBP_Core_Game_Mode_8 = K2Node_DynamicCast_AsBP_Core_Game_Mode_8;
	Parms.K2Node_DynamicCast_bSuccess_82 = K2Node_DynamicCast_bSuccess_82;
	Parms.CallFunc_GetGameState_ReturnValue_5 = CallFunc_GetGameState_ReturnValue_5;
	Parms.CallFunc_Create_ReturnValue_23 = CallFunc_Create_ReturnValue_23;
	Parms.K2Node_DynamicCast_AsBP_Game_State_4 = K2Node_DynamicCast_AsBP_Game_State_4;
	Parms.K2Node_DynamicCast_bSuccess_83 = K2Node_DynamicCast_bSuccess_83;
	Parms.CallFunc_Array_Get_Item_27 = CallFunc_Array_Get_Item_27;
	Parms.CallFunc_Array_Length_ReturnValue_21 = CallFunc_Array_Length_ReturnValue_21;
	Parms.K2Node_DynamicCast_AsBP_Player_State_18 = K2Node_DynamicCast_AsBP_Player_State_18;
	Parms.K2Node_DynamicCast_bSuccess_84 = K2Node_DynamicCast_bSuccess_84;
	Parms.CallFunc_Less_IntInt_ReturnValue_18 = CallFunc_Less_IntInt_ReturnValue_18;
	Parms.CallFunc_BooleanAND_ReturnValue_9 = CallFunc_BooleanAND_ReturnValue_9;
	Parms.CallFunc_Conv_StringToText_ReturnValue_8 = CallFunc_Conv_StringToText_ReturnValue_8;
	Parms.K2Node_MakeStruct_ST_SimpleMessage_5 = K2Node_MakeStruct_ST_SimpleMessage_5;
	Parms.K2Node_DynamicCast_AsBP_Controller_2 = K2Node_DynamicCast_AsBP_Controller_2;
	Parms.K2Node_DynamicCast_bSuccess_85 = K2Node_DynamicCast_bSuccess_85;
	Parms.K2Node_MakeStruct_ST_SimpleMessage_6 = K2Node_MakeStruct_ST_SimpleMessage_6;
	Parms.K2Node_CustomEvent_Platform_ID = K2Node_CustomEvent_Platform_ID;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_3 = CallFunc_EqualEqual_StrStr_ReturnValue_3;
	Parms.CallFunc_GetGameMode_ReturnValue_9 = CallFunc_GetGameMode_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsEOS_Game_Mode = K2Node_DynamicCast_AsEOS_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess_86 = K2Node_DynamicCast_bSuccess_86;
	Parms.K2Node_CustomEvent_Banlist = K2Node_CustomEvent_Banlist;
	Parms.K2Node_CustomEvent_UniqueNetID = K2Node_CustomEvent_UniqueNetID;
	Parms.K2Node_CustomEvent_Username_1 = K2Node_CustomEvent_Username_1;
	Parms.K2Node_CustomEvent_PlayerID_6 = K2Node_CustomEvent_PlayerID_6;
	Parms.CallFunc_GetGameMode_ReturnValue_10 = CallFunc_GetGameMode_ReturnValue_10;
	Parms.K2Node_MakeStruct_ST_BanListEntry_new = K2Node_MakeStruct_ST_BanListEntry_new;
	Parms.K2Node_DynamicCast_AsBP_Core_Game_Mode_9 = K2Node_DynamicCast_AsBP_Core_Game_Mode_9;
	Parms.K2Node_DynamicCast_bSuccess_87 = K2Node_DynamicCast_bSuccess_87;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.K2Node_CustomEvent_PlayerID_5 = K2Node_CustomEvent_PlayerID_5;
	Parms.K2Node_CustomEvent_AddToBanList = K2Node_CustomEvent_AddToBanList;
	Parms.K2Node_CustomEvent_Username = K2Node_CustomEvent_Username;
	Parms.K2Node_CustomEvent_Reason_1 = K2Node_CustomEvent_Reason_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_CustomEvent_Reason = K2Node_CustomEvent_Reason;
	Parms.K2Node_CustomEvent_DisconnectReason = K2Node_CustomEvent_DisconnectReason;
	Parms.CallFunc_KickBanPlayer_UniqueNetID = CallFunc_KickBanPlayer_UniqueNetID;
	Parms.CallFunc_MakeTransform_ReturnValue_8 = CallFunc_MakeTransform_ReturnValue_8;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_MakeTransform_ReturnValue_9 = CallFunc_MakeTransform_ReturnValue_9;
	Parms.K2Node_InputActionEvent_Key_4 = K2Node_InputActionEvent_Key_4;
	Parms.K2Node_CustomEvent_ActionClass_1 = K2Node_CustomEvent_ActionClass_1;
	Parms.K2Node_CustomEvent_Information_1 = K2Node_CustomEvent_Information_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_8 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_8;
	Parms.K2Node_CustomEvent_ServerCommand = K2Node_CustomEvent_ServerCommand;
	Parms.K2Node_CustomEvent_ActionClass = K2Node_CustomEvent_ActionClass;
	Parms.K2Node_CustomEvent_Information = K2Node_CustomEvent_Information;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_9 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_9;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_8 = CallFunc_FinishSpawningActor_ReturnValue_8;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_9 = CallFunc_FinishSpawningActor_ReturnValue_9;
	Parms.K2Node_InputActionEvent_Key_5 = K2Node_InputActionEvent_Key_5;
	Parms.K2Node_CustomEvent_Message_2 = K2Node_CustomEvent_Message_2;
	Parms.K2Node_CustomEvent_Duration_1 = K2Node_CustomEvent_Duration_1;
	Parms.K2Node_CustomEvent_Message_1 = K2Node_CustomEvent_Message_1;
	Parms.K2Node_CustomEvent_Duration = K2Node_CustomEvent_Duration;
	Parms.CallFunc_IsValid_ReturnValue_101 = CallFunc_IsValid_ReturnValue_101;
	Parms.Temp_bool_Has_Been_Initd_Variable_31 = Temp_bool_Has_Been_Initd_Variable_31;
	Parms.CallFunc_IsValid_ReturnValue_102 = CallFunc_IsValid_ReturnValue_102;
	Parms.K2Node_CustomEvent_Message = K2Node_CustomEvent_Message;
	Parms.K2Node_CustomEvent_NotificationSound = K2Node_CustomEvent_NotificationSound;
	Parms.CallFunc_IsValid_ReturnValue_103 = CallFunc_IsValid_ReturnValue_103;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.K2Node_CustomEvent_ExtraInfo = K2Node_CustomEvent_ExtraInfo;
	Parms.CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State_1 = CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State_1;
	Parms.CallFunc_Create_ReturnValue_24 = CallFunc_Create_ReturnValue_24;
	Parms.Temp_bool_Has_Been_Initd_Variable_32 = Temp_bool_Has_Been_Initd_Variable_32;
	Parms.Temp_bool_IsClosed_Variable_31 = Temp_bool_IsClosed_Variable_31;
	Parms.Temp_int_Loop_Counter_Variable_20 = Temp_int_Loop_Counter_Variable_20;
	Parms.CallFunc_Less_IntInt_ReturnValue_19 = CallFunc_Less_IntInt_ReturnValue_19;
	Parms.CallFunc_Add_IntInt_ReturnValue_22 = CallFunc_Add_IntInt_ReturnValue_22;
	Parms.K2Node_CustomEvent_PlayerID_4 = K2Node_CustomEvent_PlayerID_4;
	Parms.CallFunc_HasAuthority_ReturnValue_4 = CallFunc_HasAuthority_ReturnValue_4;
	Parms.Temp_bool_IsClosed_Variable_32 = Temp_bool_IsClosed_Variable_32;
	Parms.CallFunc_GetGameState_ReturnValue_6 = CallFunc_GetGameState_ReturnValue_6;
	Parms.K2Node_CustomEvent_PlayerID_3 = K2Node_CustomEvent_PlayerID_3;
	Parms.K2Node_CustomEvent_KickVoterID_3 = K2Node_CustomEvent_KickVoterID_3;
	Parms.CallFunc_GetGameState_ReturnValue_7 = CallFunc_GetGameState_ReturnValue_7;
	Parms.CallFunc_Array_Get_Item_28 = CallFunc_Array_Get_Item_28;
	Parms.CallFunc_Array_Get_Item_29 = CallFunc_Array_Get_Item_29;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Player_State_19 = K2Node_DynamicCast_AsBP_Player_State_19;
	Parms.K2Node_DynamicCast_bSuccess_88 = K2Node_DynamicCast_bSuccess_88;
	Parms.CallFunc_Array_Length_ReturnValue_22 = CallFunc_Array_Length_ReturnValue_22;
	Parms.K2Node_DynamicCast_AsBP_Player_State_20 = K2Node_DynamicCast_AsBP_Player_State_20;
	Parms.K2Node_DynamicCast_bSuccess_89 = K2Node_DynamicCast_bSuccess_89;
	Parms.CallFunc_Less_IntInt_ReturnValue_20 = CallFunc_Less_IntInt_ReturnValue_20;
	Parms.CallFunc_BooleanAND_ReturnValue_10 = CallFunc_BooleanAND_ReturnValue_10;
	Parms.CallFunc_Compare_Ship_Is_Same_Team_Crew_And_Ship = CallFunc_Compare_Ship_Is_Same_Team_Crew_And_Ship;
	Parms.CallFunc_Array_Length_ReturnValue_23 = CallFunc_Array_Length_ReturnValue_23;
	Parms.K2Node_CustomEvent_PlayerID_2 = K2Node_CustomEvent_PlayerID_2;
	Parms.K2Node_CustomEvent_KickVoterID_2 = K2Node_CustomEvent_KickVoterID_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_21 = CallFunc_Less_IntInt_ReturnValue_21;
	Parms.CallFunc_BooleanAND_ReturnValue_11 = CallFunc_BooleanAND_ReturnValue_11;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.K2Node_CustomEvent_PlayerID_1 = K2Node_CustomEvent_PlayerID_1;
	Parms.K2Node_CustomEvent_KickVoterID_1 = K2Node_CustomEvent_KickVoterID_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Controller.BP_Controller_C.RightJoyStickScroll__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ScrollValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Controller_C::RightJoyStickScroll__DelegateSignature(float ScrollValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Controller_C", "RightJoyStickScroll__DelegateSignature");

	Params::ABP_Controller_C_RightJoyStickScroll__DelegateSignature_Params Parms{};

	Parms.ScrollValue = ScrollValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


