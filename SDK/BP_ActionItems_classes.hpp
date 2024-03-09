#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x268 - 0x25C)
// BlueprintGeneratedClass BP_ActionItems.BP_ActionItems_C
class ABP_ActionItems_C : public ABP_ActionBase_C
{
public:
	uint8                                        Pad_1F57[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_ActionItems_C* GetDefaultObj();

	void StartAction();
	void ExecuteUbergraph_BP_ActionItems(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsServer_ReturnValue, TArray<class ABP_PickupBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_PickupBase_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class ABP_RandomItemSpawner_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, TArray<class ABP_Lootcrate_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, class ABP_RandomItemSpawner_C* CallFunc_Array_Get_Item_1, class ABP_Lootcrate_C* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}


