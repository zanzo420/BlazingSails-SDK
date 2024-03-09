#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Conquest_Alpha_Game_State.Conquest_Alpha_Game_State_C
// (Actor)

class UClass* AConquest_Alpha_Game_State_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Conquest_Alpha_Game_State_C");

	return Clss;
}


// Conquest_Alpha_Game_State_C Conquest_Alpha_Game_State.Default__Conquest_Alpha_Game_State_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AConquest_Alpha_Game_State_C* AConquest_Alpha_Game_State_C::GetDefaultObj()
{
	static class AConquest_Alpha_Game_State_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AConquest_Alpha_Game_State_C*>(AConquest_Alpha_Game_State_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Conquest_Alpha_Game_State.Conquest_Alpha_Game_State_C.Get N random Loadouts
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_Loadout>         Loadouts                                                         (Parm, OutParm)
// struct FST_Loadout                 Current_Random_Loadout                                           (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Amount_of_Items_To_Select                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_Loadout>         Selected_Loadouts                                                (Edit, BlueprintVisible)
// TArray<struct FST_Loadout>         Possible_Loadouts                                                (Edit, BlueprintVisible)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Loadout                 CallFunc_Array_Random_OutItem                                    (HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void AConquest_Alpha_Game_State_C::Get_N_random_Loadouts(int32 Amount, TArray<struct FST_Loadout>* Loadouts, const struct FST_Loadout& Current_Random_Loadout, int32 Amount_of_Items_To_Select, const TArray<struct FST_Loadout>& Selected_Loadouts, const TArray<struct FST_Loadout>& Possible_Loadouts, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Min_ReturnValue, const struct FST_Loadout& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Conquest_Alpha_Game_State_C", "Get N random Loadouts");

	Params::AConquest_Alpha_Game_State_C_Get_N_random_Loadouts_Params Parms{};

	Parms.Amount = Amount;
	Parms.Current_Random_Loadout = Current_Random_Loadout;
	Parms.Amount_of_Items_To_Select = Amount_of_Items_To_Select;
	Parms.Selected_Loadouts = Selected_Loadouts;
	Parms.Possible_Loadouts = Possible_Loadouts;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Loadouts != nullptr)
		*Loadouts = std::move(Parms.Loadouts);

}


// Function Conquest_Alpha_Game_State.Conquest_Alpha_Game_State_C.CheckConquestVictory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Victory                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Losing_Team                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Tie                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              RedTeamWins                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BlueTeamWins                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConquest_Alpha_Game_State_C::CheckConquestVictory(bool* Victory, int32* Losing_Team, bool* Tie, int32 RedTeamWins, int32 BlueTeamWins, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Conquest_Alpha_Game_State_C", "CheckConquestVictory");

	Params::AConquest_Alpha_Game_State_C_CheckConquestVictory_Params Parms{};

	Parms.RedTeamWins = RedTeamWins;
	Parms.BlueTeamWins = BlueTeamWins;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (Victory != nullptr)
		*Victory = Parms.Victory;

	if (Losing_Team != nullptr)
		*Losing_Team = Parms.Losing_Team;

	if (Tie != nullptr)
		*Tie = Parms.Tie;

}


