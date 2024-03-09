#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Team_Crew_Ship_Member_State.Team_Crew_Ship_Member_State_C
// (None)

class UClass* UTeam_Crew_Ship_Member_State_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Team_Crew_Ship_Member_State_C");

	return Clss;
}


// Team_Crew_Ship_Member_State_C Team_Crew_Ship_Member_State.Default__Team_Crew_Ship_Member_State_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTeam_Crew_Ship_Member_State_C* UTeam_Crew_Ship_Member_State_C::GetDefaultObj()
{
	static class UTeam_Crew_Ship_Member_State_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTeam_Crew_Ship_Member_State_C*>(UTeam_Crew_Ship_Member_State_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Team_Crew_Ship_Member_State.Team_Crew_Ship_Member_State_C.IsSpectator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Is_Spectator                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeam_Crew_Ship_Member_State_C::IsSpectator(bool* Is_Spectator, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Team_Crew_Ship_Member_State_C", "IsSpectator");

	Params::UTeam_Crew_Ship_Member_State_C_IsSpectator_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Spectator != nullptr)
		*Is_Spectator = Parms.Is_Spectator;

}


// Function Team_Crew_Ship_Member_State.Team_Crew_Ship_Member_State_C.Print Values
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)

void UTeam_Crew_Ship_Member_State_C::Print_Values(const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Team_Crew_Ship_Member_State_C", "Print Values");

	Params::UTeam_Crew_Ship_Member_State_C_Print_Values_Params Parms{};

	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Team_Crew_Ship_Member_State.Team_Crew_Ship_Member_State_C.Set Base Parameters to Mine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAlpha_PlayerState_C*        CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Set_Base_Parameters_Output_Team_ID                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Set_Base_Parameters_Output_Crew_ID                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Set_Base_Parameters_Output_Ship_ID                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Set_Base_Parameters_Output_Crew_Member_ID               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeam_Crew_Ship_Member_State_C::Set_Base_Parameters_to_Mine(class AAlpha_PlayerState_C* CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State, int32 CallFunc_Set_Base_Parameters_Output_Team_ID, int32 CallFunc_Set_Base_Parameters_Output_Crew_ID, int32 CallFunc_Set_Base_Parameters_Output_Ship_ID, int32 CallFunc_Set_Base_Parameters_Output_Crew_Member_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Team_Crew_Ship_Member_State_C", "Set Base Parameters to Mine");

	Params::UTeam_Crew_Ship_Member_State_C_Set_Base_Parameters_to_Mine_Params Parms{};

	Parms.CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State = CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State;
	Parms.CallFunc_Set_Base_Parameters_Output_Team_ID = CallFunc_Set_Base_Parameters_Output_Team_ID;
	Parms.CallFunc_Set_Base_Parameters_Output_Crew_ID = CallFunc_Set_Base_Parameters_Output_Crew_ID;
	Parms.CallFunc_Set_Base_Parameters_Output_Ship_ID = CallFunc_Set_Base_Parameters_Output_Ship_ID;
	Parms.CallFunc_Set_Base_Parameters_Output_Crew_Member_ID = CallFunc_Set_Base_Parameters_Output_Crew_Member_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Team_Crew_Ship_Member_State.Team_Crew_Ship_Member_State_C.Set Base Parameters from Other
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTeam_Crew_Ship_Member_State_C*Other_Ship_Crew_Member_State                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Set_Base_Parameters_Output_Team_ID                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Set_Base_Parameters_Output_Crew_ID                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Set_Base_Parameters_Output_Ship_ID                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Set_Base_Parameters_Output_Crew_Member_ID               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeam_Crew_Ship_Member_State_C::Set_Base_Parameters_from_Other(class UTeam_Crew_Ship_Member_State_C* Other_Ship_Crew_Member_State, int32 CallFunc_Set_Base_Parameters_Output_Team_ID, int32 CallFunc_Set_Base_Parameters_Output_Crew_ID, int32 CallFunc_Set_Base_Parameters_Output_Ship_ID, int32 CallFunc_Set_Base_Parameters_Output_Crew_Member_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Team_Crew_Ship_Member_State_C", "Set Base Parameters from Other");

	Params::UTeam_Crew_Ship_Member_State_C_Set_Base_Parameters_from_Other_Params Parms{};

	Parms.Other_Ship_Crew_Member_State = Other_Ship_Crew_Member_State;
	Parms.CallFunc_Set_Base_Parameters_Output_Team_ID = CallFunc_Set_Base_Parameters_Output_Team_ID;
	Parms.CallFunc_Set_Base_Parameters_Output_Crew_ID = CallFunc_Set_Base_Parameters_Output_Crew_ID;
	Parms.CallFunc_Set_Base_Parameters_Output_Ship_ID = CallFunc_Set_Base_Parameters_Output_Ship_ID;
	Parms.CallFunc_Set_Base_Parameters_Output_Crew_Member_ID = CallFunc_Set_Base_Parameters_Output_Crew_Member_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Team_Crew_Ship_Member_State.Team_Crew_Ship_Member_State_C.Set Base Parameters
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Team_ID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Crew_ID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Ship_ID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Crew_Member_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Output_Team_ID                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Output_Crew_ID                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Output_Ship_ID                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Output_Crew_Member_ID                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeam_Crew_Ship_Member_State_C::Set_Base_Parameters(int32 Team_ID, int32 Crew_ID, int32 Ship_ID, int32 Crew_Member_ID, int32* Output_Team_ID, int32* Output_Crew_ID, int32* Output_Ship_ID, int32* Output_Crew_Member_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Team_Crew_Ship_Member_State_C", "Set Base Parameters");

	Params::UTeam_Crew_Ship_Member_State_C_Set_Base_Parameters_Params Parms{};

	Parms.Team_ID = Team_ID;
	Parms.Crew_ID = Crew_ID;
	Parms.Ship_ID = Ship_ID;
	Parms.Crew_Member_ID = Crew_Member_ID;

	UObject::ProcessEvent(Func, &Parms);

	if (Output_Team_ID != nullptr)
		*Output_Team_ID = Parms.Output_Team_ID;

	if (Output_Crew_ID != nullptr)
		*Output_Crew_ID = Parms.Output_Crew_ID;

	if (Output_Ship_ID != nullptr)
		*Output_Ship_ID = Parms.Output_Ship_ID;

	if (Output_Crew_Member_ID != nullptr)
		*Output_Crew_Member_ID = Parms.Output_Crew_Member_ID;

}


// Function Team_Crew_Ship_Member_State.Team_Crew_Ship_Member_State_C.Compare Crew Member ID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTeam_Crew_Ship_Member_State_C*Other_Ship_Crew_Member                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Same_Team_Crew_And_Ship                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTeam_Crew_Ship_Member_State_C*Temp_Ship_Crew_Member_State                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeam_Crew_Ship_Member_State_C::Compare_Crew_Member_ID(class UTeam_Crew_Ship_Member_State_C* Other_Ship_Crew_Member, bool* Is_Same_Team_Crew_And_Ship, class UTeam_Crew_Ship_Member_State_C* Temp_Ship_Crew_Member_State, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Team_Crew_Ship_Member_State_C", "Compare Crew Member ID");

	Params::UTeam_Crew_Ship_Member_State_C_Compare_Crew_Member_ID_Params Parms{};

	Parms.Other_Ship_Crew_Member = Other_Ship_Crew_Member;
	Parms.Temp_Ship_Crew_Member_State = Temp_Ship_Crew_Member_State;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Same_Team_Crew_And_Ship != nullptr)
		*Is_Same_Team_Crew_And_Ship = Parms.Is_Same_Team_Crew_And_Ship;

}


// Function Team_Crew_Ship_Member_State.Team_Crew_Ship_Member_State_C.Compare Ship
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTeam_Crew_Ship_Member_State_C*Other_Ship_Crew_Member                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Same_Team_Crew_And_Ship                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTeam_Crew_Ship_Member_State_C*Temp_Ship_Crew_Member_State                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeam_Crew_Ship_Member_State_C::Compare_Ship(class UTeam_Crew_Ship_Member_State_C* Other_Ship_Crew_Member, bool* Is_Same_Team_Crew_And_Ship, class UTeam_Crew_Ship_Member_State_C* Temp_Ship_Crew_Member_State, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Team_Crew_Ship_Member_State_C", "Compare Ship");

	Params::UTeam_Crew_Ship_Member_State_C_Compare_Ship_Params Parms{};

	Parms.Other_Ship_Crew_Member = Other_Ship_Crew_Member;
	Parms.Temp_Ship_Crew_Member_State = Temp_Ship_Crew_Member_State;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Same_Team_Crew_And_Ship != nullptr)
		*Is_Same_Team_Crew_And_Ship = Parms.Is_Same_Team_Crew_And_Ship;

}


