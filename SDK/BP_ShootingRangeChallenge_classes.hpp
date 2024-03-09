#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x258 - 0x220)
// BlueprintGeneratedClass BP_ShootingRangeChallenge.BP_ShootingRangeChallenge_C
class ABP_ShootingRangeChallenge_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Practice_Damage_Base_C*>    Targets_To_Hit;                                    // 0x230(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ABP_Practice_Damage_Base_C*>    Already_Hit_Targets;                               // 0x240(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UUI_FinishedShootingRange_C*           WidgetRef;                                         // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ShootingRangeChallenge_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void Did_Damage(bool Head_Shot, int32 Damage_Amount, class ABP_Practice_Damage_Base_C* Damage_Origin);
	void ExecuteUbergraph_BP_ShootingRangeChallenge(int32 EntryPoint, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, const struct FST_TutorialAction& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UUI_FinishedShootingRange_C* CallFunc_Create_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_Practice_Damage_Base_C* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_CustomEvent_Head_Shot, int32 K2Node_CustomEvent_Damage_Amount, class ABP_Practice_Damage_Base_C* K2Node_CustomEvent_Damage_Origin, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


