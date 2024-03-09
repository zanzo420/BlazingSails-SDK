#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0xC4 - 0xB0)
// BlueprintGeneratedClass Team_Crew_Ship_Member_State.Team_Crew_Ship_Member_State_C
class UTeam_Crew_Ship_Member_State_C : public UActorComponent
{
public:
	int32                                        Team_ID;                                           // 0xB0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Crew_ID;                                           // 0xB4(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Ship_ID;                                           // 0xB8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Crew_Member_ID;                                    // 0xBC(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        CombinedTeamShipID;                                // 0xC0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTeam_Crew_Ship_Member_State_C* GetDefaultObj();

	void IsSpectator(bool* Is_Spectator, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Print_Values(const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6);
	void Set_Base_Parameters_to_Mine(class AAlpha_PlayerState_C* CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State, int32 CallFunc_Set_Base_Parameters_Output_Team_ID, int32 CallFunc_Set_Base_Parameters_Output_Crew_ID, int32 CallFunc_Set_Base_Parameters_Output_Ship_ID, int32 CallFunc_Set_Base_Parameters_Output_Crew_Member_ID);
	void Set_Base_Parameters_from_Other(class UTeam_Crew_Ship_Member_State_C* Other_Ship_Crew_Member_State, int32 CallFunc_Set_Base_Parameters_Output_Team_ID, int32 CallFunc_Set_Base_Parameters_Output_Crew_ID, int32 CallFunc_Set_Base_Parameters_Output_Ship_ID, int32 CallFunc_Set_Base_Parameters_Output_Crew_Member_ID);
	void Set_Base_Parameters(int32 Team_ID, int32 Crew_ID, int32 Ship_ID, int32 Crew_Member_ID, int32* Output_Team_ID, int32* Output_Crew_ID, int32* Output_Ship_ID, int32* Output_Crew_Member_ID);
	void Compare_Crew_Member_ID(class UTeam_Crew_Ship_Member_State_C* Other_Ship_Crew_Member, bool* Is_Same_Team_Crew_And_Ship, class UTeam_Crew_Ship_Member_State_C* Temp_Ship_Crew_Member_State, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void Compare_Ship(class UTeam_Crew_Ship_Member_State_C* Other_Ship_Crew_Member, bool* Is_Same_Team_Crew_And_Ship, class UTeam_Crew_Ship_Member_State_C* Temp_Ship_Crew_Member_State, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void Compare_Crews(class UTeam_Crew_Ship_Member_State_C* Other_Ship_Crew_Member, bool* Is_Same_Team_And_Crew, class UTeam_Crew_Ship_Member_State_C* Temp_Ship_Crew_Member_State, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void Compare_Teams(class UTeam_Crew_Ship_Member_State_C* Other_Ship_Crew_Member, bool* Is_Same_Team, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Is_Me_(class AAlpha_PlayerState_C* Player_State, bool* Is_Me, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Compare_Crew_Member_ID_Is_Same_Team_Crew_And_Ship);
	void Is_Member_Of_My_Ship(class AAlpha_PlayerState_C* Player_State, bool* Same_Team_Crew_and_Ship, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Compare_Ship_Is_Same_Team_Crew_And_Ship);
	void Is_Member_Of_My_Crew(class AAlpha_PlayerState_C* Player_State, bool* Same_Team_And_Crew, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Compare_Crews_Is_Same_Team_And_Crew);
	void Is_Member_Of_My_Team(class AAlpha_PlayerState_C* Player_State, bool* SameTeamID, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Compare_Teams_Is_Same_Team);
};

}


