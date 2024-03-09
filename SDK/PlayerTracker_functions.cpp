#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerTracker.PlayerTracker_C
// (None)

class UClass* UPlayerTracker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerTracker_C");

	return Clss;
}


// PlayerTracker_C PlayerTracker.Default__PlayerTracker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerTracker_C* UPlayerTracker_C::GetDefaultObj()
{
	static class UPlayerTracker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerTracker_C*>(UPlayerTracker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerTracker.PlayerTracker_C.Reset Last Received Levels
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerTracker_C::Reset_Last_Received_Levels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTracker_C", "Reset Last Received Levels");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerTracker.PlayerTracker_C.Add Game Played
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_GameModes             GameMode                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Won                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Cursed                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      GainedLevels                                                     (Parm, OutParm)
// int32                              Con_Games_Won                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Con_Games_Played                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Won_Conquest_Game                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Won_Cursed_Game                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Cursed_Games_Won                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Cursed_Games_Played                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Won_BR_Game                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              BR_Games_Won                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BR_Games_Played                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_Process_XP_and_Write_Player_and_Match_Data_to_Server_GainedLevels(ReferenceParm)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerTrackerExperience_DataK2Node_MakeStruct_ST_PlayerTrackerExperience_Data                (ZeroConstructor, HasGetValueTypeHash)

void UPlayerTracker_C::Add_Game_Played(enum class E_GameModes GameMode, bool Won, bool Cursed, TArray<int32>* GainedLevels, int32 Con_Games_Won, int32 Con_Games_Played, bool Won_Conquest_Game, bool Won_Cursed_Game, int32 Cursed_Games_Won, int32 Cursed_Games_Played, bool Won_BR_Game, int32 BR_Games_Won, int32 BR_Games_Played, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Variable, int32 Temp_int_Variable_1, TArray<int32>& CallFunc_Process_XP_and_Write_Player_and_Match_Data_to_Server_GainedLevels, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, const struct FST_PlayerTrackerExperience_Data& K2Node_MakeStruct_ST_PlayerTrackerExperience_Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTracker_C", "Add Game Played");

	Params::UPlayerTracker_C_Add_Game_Played_Params Parms{};

	Parms.GameMode = GameMode;
	Parms.Won = Won;
	Parms.Cursed = Cursed;
	Parms.Con_Games_Won = Con_Games_Won;
	Parms.Con_Games_Played = Con_Games_Played;
	Parms.Won_Conquest_Game = Won_Conquest_Game;
	Parms.Won_Cursed_Game = Won_Cursed_Game;
	Parms.Cursed_Games_Won = Cursed_Games_Won;
	Parms.Cursed_Games_Played = Cursed_Games_Played;
	Parms.Won_BR_Game = Won_BR_Game;
	Parms.BR_Games_Won = BR_Games_Won;
	Parms.BR_Games_Played = BR_Games_Played;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Process_XP_and_Write_Player_and_Match_Data_to_Server_GainedLevels = CallFunc_Process_XP_and_Write_Player_and_Match_Data_to_Server_GainedLevels;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.K2Node_MakeStruct_ST_PlayerTrackerExperience_Data = K2Node_MakeStruct_ST_PlayerTrackerExperience_Data;

	UObject::ProcessEvent(Func, &Parms);

	if (GainedLevels != nullptr)
		*GainedLevels = std::move(Parms.GainedLevels);

}


// Function PlayerTracker.PlayerTracker_C.CheckForEXPFarming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScoreGained                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              XpPerMinuteTreshold                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_DisconnectPopup_C*       CallFunc_Custom_Popup_UI_element                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerTracker_C::CheckForEXPFarming(int32 ScoreGained, int32 Duration, float XpPerMinuteTreshold, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UUI_DisconnectPopup_C* CallFunc_Custom_Popup_UI_element, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTracker_C", "CheckForEXPFarming");

	Params::UPlayerTracker_C_CheckForEXPFarming_Params Parms{};

	Parms.ScoreGained = ScoreGained;
	Parms.Duration = Duration;
	Parms.XpPerMinuteTreshold = XpPerMinuteTreshold;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Custom_Popup_UI_element = CallFunc_Custom_Popup_UI_element;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerTracker.PlayerTracker_C.OnRep_Experience_Data
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void UPlayerTracker_C::OnRep_Experience_Data(const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTracker_C", "OnRep_Experience_Data");

	Params::UPlayerTracker_C_OnRep_Experience_Data_Params Parms{};

	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerTracker.PlayerTracker_C.ProcessLevelRewards
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_PlayerTrackerExperience_DataExperienceData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<int32>                      GainedLevels                                                     (Parm, OutParm)
// TArray<int32>                      CallFunc_GetGainedlevelsArray_GainedLevels                       (ReferenceParm)
// bool                               CallFunc_WithEditor_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerTracker_C::ProcessLevelRewards(const struct FST_PlayerTrackerExperience_Data& ExperienceData, TArray<int32>* GainedLevels, TArray<int32>& CallFunc_GetGainedlevelsArray_GainedLevels, bool CallFunc_WithEditor_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTracker_C", "ProcessLevelRewards");

	Params::UPlayerTracker_C_ProcessLevelRewards_Params Parms{};

	Parms.ExperienceData = ExperienceData;
	Parms.CallFunc_GetGainedlevelsArray_GainedLevels = CallFunc_GetGainedlevelsArray_GainedLevels;
	Parms.CallFunc_WithEditor_ReturnValue = CallFunc_WithEditor_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GainedLevels != nullptr)
		*GainedLevels = std::move(Parms.GainedLevels);

}


// Function PlayerTracker.PlayerTracker_C.ProcessPlayerDataFromServer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*          Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           VaRestResponse                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           CallFunc_GetResponseObject_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_EncodeJsonToSingleString_ReturnValue                    (ZeroConstructor, HasGetValueTypeHash)
// enum class EVaRestRequestStatus    CallFunc_GetStatus_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVaRestJsonObject*           CallFunc_GetResponseObject_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// TArray<class UVaRestJsonObject*>   CallFunc_GetObjectArrayField_ReturnValue                         (ReferenceParm)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetStringField_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue_2                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue_3                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue_4                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue_5                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue_6                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue_7                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue_8                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue_9                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_8                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_PlayerTrackerExperience_DataK2Node_MakeStruct_ST_PlayerTrackerExperience_Data                (ZeroConstructor, HasGetValueTypeHash)
// struct FST_PlayerTrackerExperience_DataK2Node_MakeStruct_ST_PlayerTrackerExperience_Data_1              (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerTracker_C::ProcessPlayerDataFromServer(class UVaRestRequestJSON* Response, class UVaRestJsonObject* VaRestResponse, class UVaRestJsonObject* CallFunc_GetResponseObject_ReturnValue, const class FString& CallFunc_EncodeJsonToSingleString_ReturnValue, enum class EVaRestRequestStatus CallFunc_GetStatus_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UVaRestJsonObject* CallFunc_GetResponseObject_ReturnValue_1, const class FString& CallFunc_GetStringField_ReturnValue, TArray<class UVaRestJsonObject*>& CallFunc_GetObjectArrayField_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, class UVaRestJsonObject* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue_1, const class FString& CallFunc_GetStringField_ReturnValue_2, const class FString& CallFunc_GetStringField_ReturnValue_3, int32 CallFunc_Conv_StringToInt_ReturnValue_1, int32 CallFunc_Conv_StringToInt_ReturnValue_2, const class FString& CallFunc_GetStringField_ReturnValue_4, const class FString& CallFunc_GetStringField_ReturnValue_5, int32 CallFunc_Conv_StringToInt_ReturnValue_3, int32 CallFunc_Conv_StringToInt_ReturnValue_4, const class FString& CallFunc_GetStringField_ReturnValue_6, const class FString& CallFunc_GetStringField_ReturnValue_7, int32 CallFunc_Conv_StringToInt_ReturnValue_5, int32 CallFunc_Conv_StringToInt_ReturnValue_6, const class FString& CallFunc_GetStringField_ReturnValue_8, const class FString& CallFunc_GetStringField_ReturnValue_9, int32 CallFunc_Conv_StringToInt_ReturnValue_7, int32 CallFunc_Conv_StringToInt_ReturnValue_8, const struct FST_PlayerTrackerExperience_Data& K2Node_MakeStruct_ST_PlayerTrackerExperience_Data, const struct FST_PlayerTrackerExperience_Data& K2Node_MakeStruct_ST_PlayerTrackerExperience_Data_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTracker_C", "ProcessPlayerDataFromServer");

	Params::UPlayerTracker_C_ProcessPlayerDataFromServer_Params Parms{};

	Parms.Response = Response;
	Parms.VaRestResponse = VaRestResponse;
	Parms.CallFunc_GetResponseObject_ReturnValue = CallFunc_GetResponseObject_ReturnValue;
	Parms.CallFunc_EncodeJsonToSingleString_ReturnValue = CallFunc_EncodeJsonToSingleString_ReturnValue;
	Parms.CallFunc_GetStatus_ReturnValue = CallFunc_GetStatus_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetResponseObject_ReturnValue_1 = CallFunc_GetResponseObject_ReturnValue_1;
	Parms.CallFunc_GetStringField_ReturnValue = CallFunc_GetStringField_ReturnValue;
	Parms.CallFunc_GetObjectArrayField_ReturnValue = CallFunc_GetObjectArrayField_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetStringField_ReturnValue_1 = CallFunc_GetStringField_ReturnValue_1;
	Parms.CallFunc_GetStringField_ReturnValue_2 = CallFunc_GetStringField_ReturnValue_2;
	Parms.CallFunc_GetStringField_ReturnValue_3 = CallFunc_GetStringField_ReturnValue_3;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_2 = CallFunc_Conv_StringToInt_ReturnValue_2;
	Parms.CallFunc_GetStringField_ReturnValue_4 = CallFunc_GetStringField_ReturnValue_4;
	Parms.CallFunc_GetStringField_ReturnValue_5 = CallFunc_GetStringField_ReturnValue_5;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_3 = CallFunc_Conv_StringToInt_ReturnValue_3;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_4 = CallFunc_Conv_StringToInt_ReturnValue_4;
	Parms.CallFunc_GetStringField_ReturnValue_6 = CallFunc_GetStringField_ReturnValue_6;
	Parms.CallFunc_GetStringField_ReturnValue_7 = CallFunc_GetStringField_ReturnValue_7;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_5 = CallFunc_Conv_StringToInt_ReturnValue_5;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_6 = CallFunc_Conv_StringToInt_ReturnValue_6;
	Parms.CallFunc_GetStringField_ReturnValue_8 = CallFunc_GetStringField_ReturnValue_8;
	Parms.CallFunc_GetStringField_ReturnValue_9 = CallFunc_GetStringField_ReturnValue_9;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_7 = CallFunc_Conv_StringToInt_ReturnValue_7;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_8 = CallFunc_Conv_StringToInt_ReturnValue_8;
	Parms.K2Node_MakeStruct_ST_PlayerTrackerExperience_Data = K2Node_MakeStruct_ST_PlayerTrackerExperience_Data;
	Parms.K2Node_MakeStruct_ST_PlayerTrackerExperience_Data_1 = K2Node_MakeStruct_ST_PlayerTrackerExperience_Data_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerTracker.PlayerTracker_C.ReadPlayerFromServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Url_Extension                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           Json_Object                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestRequestJSON*          Json_Request                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Primary_Account_ID_Account_ID                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEOS_PlayerState_C*          K2Node_DynamicCast_AsEOS_Player_State                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UVaRestSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UVaRestRequestJSON*          CallFunc_ConstructVaRestRequestExt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           CallFunc_ConstructVaRestJsonObject_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerTracker_C::ReadPlayerFromServer(const class FString& Url_Extension, class UVaRestJsonObject* Json_Object, class UVaRestRequestJSON* Json_Request, int32 Temp_int_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, const class FString& CallFunc_Get_Primary_Account_ID_Account_ID, bool CallFunc_IsEmpty_ReturnValue, class AEOS_PlayerState_C* K2Node_DynamicCast_AsEOS_Player_State, bool K2Node_DynamicCast_bSuccess, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_1, bool CallFunc_IsEmpty_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UVaRestSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UVaRestRequestJSON* CallFunc_ConstructVaRestRequestExt_ReturnValue, class UVaRestJsonObject* CallFunc_ConstructVaRestJsonObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTracker_C", "ReadPlayerFromServer");

	Params::UPlayerTracker_C_ReadPlayerFromServer_Params Parms{};

	Parms.Url_Extension = Url_Extension;
	Parms.Json_Object = Json_Object;
	Parms.Json_Request = Json_Request;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance;
	Parms.CallFunc_Get_Primary_Account_ID_Account_ID = CallFunc_Get_Primary_Account_ID_Account_ID;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.K2Node_DynamicCast_AsEOS_Player_State = K2Node_DynamicCast_AsEOS_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_1 = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_1;
	Parms.CallFunc_IsEmpty_ReturnValue_1 = CallFunc_IsEmpty_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_ConstructVaRestRequestExt_ReturnValue = CallFunc_ConstructVaRestRequestExt_ReturnValue;
	Parms.CallFunc_ConstructVaRestJsonObject_ReturnValue = CallFunc_ConstructVaRestJsonObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerTracker.PlayerTracker_C.WriteMatchDetailsToServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestJsonObject*           Json_Score_Object                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEOS_PlayerState_C*          K2Node_DynamicCast_AsEOS_Player_State                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVaRestJsonObject*           CallFunc_ConstructVaRestJsonObject_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WithEditor_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPlayTime_playTime                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPlayTime_playTime_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerTracker_C::WriteMatchDetailsToServer(class UVaRestJsonObject* Json_Score_Object, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, class UVaRestSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class AEOS_PlayerState_C* K2Node_DynamicCast_AsEOS_Player_State, bool K2Node_DynamicCast_bSuccess, class UVaRestJsonObject* CallFunc_ConstructVaRestJsonObject_ReturnValue, bool CallFunc_WithEditor_ReturnValue, int32 CallFunc_GetPlayTime_playTime, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GetPlayTime_playTime_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTracker_C", "WriteMatchDetailsToServer");

	Params::UPlayerTracker_C_WriteMatchDetailsToServer_Params Parms{};

	Parms.Json_Score_Object = Json_Score_Object;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_DynamicCast_AsEOS_Player_State = K2Node_DynamicCast_AsEOS_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ConstructVaRestJsonObject_ReturnValue = CallFunc_ConstructVaRestJsonObject_ReturnValue;
	Parms.CallFunc_WithEditor_ReturnValue = CallFunc_WithEditor_ReturnValue;
	Parms.CallFunc_GetPlayTime_playTime = CallFunc_GetPlayTime_playTime;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetPlayTime_playTime_1 = CallFunc_GetPlayTime_playTime_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerTracker.PlayerTracker_C.ProcessScoreGained
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      GainedLevels                                                     (Parm, OutParm)
// struct FST_PlayerTrackerExperience_DataTemp_Player_Experience_Data                                      (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_ProcessLevelRewards_GainedLevels                        (ReferenceParm)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FST_PlayerTrackerExperience_DataK2Node_MakeStruct_ST_PlayerTrackerExperience_Data                (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetScore_Score                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerTracker_C::ProcessScoreGained(TArray<int32>* GainedLevels, const struct FST_PlayerTrackerExperience_Data& Temp_Player_Experience_Data, TArray<int32>& CallFunc_ProcessLevelRewards_GainedLevels, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FST_PlayerTrackerExperience_Data& K2Node_MakeStruct_ST_PlayerTrackerExperience_Data, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetScore_Score, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTracker_C", "ProcessScoreGained");

	Params::UPlayerTracker_C_ProcessScoreGained_Params Parms{};

	Parms.Temp_Player_Experience_Data = Temp_Player_Experience_Data;
	Parms.CallFunc_ProcessLevelRewards_GainedLevels = CallFunc_ProcessLevelRewards_GainedLevels;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_MakeStruct_ST_PlayerTrackerExperience_Data = K2Node_MakeStruct_ST_PlayerTrackerExperience_Data;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetScore_Score = CallFunc_GetScore_Score;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GainedLevels != nullptr)
		*GainedLevels = std::move(Parms.GainedLevels);

}


// Function PlayerTracker.PlayerTracker_C.WritePlayerToServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      First_Seen                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UVaRestRequestJSON*          Json_Request                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           Json_Score_Object                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WithEditor_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class AEOS_PlayerState_C*          K2Node_DynamicCast_AsEOS_Player_State                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_RegexReplace_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Now_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Now_ReturnValue_1                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_DateTime_ToString_String                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_DateTime_ToString_String_1                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_EncodeJsonToSingleString_ReturnValue                    (ZeroConstructor, HasGetValueTypeHash)
// class UVaRestSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVaRestJsonObject*           CallFunc_ConstructVaRestJsonObject_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVaRestSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVaRestRequestJSON*          CallFunc_ConstructVaRestRequestExt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerTracker_C::WritePlayerToServer(const class FString& First_Seen, class UVaRestRequestJSON* Json_Request, class UVaRestJsonObject* Json_Score_Object, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, bool CallFunc_WithEditor_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class AEOS_PlayerState_C* K2Node_DynamicCast_AsEOS_Player_State, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_RegexReplace_ReturnValue, const class FString& CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue_1, const class FString& CallFunc_DateTime_ToString_String, const class FString& CallFunc_DateTime_ToString_String_1, const class FString& CallFunc_EncodeJsonToSingleString_ReturnValue, class UVaRestSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UVaRestJsonObject* CallFunc_ConstructVaRestJsonObject_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class UVaRestSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UVaRestRequestJSON* CallFunc_ConstructVaRestRequestExt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTracker_C", "WritePlayerToServer");

	Params::UPlayerTracker_C_WritePlayerToServer_Params Parms{};

	Parms.First_Seen = First_Seen;
	Parms.Json_Request = Json_Request;
	Parms.Json_Score_Object = Json_Score_Object;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance;
	Parms.CallFunc_WithEditor_ReturnValue = CallFunc_WithEditor_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.K2Node_DynamicCast_AsEOS_Player_State = K2Node_DynamicCast_AsEOS_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RegexReplace_ReturnValue = CallFunc_RegexReplace_ReturnValue;
	Parms.CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue = CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue;
	Parms.CallFunc_Now_ReturnValue = CallFunc_Now_ReturnValue;
	Parms.CallFunc_Now_ReturnValue_1 = CallFunc_Now_ReturnValue_1;
	Parms.CallFunc_DateTime_ToString_String = CallFunc_DateTime_ToString_String;
	Parms.CallFunc_DateTime_ToString_String_1 = CallFunc_DateTime_ToString_String_1;
	Parms.CallFunc_EncodeJsonToSingleString_ReturnValue = CallFunc_EncodeJsonToSingleString_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_ConstructVaRestJsonObject_ReturnValue = CallFunc_ConstructVaRestJsonObject_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_ConstructVaRestRequestExt_ReturnValue = CallFunc_ConstructVaRestRequestExt_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerTracker.PlayerTracker_C.SetStartPlayTimeNow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                   CallFunc_Now_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPlayerTracker_C::SetStartPlayTimeNow(const struct FDateTime& CallFunc_Now_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTracker_C", "SetStartPlayTimeNow");

	Params::UPlayerTracker_C_SetStartPlayTimeNow_Params Parms{};

	Parms.CallFunc_Now_ReturnValue = CallFunc_Now_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerTracker.PlayerTracker_C.Process XP and Write Player and Match Data to Server
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DontRewardXP                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      GainedLevels                                                     (Parm, OutParm)
// class UVaRestJsonObject*           Json_Score_Object                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_ProcessScoreGained_GainedLevels                         (ReferenceParm)

void UPlayerTracker_C::Process_XP_and_Write_Player_and_Match_Data_to_Server(bool DontRewardXP, TArray<int32>* GainedLevels, class UVaRestJsonObject* Json_Score_Object, TArray<int32>& CallFunc_ProcessScoreGained_GainedLevels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTracker_C", "Process XP and Write Player and Match Data to Server");

	Params::UPlayerTracker_C_Process_XP_and_Write_Player_and_Match_Data_to_Server_Params Parms{};

	Parms.DontRewardXP = DontRewardXP;
	Parms.Json_Score_Object = Json_Score_Object;
	Parms.CallFunc_ProcessScoreGained_GainedLevels = CallFunc_ProcessScoreGained_GainedLevels;

	UObject::ProcessEvent(Func, &Parms);

	if (GainedLevels != nullptr)
		*GainedLevels = std::move(Parms.GainedLevels);

}


// Function PlayerTracker.PlayerTracker_C.GetPlayTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Now_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_Subtract_DateTimeDateTime_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalMinutes_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerTracker_C::GetPlayTime(int32* PlayTime, const struct FDateTime& CallFunc_Now_ReturnValue, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, float CallFunc_GetTotalMinutes_ReturnValue, int32 CallFunc_FFloor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTracker_C", "GetPlayTime");

	Params::UPlayerTracker_C_GetPlayTime_Params Parms{};

	Parms.CallFunc_Now_ReturnValue = CallFunc_Now_ReturnValue;
	Parms.CallFunc_Subtract_DateTimeDateTime_ReturnValue = CallFunc_Subtract_DateTimeDateTime_ReturnValue;
	Parms.CallFunc_GetTotalMinutes_ReturnValue = CallFunc_GetTotalMinutes_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayTime != nullptr)
		*PlayTime = Parms.PlayTime;

}