// Function Team_Crew_Ship_Member_State.Team_Crew_Ship_Member_State_C.Compare Crews
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTeam_Crew_Ship_Member_State_C*Other_Ship_Crew_Member                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Same_Team_And_Crew                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTeam_Crew_Ship_Member_State_C*Temp_Ship_Crew_Member_State                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeam_Crew_Ship_Member_State_C::Compare_Crews(class UTeam_Crew_Ship_Member_State_C* Other_Ship_Crew_Member, bool* Is_Same_Team_And_Crew, class UTeam_Crew_Ship_Member_State_C* Temp_Ship_Crew_Member_State, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Team_Crew_Ship_Member_State_C", "Compare Crews");

	Params::UTeam_Crew_Ship_Member_State_C_Compare_Crews_Params Parms{};

	Parms.Other_Ship_Crew_Member = Other_Ship_Crew_Member;
	Parms.Temp_Ship_Crew_Member_State = Temp_Ship_Crew_Member_State;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Same_Team_And_Crew != nullptr)
		*Is_Same_Team_And_Crew = Parms.Is_Same_Team_And_Crew;

}


// Function Team_Crew_Ship_Member_State.Team_Crew_Ship_Member_State_C.Compare Teams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTeam_Crew_Ship_Member_State_C*Other_Ship_Crew_Member                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Same_Team                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeam_Crew_Ship_Member_State_C::Compare_Teams(class UTeam_Crew_Ship_Member_State_C* Other_Ship_Crew_Member, bool* Is_Same_Team, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Team_Crew_Ship_Member_State_C", "Compare Teams");

	Params::UTeam_Crew_Ship_Member_State_C_Compare_Teams_Params Parms{};

	Parms.Other_Ship_Crew_Member = Other_Ship_Crew_Member;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Same_Team != nullptr)
		*Is_Same_Team = Parms.Is_Same_Team;

}


