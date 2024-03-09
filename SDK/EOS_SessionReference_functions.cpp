#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EOS_SessionReference.EOS_SessionReference_C
// (None)

class UClass* UEOS_SessionReference_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOS_SessionReference_C");

	return Clss;
}


// EOS_SessionReference_C EOS_SessionReference.Default__EOS_SessionReference_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEOS_SessionReference_C* UEOS_SessionReference_C::GetDefaultObj()
{
	static class UEOS_SessionReference_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOS_SessionReference_C*>(UEOS_SessionReference_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EOS_SessionReference.EOS_SessionReference_C.Is Matchmaking Server?
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Match_Making                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineSessionSettingBP     CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_SessionReference_C::Is_Matchmaking_Server_(bool* Found, bool* Match_Making, class FName Temp_name_Variable, const struct FOnlineSessionSettingBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_SessionReference_C", "Is Matchmaking Server?");

	Params::UEOS_SessionReference_C_Is_Matchmaking_Server__Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (Match_Making != nullptr)
		*Match_Making = Parms.Match_Making;

}


// Function EOS_SessionReference.EOS_SessionReference_C.Get Session Name
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Server_Name                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineSessionSettingBP     CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_SessionReference_C::Get_Session_Name(bool* Found, class FString* Server_Name, class FName Temp_name_Variable, const struct FOnlineSessionSettingBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_SessionReference_C", "Get Session Name");

	Params::UEOS_SessionReference_C_Get_Session_Name_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (Server_Name != nullptr)
		*Server_Name = std::move(Parms.Server_Name);

}


// Function EOS_SessionReference.EOS_SessionReference_C.Get GameMode
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_GameModes             Game_Mode                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineSessionSettingBP     CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_SessionReference_C::Get_GameMode(bool* Found, enum class E_GameModes* Game_Mode, class FName Temp_name_Variable, const struct FOnlineSessionSettingBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_SessionReference_C", "Get GameMode");

	Params::UEOS_SessionReference_C_Get_GameMode_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (Game_Mode != nullptr)
		*Game_Mode = Parms.Game_Mode;

}


// Function EOS_SessionReference.EOS_SessionReference_C.Get Map
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Map                                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineSessionSettingBP     CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_SessionReference_C::Get_Map(bool* Found, class FString* Map, class FName Temp_name_Variable, const struct FOnlineSessionSettingBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_SessionReference_C", "Get Map");

	Params::UEOS_SessionReference_C_Get_Map_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (Map != nullptr)
		*Map = std::move(Parms.Map);

}


// Function EOS_SessionReference.EOS_SessionReference_C.Get MapName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Version                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineSessionSettingBP     CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_SessionReference_C::Get_MapName(bool* Found, class FString* Version, class FName Temp_name_Variable, const struct FOnlineSessionSettingBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_SessionReference_C", "Get MapName");

	Params::UEOS_SessionReference_C_Get_MapName_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (Version != nullptr)
		*Version = std::move(Parms.Version);

}


// Function EOS_SessionReference.EOS_SessionReference_C.Get Password
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Version                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineSessionSettingBP     CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_SessionReference_C::Get_Password(bool* Found, class FString* Version, class FName Temp_name_Variable, const struct FOnlineSessionSettingBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_SessionReference_C", "Get Password");

	Params::UEOS_SessionReference_C_Get_Password_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (Version != nullptr)
		*Version = std::move(Parms.Version);

}


// Function EOS_SessionReference.EOS_SessionReference_C.Get Version
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Version                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineSessionSettingBP     CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_SessionReference_C::Get_Version(bool* Found, class FString* Version, class FName Temp_name_Variable, const struct FOnlineSessionSettingBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_SessionReference_C", "Get Version");

	Params::UEOS_SessionReference_C_Get_Version_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (Version != nullptr)
		*Version = std::move(Parms.Version);

}


// Function EOS_SessionReference.EOS_SessionReference_C.Get Session Ping
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Ping_in_ms                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_SessionReference_C::Get_Session_Ping(int32* Ping_in_ms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_SessionReference_C", "Get Session Ping");

	Params::UEOS_SessionReference_C_Get_Session_Ping_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Ping_in_ms != nullptr)
		*Ping_in_ms = Parms.Ping_in_ms;

}


// Function EOS_SessionReference.EOS_SessionReference_C.Get Open Crew Slot Count
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Open_Crew_Slots                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_SessionReference_C::Get_Open_Crew_Slot_Count(int32* Open_Crew_Slots, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_SessionReference_C", "Get Open Crew Slot Count");

	Params::UEOS_SessionReference_C_Get_Open_Crew_Slot_Count_Params Parms{};

	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Open_Crew_Slots != nullptr)
		*Open_Crew_Slots = Parms.Open_Crew_Slots;

}


