#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9C (0x480 - 0x3E4)
// BlueprintGeneratedClass BP_WoodCrate.BP_WoodCrate_C
class ABP_WoodCrate_C : public ABP_ContainerBase_C
{
public:
	uint8                                        Pad_3452[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Cube1;                                             // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Seagull25;                                      // 0x3F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Seagull24;                                      // 0x400(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Seagull23;                                      // 0x408(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Seagull22;                                      // 0x410(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Seagull21;                                      // 0x418(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Seagull2;                                       // 0x420(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow;                                             // 0x428(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh_0;                                      // 0x430(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x438(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Cube2;                                             // 0x440(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Seaguls;                                           // 0x448(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Cube;                                              // 0x450(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         ScaleUp;                                           // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3453[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WoodAmount;                                        // 0x45C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                        SinkDepth;                                         // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Sinking;                                           // 0x464(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_3454[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_BoatMeshBase_C*                    OverlappingShipRef;                                // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableEmptyCheckCustom;                            // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         NoSeagulls;                                        // 0x471(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_3455[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CrateLocation;                                     // 0x474(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_WoodCrate_C* GetDefaultObj();

	void Add_Items_To_Random_Spawner(class UInventory_C* Inventory, class ABP_RandomItemSpawner_C* Selected_Random_Spawner, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class E_Items CallFunc_GetRandomItem_Item, int32 CallFunc_GetRandomItem_Amount, bool CallFunc_GetRandomItem_IsWeapon, bool CallFunc_GetRandomItem_Succes_, bool CallFunc_AddItem_allItemsAdded, int32 CallFunc_AddItem_amountAdded, bool CallFunc_AddItem_allItemsAdded_1, int32 CallFunc_AddItem_amountAdded_1, bool CallFunc_AddItem_allItemsAdded_2, int32 CallFunc_AddItem_amountAdded_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_RandomItemSpawner_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_AddItem_allItemsAdded_3, int32 CallFunc_AddItem_amountAdded_3, TArray<class ABP_RandomItemSpawner_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABP_RandomItemSpawner_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue);
	void GetRandomUpgrade(enum class E_Items* Upgrade, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void OnRep_Sinking();
	void OnRep_Empty();
	void SetShowWoodState(bool WoodFound, class UInventory_C* ShipInventoryRef, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FST_InventoryArray& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ABP_BoatMeshBase_C* K2Node_DynamicCast_AsBP_Boat_Mesh_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, TArray<class UChildActorComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class UChildActorComponent* CallFunc_Array_Get_Item_1, class ABP_ContainerBase_C* K2Node_DynamicCast_AsBP_Container_Base, bool K2Node_DynamicCast_bSuccess_1);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ShowReceivedIndicatorWood(int32 Amount);
	void UpdateVisualState();
	void SinkCrate();
	void ShowReceivedIndicatorCannonballs(int32 Amount);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void EmptyCrate();
	void ExecuteUbergraph_BP_WoodCrate(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable_1, float K2Node_Event_DeltaSeconds, int32 K2Node_CustomEvent_Amount_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FST_InventoryArray& K2Node_MakeStruct_ST_InventoryArray, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, int32 K2Node_CustomEvent_Amount, float CallFunc_Subtract_FloatFloat_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_2, const struct FST_InventoryArray& K2Node_MakeStruct_ST_InventoryArray_1, class AActor* K2Node_Event_OtherActor_1, class ABP_BoatMeshBase_C* K2Node_DynamicCast_AsBP_Boat_Mesh_Base, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_OtherActor, class ABP_BoatMeshBase_C* K2Node_DynamicCast_AsBP_Boat_Mesh_Base_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ABP_BoatMeshBase_C* K2Node_DynamicCast_AsBP_Boat_Mesh_Base_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_AddItem_allItemsAdded, int32 CallFunc_AddItem_amountAdded, bool CallFunc_RandomBool_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1, bool CallFunc_K2_AttachToComponent_ReturnValue, enum class E_Items CallFunc_GetRandomUpgrade_Upgrade, bool CallFunc_AddItem_allItemsAdded_1, int32 CallFunc_AddItem_amountAdded_1);
};

}

