#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x408 - 0x3E4)
// BlueprintGeneratedClass BP_ContainerShip.BP_ContainerShip_C
class ABP_ContainerShip_C : public ABP_ContainerBase_C
{
public:
	uint8                                        Pad_64B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_BoatMeshBase_C*                    ShipRef;                                           // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            AllDeposited;                                      // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_ContainerShip_C* GetDefaultObj();

	void SpawnDuplicateShipDeathContainer(TArray<enum class E_Items>& InstalledUpgrades, const struct FVector& SpawnLocation, bool ItemFoundAddIncremented, const TArray<struct FST_InventoryArray>& TempArray, bool Temp_bool_True_if_break_was_hit_Variable, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ABP_ContainerDestroyedShipChest_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, enum class E_Items CallFunc_Array_Get_Item, const struct FST_InventoryArray& K2Node_MakeStruct_ST_InventoryArray, const struct FST_InventoryArray& CallFunc_Array_Get_Item_1, const struct FST_InventoryArray& CallFunc_Array_Get_Item_2, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FST_InventoryArray& K2Node_MakeStruct_ST_InventoryArray_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue);
	void ReceiveBeginPlay();
	void RefreshQuickAccessPoints();
	void ExecuteUbergraph_BP_ContainerShip(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue_1, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_AddItem_allItemsAdded, int32 CallFunc_AddItem_amountAdded, TArray<class UChildActorComponent*>& CallFunc_GetComponentsByTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UActorComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UChildActorComponent* K2Node_DynamicCast_AsChild_Actor_Component, bool K2Node_DynamicCast_bSuccess, class ABP_InteractableBase_C* K2Node_DynamicCast_AsBP_Interactable_Base, bool K2Node_DynamicCast_bSuccess_1, class ABP_QuickAccesPointBase_C* K2Node_DynamicCast_AsBP_Quick_Acces_Point_Base, bool K2Node_DynamicCast_bSuccess_2);
	void AllDeposited__DelegateSignature();
};

}


