#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B (0x348 - 0x31D)
// BlueprintGeneratedClass BP_CannonBallChest.BP_CannonBallChest_C
class ABP_CannonBallChest_C : public ABP_InteractableBase_C
{
public:
	uint8                                        Pad_34C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Cube;                                              // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Cube1;                                             // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         ScaleUp;                                           // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_CannonballChest_C*                 WidgetRef;                                         // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CannonBallChest_C* GetDefaultObj();

	void GiveCannonballs(int32 AntiSailToGive, int32 CannonballsToGive, class UInventory_C* ShipInventoryRef, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_AddItem_allItemsAdded, int32 CallFunc_AddItem_amountAdded, const struct FST_InventoryArray& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue, class ABP_BoatMeshBase_C* K2Node_DynamicCast_AsBP_Boat_Mesh_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FST_InventoryArray& CallFunc_Array_Get_Item_1, bool CallFunc_AddItem_allItemsAdded_1, int32 CallFunc_AddItem_amountAdded_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_1, class AActor* CallFunc_GetAttachParentActor_ReturnValue_1, class ABP_BoatMeshBase_C* K2Node_DynamicCast_AsBP_Boat_Mesh_Base_1, bool K2Node_DynamicCast_bSuccess_1, TArray<class UChildActorComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class UChildActorComponent* CallFunc_Array_Get_Item_2, class ABP_ContainerBase_C* K2Node_DynamicCast_AsBP_Container_Base, bool K2Node_DynamicCast_bSuccess_2);
	void ShowReceivedIndicator(int32 CannonballAmount, int32 AntiSailAmount);
	void CloseChest();
	void Activate(class ABP_Character_C* LocalCharacterRef);
	void ReceiveTick(float DeltaSeconds);
	void S_Activate();
	void ExecuteUbergraph_BP_CannonBallChest(int32 EntryPoint, int32 K2Node_CustomEvent_CannonballAmount, int32 K2Node_CustomEvent_AntiSailAmount, const struct FST_InventoryArray& K2Node_MakeStruct_ST_InventoryArray, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FST_InventoryArray& K2Node_MakeStruct_ST_InventoryArray_1, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, class ABP_Character_C* K2Node_Event_LocalCharacterRef, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_VInterpTo_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue_1, const struct FVector& CallFunc_VInterpTo_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}