// Function Team_Crew_Ship_Member_State.Team_Crew_Ship_Member_State_C.Is Me?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AAlpha_PlayerState_C*        Player_State                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Me                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Crew_Member_ID_Is_Same_Team_Crew_And_Ship       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeam_Crew_Ship_Member_State_C::Is_Me_(class AAlpha_PlayerState_C* Player_State, bool* Is_Me, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Compare_Crew_Member_ID_Is_Same_Team_Crew_And_Ship)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Team_Crew_Ship_Member_State_C", "Is Me?");

	Params::UTeam_Crew_Ship_Member_State_C_Is_Me__Params Parms{};

	Parms.Player_State = Player_State;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Compare_Crew_Member_ID_Is_Same_Team_Crew_And_Ship = CallFunc_Compare_Crew_Member_ID_Is_Same_Team_Crew_And_Ship;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Me != nullptr)
		*Is_Me = Parms.Is_Me;

}


// Function Team_Crew_Ship_Member_State.Team_Crew_Ship_Member_State_C.Is Member Of My Ship
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AAlpha_PlayerState_C*        Player_State                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Same_Team_Crew_and_Ship                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Ship_Is_Same_Team_Crew_And_Ship                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeam_Crew_Ship_Member_State_C::Is_Member_Of_My_Ship(class AAlpha_PlayerState_C* Player_State, bool* Same_Team_Crew_and_Ship, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Compare_Ship_Is_Same_Team_Crew_And_Ship)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Team_Crew_Ship_Member_State_C", "Is Member Of My Ship");

	Params::UTeam_Crew_Ship_Member_State_C_Is_Member_Of_My_Ship_Params Parms{};

	Parms.Player_State = Player_State;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Compare_Ship_Is_Same_Team_Crew_And_Ship = CallFunc_Compare_Ship_Is_Same_Team_Crew_And_Ship;

	UObject::ProcessEvent(Func, &Parms);

	if (Same_Team_Crew_and_Ship != nullptr)
		*Same_Team_Crew_and_Ship = Parms.Same_Team_Crew_and_Ship;

}


// Function Team_Crew_Ship_Member_State.Team_Crew_Ship_Member_State_C.Is Member Of My Crew
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AAlpha_PlayerState_C*        Player_State                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Same_Team_And_Crew                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Crews_Is_Same_Team_And_Crew                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeam_Crew_Ship_Member_State_C::Is_Member_Of_My_Crew(class AAlpha_PlayerState_C* Player_State, bool* Same_Team_And_Crew, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Compare_Crews_Is_Same_Team_And_Crew)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Team_Crew_Ship_Member_State_C", "Is Member Of My Crew");

	Params::UTeam_Crew_Ship_Member_State_C_Is_Member_Of_My_Crew_Params Parms{};

	Parms.Player_State = Player_State;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Compare_Crews_Is_Same_Team_And_Crew = CallFunc_Compare_Crews_Is_Same_Team_And_Crew;

	UObject::ProcessEvent(Func, &Parms);

	if (Same_Team_And_Crew != nullptr)
		*Same_Team_And_Crew = Parms.Same_Team_And_Crew;

}


// Function Team_Crew_Ship_Member_State.Team_Crew_Ship_Member_State_C.Is Member Of My Team
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AAlpha_PlayerState_C*        Player_State                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SameTeamID                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Teams_Is_Same_Team                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeam_Crew_Ship_Member_State_C::Is_Member_Of_My_Team(class AAlpha_PlayerState_C* Player_State, bool* SameTeamID, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Compare_Teams_Is_Same_Team)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Team_Crew_Ship_Member_State_C", "Is Member Of My Team");

	Params::UTeam_Crew_Ship_Member_State_C_Is_Member_Of_My_Team_Params Parms{};

	Parms.Player_State = Player_State;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Compare_Teams_Is_Same_Team = CallFunc_Compare_Teams_Is_Same_Team;

	UObject::ProcessEvent(Func, &Parms);

	if (SameTeamID != nullptr)
		*SameTeamID = Parms.SameTeamID;

}

}


