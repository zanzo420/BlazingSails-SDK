#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_WinningScreen_Teams.UI_WinningScreen_Teams_C
// (None)

class UClass* UUI_WinningScreen_Teams_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_WinningScreen_Teams_C");

	return Clss;
}


// UI_WinningScreen_Teams_C UI_WinningScreen_Teams.Default__UI_WinningScreen_Teams_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_WinningScreen_Teams_C* UUI_WinningScreen_Teams_C::GetDefaultObj()
{
	static class UUI_WinningScreen_Teams_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_WinningScreen_Teams_C*>(UUI_WinningScreen_Teams_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_WinningScreen_Teams.UI_WinningScreen_Teams_C.Team Sorter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     ObjectA                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     ObjectB                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ANewTeamManager_C*           K2Node_DynamicCast_AsNew_Team_Manager                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ANewTeamManager_C*           K2Node_DynamicCast_AsNew_Team_Manager_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_WinningScreen_Teams_C::Team_Sorter(class UObject* ObjectA, class UObject* ObjectB, bool* Result, class ANewTeamManager_C* K2Node_DynamicCast_AsNew_Team_Manager, bool K2Node_DynamicCast_bSuccess, class ANewTeamManager_C* K2Node_DynamicCast_AsNew_Team_Manager_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_WinningScreen_Teams_C", "Team Sorter");

	Params::UUI_WinningScreen_Teams_C_Team_Sorter_Params Parms{};

	Parms.ObjectA = ObjectA;
	Parms.ObjectB = ObjectB;
	Parms.K2Node_DynamicCast_AsNew_Team_Manager = K2Node_DynamicCast_AsNew_Team_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsNew_Team_Manager_1 = K2Node_DynamicCast_AsNew_Team_Manager_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function UI_WinningScreen_Teams.UI_WinningScreen_Teams_C.CheckIfOwnTeam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANewTeamManager_C*           Team                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsOwnTeam                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAlpha_PlayerState_C*        CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Compare_Teams_Is_Same_Team                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_WinningScreen_Teams_C::CheckIfOwnTeam(class ANewTeamManager_C* Team, bool* IsOwnTeam, class AAlpha_PlayerState_C* CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State, bool CallFunc_Compare_Teams_Is_Same_Team)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_WinningScreen_Teams_C", "CheckIfOwnTeam");

	Params::UUI_WinningScreen_Teams_C_CheckIfOwnTeam_Params Parms{};

	Parms.Team = Team;
	Parms.CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State = CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State;
	Parms.CallFunc_Compare_Teams_Is_Same_Team = CallFunc_Compare_Teams_Is_Same_Team;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOwnTeam != nullptr)
		*IsOwnTeam = Parms.IsOwnTeam;

}


// Function UI_WinningScreen_Teams.UI_WinningScreen_Teams_C.GetCrewColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANewTeamManager_C*           Team                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Result                                                           (Parm, OutParm)
// struct FSlateColor                 OwnCrewColor                                                     (Parm, OutParm)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// class AAlpha_PlayerState_C*        CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Compare_Teams_Is_Same_Team                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_WinningScreen_Teams_C::GetCrewColor(class ANewTeamManager_C* Team, class FText* Result, struct FSlateColor* OwnCrewColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class AAlpha_PlayerState_C* CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State, bool CallFunc_Compare_Teams_Is_Same_Team)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_WinningScreen_Teams_C", "GetCrewColor");

	Params::UUI_WinningScreen_Teams_C_GetCrewColor_Params Parms{};

	Parms.Team = Team;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State = CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State;
	Parms.CallFunc_Compare_Teams_Is_Same_Team = CallFunc_Compare_Teams_Is_Same_Team;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (OwnCrewColor != nullptr)
		*OwnCrewColor = std::move(Parms.OwnCrewColor);

}


// Function UI_WinningScreen_Teams.UI_WinningScreen_Teams_C.CheckIfDefeated
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Defeated                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Rank                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Result                                                           (Parm, OutParm)
// bool                               Defeated_                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_WinningScreen_Teams_C::CheckIfDefeated(bool Defeated, int32 Rank, class FText* Result, bool* Defeated_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_WinningScreen_Teams_C", "CheckIfDefeated");

	Params::UUI_WinningScreen_Teams_C_CheckIfDefeated_Params Parms{};

	Parms.Defeated = Defeated;
	Parms.Rank = Rank;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Defeated_ != nullptr)
		*Defeated_ = Parms.Defeated_;

}


// Function UI_WinningScreen_Teams.UI_WinningScreen_Teams_C.FillCrewList_New
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UndefeatedTeams                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ANewTeamManager_C*>   SortedTeams                                                      (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANewTeamManager_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Team_Score_Total_Team_Score                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_GetCrewColor_Result                                     (None)
// struct FSlateColor                 CallFunc_GetCrewColor_OwnCrewColor                               (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_CheckIfDefeated_Result                                  (None)
// bool                               CallFunc_CheckIfDefeated_Defeated_                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUI_WinningScreenTeam_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_WinningScreen_Teams_C::FillCrewList_New(bool UndefeatedTeams, const TArray<class ANewTeamManager_C*>& SortedTeams, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class ANewTeamManager_C* CallFunc_Array_Get_Item, int32 CallFunc_Get_Team_Score_Total_Team_Score, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_GetCrewColor_Result, const struct FSlateColor& CallFunc_GetCrewColor_OwnCrewColor, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_CheckIfDefeated_Result, bool CallFunc_CheckIfDefeated_Defeated_, int32 CallFunc_Array_Length_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUI_WinningScreenTeam_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_WinningScreen_Teams_C", "FillCrewList_New");

	Params::UUI_WinningScreen_Teams_C_FillCrewList_New_Params Parms{};

	Parms.UndefeatedTeams = UndefeatedTeams;
	Parms.SortedTeams = SortedTeams;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Get_Team_Score_Total_Team_Score = CallFunc_Get_Team_Score_Total_Team_Score;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetCrewColor_Result = CallFunc_GetCrewColor_Result;
	Parms.CallFunc_GetCrewColor_OwnCrewColor = CallFunc_GetCrewColor_OwnCrewColor;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_CheckIfDefeated_Result = CallFunc_CheckIfDefeated_Result;
	Parms.CallFunc_CheckIfDefeated_Defeated_ = CallFunc_CheckIfDefeated_Defeated_;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_WinningScreen_Teams.UI_WinningScreen_Teams_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_WinningScreen_Teams_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_WinningScreen_Teams_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_WinningScreen_Teams.UI_WinningScreen_Teams_C.ExecuteUbergraph_UI_WinningScreen_Teams
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_WinningScreen_Teams_C::ExecuteUbergraph_UI_WinningScreen_Teams(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_WinningScreen_Teams_C", "ExecuteUbergraph_UI_WinningScreen_Teams");

	Params::UUI_WinningScreen_Teams_C_ExecuteUbergraph_UI_WinningScreen_Teams_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


