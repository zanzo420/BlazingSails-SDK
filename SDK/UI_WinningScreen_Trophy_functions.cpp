#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_WinningScreen_Trophy.UI_WinningScreen_Trophy_C
// (None)

class UClass* UUI_WinningScreen_Trophy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_WinningScreen_Trophy_C");

	return Clss;
}


// UI_WinningScreen_Trophy_C UI_WinningScreen_Trophy.Default__UI_WinningScreen_Trophy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_WinningScreen_Trophy_C* UUI_WinningScreen_Trophy_C::GetDefaultObj()
{
	static class UUI_WinningScreen_Trophy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_WinningScreen_Trophy_C*>(UUI_WinningScreen_Trophy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_WinningScreen_Trophy.UI_WinningScreen_Trophy_C.Get_Txt_Player_Name_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UUI_WinningScreen_Trophy_C::Get_Txt_Player_Name_Text_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_WinningScreen_Trophy_C", "Get_Txt_Player_Name_Text_0");

	Params::UUI_WinningScreen_Trophy_C_Get_Txt_Player_Name_Text_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_WinningScreen_Trophy.UI_WinningScreen_Trophy_C.Set Best Name
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerState_C*           Player_State                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_WinningScreen_Trophy_C::Set_Best_Name(class ABP_PlayerState_C* Player_State, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_WinningScreen_Trophy_C", "Set Best Name");

	Params::UUI_WinningScreen_Trophy_C_Set_Best_Name_Params Parms{};

	Parms.Player_State = Player_State;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_WinningScreen_Trophy.UI_WinningScreen_Trophy_C.Get Score Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class E_ScoreType             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_4                                         (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_5                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_4                                    (None)
// class FText                        CallFunc_Format_ReturnValue_5                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_6                                         (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_7                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_6                                    (None)
// class FText                        CallFunc_Format_ReturnValue_7                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_8                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_9                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_8                                         (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_9                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_8                                    (None)
// class FText                        CallFunc_Format_ReturnValue_9                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_10                          (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_11                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_10                                        (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_11                                        (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_10                                   (None)
// class FText                        CallFunc_Format_ReturnValue_11                                   (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_12                          (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_13                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_12                                        (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_13                                        (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_12                                   (None)
// class FText                        CallFunc_Format_ReturnValue_13                                   (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_14                          (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_15                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_14                                        (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_15                                        (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_14                                   (None)
// class FText                        CallFunc_Format_ReturnValue_15                                   (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_16                          (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_17                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_16                                        (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_17                                        (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_16                                   (None)
// class FText                        CallFunc_Format_ReturnValue_17                                   (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_18                          (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_19                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_18                                        (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_19                                        (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_18                                   (None)
// class FText                        CallFunc_Format_ReturnValue_19                                   (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_20                          (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_21                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_20                                        (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_21                                        (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_20                                   (None)
// class FText                        CallFunc_Format_ReturnValue_21                                   (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

class FText UUI_WinningScreen_Trophy_C::Get_Score_Text(enum class E_ScoreType Temp_byte_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_2, class FText CallFunc_Format_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_5, class FText CallFunc_Format_ReturnValue_4, class FText CallFunc_Format_ReturnValue_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_7, class FText CallFunc_Format_ReturnValue_6, class FText CallFunc_Format_ReturnValue_7, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_8, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_9, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_8, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_9, class FText CallFunc_Format_ReturnValue_8, class FText CallFunc_Format_ReturnValue_9, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_10, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_11, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_10, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_11, class FText CallFunc_Format_ReturnValue_10, class FText CallFunc_Format_ReturnValue_11, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_12, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_13, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_12, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_13, class FText CallFunc_Format_ReturnValue_12, class FText CallFunc_Format_ReturnValue_13, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_14, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_15, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_14, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_15, class FText CallFunc_Format_ReturnValue_14, class FText CallFunc_Format_ReturnValue_15, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_16, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_17, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_16, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_17, class FText CallFunc_Format_ReturnValue_16, class FText CallFunc_Format_ReturnValue_17, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_18, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_19, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_18, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_19, class FText CallFunc_Format_ReturnValue_18, class FText CallFunc_Format_ReturnValue_19, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_20, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_21, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_20, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_21, class FText CallFunc_Format_ReturnValue_20, class FText CallFunc_Format_ReturnValue_21, bool CallFunc_Greater_IntInt_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_WinningScreen_Trophy_C", "Get Score Text");

	Params::UUI_WinningScreen_Trophy_C_Get_Score_Text_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.CallFunc_Format_ReturnValue_4 = CallFunc_Format_ReturnValue_4;
	Parms.CallFunc_Format_ReturnValue_5 = CallFunc_Format_ReturnValue_5;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.CallFunc_Format_ReturnValue_6 = CallFunc_Format_ReturnValue_6;
	Parms.CallFunc_Format_ReturnValue_7 = CallFunc_Format_ReturnValue_7;
	Parms.K2Node_MakeStruct_FormatArgumentData_8 = K2Node_MakeStruct_FormatArgumentData_8;
	Parms.K2Node_MakeStruct_FormatArgumentData_9 = K2Node_MakeStruct_FormatArgumentData_9;
	Parms.K2Node_MakeArray_Array_8 = K2Node_MakeArray_Array_8;
	Parms.K2Node_MakeArray_Array_9 = K2Node_MakeArray_Array_9;
	Parms.CallFunc_Format_ReturnValue_8 = CallFunc_Format_ReturnValue_8;
	Parms.CallFunc_Format_ReturnValue_9 = CallFunc_Format_ReturnValue_9;
	Parms.K2Node_MakeStruct_FormatArgumentData_10 = K2Node_MakeStruct_FormatArgumentData_10;
	Parms.K2Node_MakeStruct_FormatArgumentData_11 = K2Node_MakeStruct_FormatArgumentData_11;
	Parms.K2Node_MakeArray_Array_10 = K2Node_MakeArray_Array_10;
	Parms.K2Node_MakeArray_Array_11 = K2Node_MakeArray_Array_11;
	Parms.CallFunc_Format_ReturnValue_10 = CallFunc_Format_ReturnValue_10;
	Parms.CallFunc_Format_ReturnValue_11 = CallFunc_Format_ReturnValue_11;
	Parms.K2Node_MakeStruct_FormatArgumentData_12 = K2Node_MakeStruct_FormatArgumentData_12;
	Parms.K2Node_MakeStruct_FormatArgumentData_13 = K2Node_MakeStruct_FormatArgumentData_13;
	Parms.K2Node_MakeArray_Array_12 = K2Node_MakeArray_Array_12;
	Parms.K2Node_MakeArray_Array_13 = K2Node_MakeArray_Array_13;
	Parms.CallFunc_Format_ReturnValue_12 = CallFunc_Format_ReturnValue_12;
	Parms.CallFunc_Format_ReturnValue_13 = CallFunc_Format_ReturnValue_13;
	Parms.K2Node_MakeStruct_FormatArgumentData_14 = K2Node_MakeStruct_FormatArgumentData_14;
	Parms.K2Node_MakeStruct_FormatArgumentData_15 = K2Node_MakeStruct_FormatArgumentData_15;
	Parms.K2Node_MakeArray_Array_14 = K2Node_MakeArray_Array_14;
	Parms.K2Node_MakeArray_Array_15 = K2Node_MakeArray_Array_15;
	Parms.CallFunc_Format_ReturnValue_14 = CallFunc_Format_ReturnValue_14;
	Parms.CallFunc_Format_ReturnValue_15 = CallFunc_Format_ReturnValue_15;
	Parms.K2Node_MakeStruct_FormatArgumentData_16 = K2Node_MakeStruct_FormatArgumentData_16;
	Parms.K2Node_MakeStruct_FormatArgumentData_17 = K2Node_MakeStruct_FormatArgumentData_17;
	Parms.K2Node_MakeArray_Array_16 = K2Node_MakeArray_Array_16;
	Parms.K2Node_MakeArray_Array_17 = K2Node_MakeArray_Array_17;
	Parms.CallFunc_Format_ReturnValue_16 = CallFunc_Format_ReturnValue_16;
	Parms.CallFunc_Format_ReturnValue_17 = CallFunc_Format_ReturnValue_17;
	Parms.K2Node_MakeStruct_FormatArgumentData_18 = K2Node_MakeStruct_FormatArgumentData_18;
	Parms.K2Node_MakeStruct_FormatArgumentData_19 = K2Node_MakeStruct_FormatArgumentData_19;
	Parms.K2Node_MakeArray_Array_18 = K2Node_MakeArray_Array_18;
	Parms.K2Node_MakeArray_Array_19 = K2Node_MakeArray_Array_19;
	Parms.CallFunc_Format_ReturnValue_18 = CallFunc_Format_ReturnValue_18;
	Parms.CallFunc_Format_ReturnValue_19 = CallFunc_Format_ReturnValue_19;
	Parms.K2Node_MakeStruct_FormatArgumentData_20 = K2Node_MakeStruct_FormatArgumentData_20;
	Parms.K2Node_MakeStruct_FormatArgumentData_21 = K2Node_MakeStruct_FormatArgumentData_21;
	Parms.K2Node_MakeArray_Array_20 = K2Node_MakeArray_Array_20;
	Parms.K2Node_MakeArray_Array_21 = K2Node_MakeArray_Array_21;
	Parms.CallFunc_Format_ReturnValue_20 = CallFunc_Format_ReturnValue_20;
	Parms.CallFunc_Format_ReturnValue_21 = CallFunc_Format_ReturnValue_21;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_WinningScreen_Trophy.UI_WinningScreen_Trophy_C.Get Title
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class E_ScoreType             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        Temp_text_Variable_9                                             (None)
// class FText                        Temp_text_Variable_10                                            (None)
// class FText                        Temp_text_Variable_11                                            (None)
// class FText                        Temp_text_Variable_12                                            (None)
// class FText                        Temp_text_Variable_13                                            (None)
// class FText                        Temp_text_Variable_14                                            (None)
// class FText                        Temp_text_Variable_15                                            (None)
// class FText                        Temp_text_Variable_16                                            (None)
// class FText                        Temp_text_Variable_17                                            (None)
// class FText                        Temp_text_Variable_18                                            (None)
// class FText                        Temp_text_Variable_19                                            (None)
// class FText                        Temp_text_Variable_20                                            (None)
// class FText                        Temp_text_Variable_21                                            (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

class FText UUI_WinningScreen_Trophy_C::Get_Title(enum class E_ScoreType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, class FText Temp_text_Variable_17, class FText Temp_text_Variable_18, class FText Temp_text_Variable_19, class FText Temp_text_Variable_20, class FText Temp_text_Variable_21, bool CallFunc_Greater_IntInt_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_WinningScreen_Trophy_C", "Get Title");

	Params::UUI_WinningScreen_Trophy_C_Get_Title_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.Temp_text_Variable_12 = Temp_text_Variable_12;
	Parms.Temp_text_Variable_13 = Temp_text_Variable_13;
	Parms.Temp_text_Variable_14 = Temp_text_Variable_14;
	Parms.Temp_text_Variable_15 = Temp_text_Variable_15;
	Parms.Temp_text_Variable_16 = Temp_text_Variable_16;
	Parms.Temp_text_Variable_17 = Temp_text_Variable_17;
	Parms.Temp_text_Variable_18 = Temp_text_Variable_18;
	Parms.Temp_text_Variable_19 = Temp_text_Variable_19;
	Parms.Temp_text_Variable_20 = Temp_text_Variable_20;
	Parms.Temp_text_Variable_21 = Temp_text_Variable_21;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_WinningScreen_Trophy.UI_WinningScreen_Trophy_C.CheckIfSelf
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class ABP_PlayerState_C*           PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Output                                                           (Parm, OutParm)
// bool                               IsYou                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 SelfColor                                                        (Parm, OutParm)
// struct FLinearColor                SelfColor_SpecifiedColor                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateColorStylingMode  SelfColor_ColorUseRule                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            K2Node_DynamicCast_AsBP_Controller                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_Compare_Teams_Is_Same_Team                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Crews_Is_Same_Team_And_Crew                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_WinningScreen_Trophy_C::CheckIfSelf(class FText Name, class ABP_PlayerState_C* PlayerState, class FText* Output, bool* IsYou, struct FSlateColor* SelfColor, struct FLinearColor* SelfColor_SpecifiedColor, enum class ESlateColorStylingMode* SelfColor_ColorUseRule, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Compare_Teams_Is_Same_Team, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_Compare_Crews_Is_Same_Team_And_Crew)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_WinningScreen_Trophy_C", "CheckIfSelf");

	Params::UUI_WinningScreen_Trophy_C_CheckIfSelf_Params Parms{};

	Parms.Name = Name;
	Parms.PlayerState = PlayerState;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Controller = K2Node_DynamicCast_AsBP_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Compare_Teams_Is_Same_Team = CallFunc_Compare_Teams_Is_Same_Team;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_Compare_Crews_Is_Same_Team_And_Crew = CallFunc_Compare_Crews_Is_Same_Team_And_Crew;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

	if (IsYou != nullptr)
		*IsYou = Parms.IsYou;

	if (SelfColor != nullptr)
		*SelfColor = std::move(Parms.SelfColor);

	if (SelfColor_SpecifiedColor != nullptr)
		*SelfColor_SpecifiedColor = std::move(Parms.SelfColor_SpecifiedColor);

	if (SelfColor_ColorUseRule != nullptr)
		*SelfColor_ColorUseRule = Parms.SelfColor_ColorUseRule;

}


// Function UI_WinningScreen_Trophy.UI_WinningScreen_Trophy_C.Set Best Score
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerState_C*           BestInClass                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HighestCurrentScore                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_Game_State_C*         CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetScore_Score                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_WinningScreen_Trophy_C::Set_Best_Score(class ABP_PlayerState_C* BestInClass, int32 HighestCurrentScore, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class APlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetScore_Score, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_WinningScreen_Trophy_C", "Set Best Score");

	Params::UUI_WinningScreen_Trophy_C_Set_Best_Score_Params Parms{};

	Parms.BestInClass = BestInClass;
	Parms.HighestCurrentScore = HighestCurrentScore;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State = CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetScore_Score = CallFunc_GetScore_Score;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_WinningScreen_Trophy.UI_WinningScreen_Trophy_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_WinningScreen_Trophy_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_WinningScreen_Trophy_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_WinningScreen_Trophy.UI_WinningScreen_Trophy_C.ExecuteUbergraph_UI_WinningScreen_Trophy
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UUI_WinningScreen_Trophy_C::ExecuteUbergraph_UI_WinningScreen_Trophy(int32 EntryPoint, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_WinningScreen_Trophy_C", "ExecuteUbergraph_UI_WinningScreen_Trophy");

	Params::UUI_WinningScreen_Trophy_C_ExecuteUbergraph_UI_WinningScreen_Trophy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}

}


