#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6B (0x388 - 0x31D)
// BlueprintGeneratedClass BP_QuickAccesPointBase.BP_QuickAccesPointBase_C
class ABP_QuickAccesPointBase_C : public ABP_InteractableBase_C
{
public:
	uint8                                        Pad_AF6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      AmountWidget;                                      // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_BoatMeshBase_C*                    ShipRef;                                           // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Amount;                                            // 0x338(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	enum class E_Items                           ItemType;                                          // 0x33C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AF9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StealTimer;                                        // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StealTime;                                         // 0x344(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Stealing;                                          // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AFA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Character_C*                       LocalCharRef;                                      // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShipDestroyed;                                     // 0x358(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ScaleUp;                                           // 0x359(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShowAmountOnlyWhenNotEmpty;                        // 0x35A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AFB[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory_C*                          ShipInventory;                                     // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AmountToGive;                                      // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AFC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                Amounts;                                           // 0x370(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class USoundBase*                            InteractionSound;                                  // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_QuickAccesPointBase_C* GetDefaultObj();

	void OnRep_Amount();
	void GiveResource(enum class E_Items Resource, int32 Amount, int32 ResourceAmountToGive, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FST_InventoryArray& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue, class ABP_BoatMeshBase_C* K2Node_DynamicCast_AsBP_Boat_Mesh_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AddItem_allItemsAdded, int32 CallFunc_AddItem_amountAdded, bool CallFunc_Greater_IntInt_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ShowAmountWidget();
	void HideAmountWidget();
	void RefreshAmount();
	void Activate(class ABP_Character_C* LocalCharacterRef);
	void ResourceReceiveAnimation();
	void ShowHighlight();
	void HideHighlight();
	void StopActivate();
	void S_Activate();
	void GiveResources();
	void ShowReceivedIndicator(int32 Amount, enum class E_Items Resource);
	void AmountRepEvent();
	void PostNotEnoughRoomMessage();
	void ExecuteUbergraph_BP_QuickAccesPointBase(int32 EntryPoint, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class AActor* CallFunc_GetAttachParentActor_ReturnValue, class ABP_BoatMeshBase_C* K2Node_DynamicCast_AsBP_Boat_Mesh_Base, bool K2Node_DynamicCast_bSuccess, TArray<class UChildActorComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class UChildActorComponent* CallFunc_Array_Get_Item, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUI_QuickAccessAmount_C* K2Node_DynamicCast_AsUI_Quick_Access_Amount, bool K2Node_DynamicCast_bSuccess_1, class ABP_ContainerBase_C* K2Node_DynamicCast_AsBP_Container_Base, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_CheckIfInventoryHasItem_HasItem, int32 CallFunc_CheckIfInventoryHasItem_Amount, bool CallFunc_IsDedicatedServer_ReturnValue, class ABP_Character_C* K2Node_Event_LocalCharacterRef, class UUI_InventoryError_C* CallFunc_Create_ReturnValue, int32 K2Node_CustomEvent_Amount, enum class E_Items K2Node_CustomEvent_Resource, const struct FST_InventoryArray& K2Node_MakeStruct_ST_InventoryArray, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue_1, const struct FVector& CallFunc_VInterpTo_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, class AActor* CallFunc_GetAttachParentActor_ReturnValue_1, class ABP_BoatMeshBase_C* K2Node_DynamicCast_AsBP_Boat_Mesh_Base_1, bool K2Node_DynamicCast_bSuccess_3, TArray<class UChildActorComponent*>& CallFunc_GetComponentsByTag_ReturnValue_1, class UChildActorComponent* CallFunc_Array_Get_Item_1, bool CallFunc_CheckIfRoomForItems_hasSpace, int32 CallFunc_CheckIfRoomForItems_amountOfRoom, int32 CallFunc_CheckIfRoomForItems_totalWeight, class ABP_ContainerBase_C* K2Node_DynamicCast_AsBP_Container_Base_1, bool K2Node_DynamicCast_bSuccess_4, class FText Temp_text_Variable, TArray<class UUI_InventoryError_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_InventoryError_C* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CheckIfRoomForItems_hasSpace_1, int32 CallFunc_CheckIfRoomForItems_amountOfRoom_1, int32 CallFunc_CheckIfRoomForItems_totalWeight_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_Compare_Teams_Is_Same_Team, bool CallFunc_Compare_Teams_Is_Same_Team_1);
};

}


