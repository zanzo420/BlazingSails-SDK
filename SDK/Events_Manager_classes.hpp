#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x50 - 0x28)
// BlueprintGeneratedClass Events_Manager.Events_Manager_C
class UEvents_Manager_C : public UObject
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Has_Active_Event;                                  // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2821[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_Event                             Active_event;                                      // 0x34(0x19)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2822[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEvents_Manager_C* GetDefaultObj();

	void Initialize();
	void ExecuteUbergraph_Events_Manager(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, const struct FDateTime& CallFunc_Now_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const struct FST_Event& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue_1, const struct FDateTime& CallFunc_MakeDateTime_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FDateTime& CallFunc_Add_DateTimeTimespan_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FDateTime& CallFunc_Subtract_DateTimeTimespan_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue_1, const struct FDateTime& CallFunc_Now_ReturnValue_2, bool CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue, bool CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


