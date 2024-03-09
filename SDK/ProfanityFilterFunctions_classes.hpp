#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ProfanityFilterFunctions.ProfanityFilterFunctions_C
class UProfanityFilterFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UProfanityFilterFunctions_C* GetDefaultObj();

	void CheckStringForProfanity(const class FString& String, class UObject* __WorldContext, class FText* FilteredString, bool IsPartOfWhiteListedWord, const TArray<class FString>& ReplacementCharacterArray, const class FString& ReplacementCharacter, int32 NextSubstringStartPos, int32 CurrentSubstringStartPos, const TArray<int32>& AsterixPositions, const class FString& ReplacementString, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_3, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, bool CallFunc_NotEqual_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item, const struct FST_Profanity& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Len_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_FindSubstring_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_6, const class FString& CallFunc_GetSubstring_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, const class FString& Temp_string_Variable, int32 CallFunc_Array_AddUnique_ReturnValue);
};

}