// Function PlayerTracker.PlayerTracker_C.SetStartPlayTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                   StartTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPlayerTracker_C::SetStartPlayTime(const struct FDateTime& StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTracker_C", "SetStartPlayTime");

	Params::UPlayerTracker_C_SetStartPlayTime_Params Parms{};

	Parms.StartTime = StartTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerTracker.PlayerTracker_C.StartTracking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                   CallFunc_Now_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            K2Node_DynamicCast_AsBP_Controller                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerTracker_C::StartTracking(const struct FDateTime& CallFunc_Now_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTracker_C", "StartTracking");

	Params::UPlayerTracker_C_StartTracking_Params Parms{};

	Parms.CallFunc_Now_ReturnValue = CallFunc_Now_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Controller = K2Node_DynamicCast_AsBP_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerTracker.PlayerTracker_C.OC_Show Levels
// (Net, NetReliable, HasOutParams, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      Received_Levels                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPlayerTracker_C::OC_Show_Levels(TArray<int32>& Received_Levels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTracker_C", "OC_Show Levels");

	Params::UPlayerTracker_C_OC_Show_Levels_Params Parms{};

	Parms.Received_Levels = Received_Levels;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerTracker.PlayerTracker_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UPlayerTracker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTracker_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerTracker.PlayerTracker_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerTracker_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTracker_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerTracker.PlayerTracker_C.ExecuteUbergraph_PlayerTracker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_CustomEvent_Received_Levels                               (ConstParm, ReferenceParm)
// class ABP_BaseController_C*        K2Node_DynamicCast_AsBP_Base_Controller                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerTracker_C::ExecuteUbergraph_PlayerTracker(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TArray<int32>& K2Node_CustomEvent_Received_Levels, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTracker_C", "ExecuteUbergraph_PlayerTracker");

	Params::UPlayerTracker_C_ExecuteUbergraph_PlayerTracker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_CustomEvent_Received_Levels = K2Node_CustomEvent_Received_Levels;
	Parms.K2Node_DynamicCast_AsBP_Base_Controller = K2Node_DynamicCast_AsBP_Base_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerTracker.PlayerTracker_C.Received Player Experience Data__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_PlayerTrackerExperience_DataExperience_Data                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UPlayerTracker_C::Received_Player_Experience_Data__DelegateSignature(const struct FST_PlayerTrackerExperience_Data& Experience_Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTracker_C", "Received Player Experience Data__DelegateSignature");

	Params::UPlayerTracker_C_Received_Player_Experience_Data__DelegateSignature_Params Parms{};

	Parms.Experience_Data = Experience_Data;

	UObject::ProcessEvent(Func, &Parms);

}

}