// Function Conquest_Alpha_Game_State.Conquest_Alpha_Game_State_C.Add Round Win
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Team_ID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_GameMode_C*           CallFunc_CurrentGameMode_As_Alpha_Game_Mode                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AConquest_Alpha_GameMode_C*  K2Node_DynamicCast_AsConquest_Alpha_Game_Mode                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Check_If_Game_Should_End_Ending                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_ConquestFlag_C*          CallFunc_Set_Random_Flag_NewConquestFlagRef                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckConquestVictory_Victory                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckConquestVictory_Losing_Team                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckConquestVictory_Tie                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ANewTeamManager_C*           CallFunc_Find_Team_Team                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Find_Team_Found                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AConquest_Alpha_Game_State_C::Add_Round_Win(int32 Team_ID, class AAlpha_GameMode_C* CallFunc_CurrentGameMode_As_Alpha_Game_Mode, class AConquest_Alpha_GameMode_C* K2Node_DynamicCast_AsConquest_Alpha_Game_Mode, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Check_If_Game_Should_End_Ending, class ABP_ConquestFlag_C* CallFunc_Set_Random_Flag_NewConquestFlagRef, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_CheckConquestVictory_Victory, int32 CallFunc_CheckConquestVictory_Losing_Team, bool CallFunc_CheckConquestVictory_Tie, class ANewTeamManager_C* CallFunc_Find_Team_Team, bool CallFunc_Find_Team_Found)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Conquest_Alpha_Game_State_C", "Add Round Win");

	Params::AConquest_Alpha_Game_State_C_Add_Round_Win_Params Parms{};

	Parms.Team_ID = Team_ID;
	Parms.CallFunc_CurrentGameMode_As_Alpha_Game_Mode = CallFunc_CurrentGameMode_As_Alpha_Game_Mode;
	Parms.K2Node_DynamicCast_AsConquest_Alpha_Game_Mode = K2Node_DynamicCast_AsConquest_Alpha_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Check_If_Game_Should_End_Ending = CallFunc_Check_If_Game_Should_End_Ending;
	Parms.CallFunc_Set_Random_Flag_NewConquestFlagRef = CallFunc_Set_Random_Flag_NewConquestFlagRef;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_CheckConquestVictory_Victory = CallFunc_CheckConquestVictory_Victory;
	Parms.CallFunc_CheckConquestVictory_Losing_Team = CallFunc_CheckConquestVictory_Losing_Team;
	Parms.CallFunc_CheckConquestVictory_Tie = CallFunc_CheckConquestVictory_Tie;
	Parms.CallFunc_Find_Team_Team = CallFunc_Find_Team_Team;
	Parms.CallFunc_Find_Team_Found = CallFunc_Find_Team_Found;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Conquest_Alpha_Game_State.Conquest_Alpha_Game_State_C.Validate Team Tickets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Team_ID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void AConquest_Alpha_Game_State_C::Validate_Team_Tickets(int32 Team_ID, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Conquest_Alpha_Game_State_C", "Validate Team Tickets");

	Params::AConquest_Alpha_Game_State_C_Validate_Team_Tickets_Params Parms{};

	Parms.Team_ID = Team_ID;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Conquest_Alpha_Game_State.Conquest_Alpha_Game_State_C.Validate Flag Tickets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAlpha_GameMode_C*           CallFunc_CurrentGameMode_As_Alpha_Game_Mode                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AConquest_Alpha_GameMode_C*  K2Node_DynamicCast_AsConquest_Alpha_Game_Mode                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_ConquestFlag_C*          CallFunc_Set_Random_Flag_NewConquestFlagRef                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConquest_Alpha_Game_State_C::Validate_Flag_Tickets(class AAlpha_GameMode_C* CallFunc_CurrentGameMode_As_Alpha_Game_Mode, class AConquest_Alpha_GameMode_C* K2Node_DynamicCast_AsConquest_Alpha_Game_Mode, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, class ABP_ConquestFlag_C* CallFunc_Set_Random_Flag_NewConquestFlagRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Conquest_Alpha_Game_State_C", "Validate Flag Tickets");

	Params::AConquest_Alpha_Game_State_C_Validate_Flag_Tickets_Params Parms{};

	Parms.CallFunc_CurrentGameMode_As_Alpha_Game_Mode = CallFunc_CurrentGameMode_As_Alpha_Game_Mode;
	Parms.K2Node_DynamicCast_AsConquest_Alpha_Game_Mode = K2Node_DynamicCast_AsConquest_Alpha_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Set_Random_Flag_NewConquestFlagRef = CallFunc_Set_Random_Flag_NewConquestFlagRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Conquest_Alpha_Game_State.Conquest_Alpha_Game_State_C.Deplete Tickets Flag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Team_ID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Current_Team_Tickets                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConquest_Alpha_Game_State_C::Deplete_Tickets_Flag(int32 Team_ID, int32 Current_Team_Tickets, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Conquest_Alpha_Game_State_C", "Deplete Tickets Flag");

	Params::AConquest_Alpha_Game_State_C_Deplete_Tickets_Flag_Params Parms{};

	Parms.Team_ID = Team_ID;
	Parms.Current_Team_Tickets = Current_Team_Tickets;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Conquest_Alpha_Game_State.Conquest_Alpha_Game_State_C.Deplete Tickets Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Team_ID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Current_Team_Tickets                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConquest_Alpha_Game_State_C::Deplete_Tickets_Internal(int32 Team_ID, int32 Amount, int32 Current_Team_Tickets, int32 CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Conquest_Alpha_Game_State_C", "Deplete Tickets Internal");

	Params::AConquest_Alpha_Game_State_C_Deplete_Tickets_Internal_Params Parms{};

	Parms.Team_ID = Team_ID;
	Parms.Amount = Amount;
	Parms.Current_Team_Tickets = Current_Team_Tickets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Conquest_Alpha_Game_State.Conquest_Alpha_Game_State_C.Deplete Tickets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Team_ID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseCustomAmount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Custom_Amount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConquest_Alpha_Game_State_C::Deplete_Tickets(int32 Team_ID, bool UseCustomAmount, int32 Custom_Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Conquest_Alpha_Game_State_C", "Deplete Tickets");

	Params::AConquest_Alpha_Game_State_C_Deplete_Tickets_Params Parms{};

	Parms.Team_ID = Team_ID;
	Parms.UseCustomAmount = UseCustomAmount;
	Parms.Custom_Amount = Custom_Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Conquest_Alpha_Game_State.Conquest_Alpha_Game_State_C.Reset Flag Tickets Amount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AConquest_Alpha_Game_State_C::Reset_Flag_Tickets_Amount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Conquest_Alpha_Game_State_C", "Reset Flag Tickets Amount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Conquest_Alpha_Game_State.Conquest_Alpha_Game_State_C.Reset Teams Tickests Amount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AConquest_Alpha_Game_State_C::Reset_Teams_Tickests_Amount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Conquest_Alpha_Game_State_C", "Reset Teams Tickests Amount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Conquest_Alpha_Game_State.Conquest_Alpha_Game_State_C.MC_BroadCastConquestRoundVictory
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Team_ID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConquest_Alpha_Game_State_C::MC_BroadCastConquestRoundVictory(int32 Team_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Conquest_Alpha_Game_State_C", "MC_BroadCastConquestRoundVictory");

	Params::AConquest_Alpha_Game_State_C_MC_BroadCastConquestRoundVictory_Params Parms{};

	Parms.Team_ID = Team_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Conquest_Alpha_Game_State.Conquest_Alpha_Game_State_C.MC_NewFlagAnnouncement
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewFlagName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void AConquest_Alpha_Game_State_C::MC_NewFlagAnnouncement(class FText NewFlagName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Conquest_Alpha_Game_State_C", "MC_NewFlagAnnouncement");

	Params::AConquest_Alpha_Game_State_C_MC_NewFlagAnnouncement_Params Parms{};

	Parms.NewFlagName = NewFlagName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Conquest_Alpha_Game_State.Conquest_Alpha_Game_State_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AConquest_Alpha_Game_State_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Conquest_Alpha_Game_State_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Conquest_Alpha_Game_State.Conquest_Alpha_Game_State_C.ExecuteUbergraph_Conquest_Alpha_Game_State
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_FlagCaptured_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Team_ID                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_FlagCaptured_C*>  CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UUI_FlagCaptured_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_NewFlagName                                   (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          CallFunc_Current_Game_BP_Instance_AsBP_Game_Instance             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConquest_Alpha_Game_State_C::ExecuteUbergraph_Conquest_Alpha_Game_State(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class UUI_FlagCaptured_C* CallFunc_Create_ReturnValue, int32 K2Node_CustomEvent_Team_ID, TArray<class UUI_FlagCaptured_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_FlagCaptured_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class FText K2Node_CustomEvent_NewFlagName, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_GameInstance_C* CallFunc_Current_Game_BP_Instance_AsBP_Game_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Conquest_Alpha_Game_State_C", "ExecuteUbergraph_Conquest_Alpha_Game_State");

	Params::AConquest_Alpha_Game_State_C_ExecuteUbergraph_Conquest_Alpha_Game_State_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_Team_ID = K2Node_CustomEvent_Team_ID;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CustomEvent_NewFlagName = K2Node_CustomEvent_NewFlagName;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Current_Game_BP_Instance_AsBP_Game_Instance = CallFunc_Current_Game_BP_Instance_AsBP_Game_Instance;

	UObject::ProcessEvent(Func, &Parms);

}

}


