#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x259 - 0x220)
// BlueprintGeneratedClass BP_LootChest.BP_LootChest_C
class ABP_LootChest_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       ChestLockAttachPoint;                              // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       ChestInsideAttachPoint;                            // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalChestMesh;                                 // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class E_ChestTypes                      CurrentChestType;                                  // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A07[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimBP_Chest_C*                       AnimInstanceRef;                                   // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReadyToOpen;                                       // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_LootChest_C* GetDefaultObj();

	void Get_Best_Quality_From_Items(TArray<int32>& Items, int32* Best_Quality, int32 MaxQuality, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FST_NewEOSInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void SetChestAnimation(class UAnimSequenceBase* Animation, bool LoopAnimation, bool CallFunc_IsValid_ReturnValue);
	void SwitchToOtherChest(enum class E_ChestTypes SpecificChest, enum class E_ChestTypes* ChestType, bool* Changed, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void ReceiveBeginPlay();
	void DropNewChest();
	void OpenChest();
	void StowChest();
	void ItemRetrieved(TArray<int32>& New_Items, class UUI_LootChestItems_C* UIRef);
	void PressedOkay();
	void OpeningCanceled();
	void ExecuteUbergraph_BP_LootChest(int32 EntryPoint, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, class UMaterialInterface* Temp_object_Variable_4, class UMaterialInterface* Temp_object_Variable_5, enum class E_ChestTypes Temp_byte_Variable, class USkeletalMesh* Temp_object_Variable_6, class USkeletalMesh* Temp_object_Variable_7, class USkeletalMesh* Temp_object_Variable_8, class USkeletalMesh* Temp_object_Variable_9, class USkeletalMesh* Temp_object_Variable_10, class USkeletalMesh* Temp_object_Variable_11, int32 Temp_int_Variable, class USkeletalMesh* K2Node_Select_Default, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimBP_Chest_C* K2Node_DynamicCast_AsAnim_BP_Chest, bool K2Node_DynamicCast_bSuccess, float CallFunc_PlaySlotAnimation_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, TArray<int32>& K2Node_CustomEvent_new_Items, class UUI_LootChestItems_C* K2Node_CustomEvent_UIRef, int32 CallFunc_Get_Best_Quality_From_Items_Best_Quality, class UMaterialInterface* K2Node_Select_Default_1);
};

}


