#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x188 (0x1B0 - 0x28)
// BlueprintGeneratedClass EOS_SessionReference.EOS_SessionReference_C
class UEOS_SessionReference_C : public UObject
{
public:
	struct FOnlineSessionSearchResultBP          Session;                                           // 0x28(0x188)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UEOS_SessionReference_C* GetDefaultObj();

	void Is_Matchmaking_Server_(bool* Found, bool* Match_Making, class FName Temp_name_Variable, const struct FOnlineSessionSettingBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Get_Session_Name(bool* Found, class FString* Server_Name, class FName Temp_name_Variable, const struct FOnlineSessionSettingBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Get_GameMode(bool* Found, enum class E_GameModes* Game_Mode, class FName Temp_name_Variable, const struct FOnlineSessionSettingBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue);
	void Get_Map(bool* Found, class FString* Map, class FName Temp_name_Variable, const struct FOnlineSessionSettingBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Get_MapName(bool* Found, class FString* Version, class FName Temp_name_Variable, const struct FOnlineSessionSettingBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Get_Password(bool* Found, class FString* Version, class FName Temp_name_Variable, const struct FOnlineSessionSettingBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Get_Version(bool* Found, class FString* Version, class FName Temp_name_Variable, const struct FOnlineSessionSettingBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Get_Session_Ping(int32* Ping_in_ms);
	void Get_Open_Crew_Slot_Count(int32* Open_Crew_Slots, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void Is_Empty_(bool* Session_is_Empty, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Is_Full_(bool* Session_is_Full, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Get_Max_Player_Count(int32* Player_Count);
	void Get_Player_Count(int32* Player_Count, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void Get_Time_of_Day(bool* Found, enum class E_TimesOfDay* Time_Of_Day, class FName Temp_name_Variable, const struct FOnlineSessionSettingBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue);
	void Get_Session_State(bool* Found, enum class ESession_State* Current_Session_State, class FName Temp_name_Variable, const struct FOnlineSessionSettingBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue);
	void Has_Password_(bool* Found, bool* HasPassword, class FName Temp_name_Variable, const struct FOnlineSessionSettingBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Get_Region(bool* Found, class FString* Region, class FName Temp_name_Variable, const struct FOnlineSessionSettingBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Is_Dedicated_Server_(bool* Found_Attribute, bool* Dedicated_Server, class FName Temp_name_Variable, const struct FOnlineSessionSettingBP& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Get_Session_Id(class FString* Session_ID);
};

}