// Function EOS_SessionReference.EOS_SessionReference_C.Is Empty?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Session_is_Empty                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_SessionReference_C::Is_Empty_(bool* Session_is_Empty, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_SessionReference_C", "Is Empty?");

	Params::UEOS_SessionReference_C_Is_Empty__Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Session_is_Empty != nullptr)
		*Session_is_Empty = Parms.Session_is_Empty;

}


// Function EOS_SessionReference.EOS_SessionReference_C.Is Full?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Session_is_Full                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_SessionReference_C::Is_Full_(bool* Session_is_Full, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_SessionReference_C", "Is Full?");

	Params::UEOS_SessionReference_C_Is_Full__Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Session_is_Full != nullptr)
		*Session_is_Full = Parms.Session_is_Full;

}


// Function EOS_SessionReference.EOS_SessionReference_C.Get Max Player Count
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Player_Count                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_SessionReference_C::Get_Max_Player_Count(int32* Player_Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_SessionReference_C", "Get Max Player Count");

	Params::UEOS_SessionReference_C_Get_Max_Player_Count_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Player_Count != nullptr)
		*Player_Count = Parms.Player_Count;

}


// Function EOS_SessionReference.EOS_SessionReference_C.Get Player Count
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Player_Count                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_SessionReference_C::Get_Player_Count(int32* Player_Count, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_SessionReference_C", "Get Player Count");

	Params::UEOS_SessionReference_C_Get_Player_Count_Params Parms{};

	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Player_Count != nullptr)
		*Player_Count = Parms.Player_Count;

}


// Function EOS_SessionReference.EOS_SessionReference_C.Get Time of Day
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_TimesOfDay            Time_Of_Day                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineSessionSettingBP     CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_SessionReference_C::Get_Time_of_Day(bool* Found, enum class E_TimesOfDay* Time_Of_Day, class FName Temp_name_Variable, const struct FOnlineSessionSettingBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_SessionReference_C", "Get Time of Day");

	Params::UEOS_SessionReference_C_Get_Time_of_Day_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (Time_Of_Day != nullptr)
		*Time_Of_Day = Parms.Time_Of_Day;

}


// Function EOS_SessionReference.EOS_SessionReference_C.Get Session State
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESession_State          Current_Session_State                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineSessionSettingBP     CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEOS_SessionReference_C::Get_Session_State(bool* Found, enum class ESession_State* Current_Session_State, class FName Temp_name_Variable, const struct FOnlineSessionSettingBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_SessionReference_C", "Get Session State");

	Params::UEOS_SessionReference_C_Get_Session_State_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (Current_Session_State != nullptr)
		*Current_Session_State = Parms.Current_Session_State;

}


// Function EOS_SessionReference.EOS_SessionReference_C.Has Password?
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HasPassword                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineSessionSettingBP     CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_SessionReference_C::Has_Password_(bool* Found, bool* HasPassword, class FName Temp_name_Variable, const struct FOnlineSessionSettingBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_SessionReference_C", "Has Password?");

	Params::UEOS_SessionReference_C_Has_Password__Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (HasPassword != nullptr)
		*HasPassword = Parms.HasPassword;

}


// Function EOS_SessionReference.EOS_SessionReference_C.Get Region
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Region                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineSessionSettingBP     CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_SessionReference_C::Get_Region(bool* Found, class FString* Region, class FName Temp_name_Variable, const struct FOnlineSessionSettingBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_SessionReference_C", "Get Region");

	Params::UEOS_SessionReference_C_Get_Region_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (Region != nullptr)
		*Region = std::move(Parms.Region);

}


// Function EOS_SessionReference.EOS_SessionReference_C.Is Dedicated Server?
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Found_Attribute                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Dedicated_Server                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineSessionSettingBP     CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEOS_SessionReference_C::Is_Dedicated_Server_(bool* Found_Attribute, bool* Dedicated_Server, class FName Temp_name_Variable, const struct FOnlineSessionSettingBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_SessionReference_C", "Is Dedicated Server?");

	Params::UEOS_SessionReference_C_Is_Dedicated_Server__Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Found_Attribute != nullptr)
		*Found_Attribute = Parms.Found_Attribute;

	if (Dedicated_Server != nullptr)
		*Dedicated_Server = Parms.Dedicated_Server;

}


// Function EOS_SessionReference.EOS_SessionReference_C.Get Session Id
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Session_ID                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UEOS_SessionReference_C::Get_Session_Id(class FString* Session_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_SessionReference_C", "Get Session Id");

	Params::UEOS_SessionReference_C_Get_Session_Id_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Session_ID != nullptr)
		*Session_ID = std::move(Parms.Session_ID);

}

}


