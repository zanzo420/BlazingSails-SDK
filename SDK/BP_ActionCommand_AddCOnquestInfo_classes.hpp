#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x290 - 0x25C)
// BlueprintGeneratedClass BP_ActionCommand_AddCOnquestInfo.BP_ActionCommand_AddCOnquestInfo_C
class ABP_ActionCommand_AddCOnquestInfo_C : public ABP_ActionBase_C
{
public:
	uint8                                        Pad_35DD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class FString>                        CommandList;                                       // 0x268(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                Testlist;                                          // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UUI_Chat_C*                            ChatRef;                                           // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ActionCommand_AddCOnquestInfo_C* GetDefaultObj();

	void GetListOfCommands(class FString* List, const class FString& ListTemp, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void StartAction();
	void ExecuteUbergraph_BP_ActionCommand_AddCOnquestInfo(int32 EntryPoint, class UUI_COnquestInfo_Overlay_C* CallFunc_Create_ReturnValue, TArray<class UUI_COnquestInfo_Overlay_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_COnquestInfo_Overlay_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
};

}


