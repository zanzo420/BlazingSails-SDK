#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC7 (0x3E4 - 0x31D)
// BlueprintGeneratedClass BP_ContainerBase.BP_ContainerBase_C
class ABP_ContainerBase_C : public ABP_InteractableBase_C
{
public:
	uint8                                        Pad_3024[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UInventory_C*                          Inventory;                                         // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ContainerMesh;                                     // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_InventoryArray>            ItemArray;                                         // 0x338(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UTexture2D*                            ContainerIcon;                                     // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowTakeAll_WhenSameTeam_;                        // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3025[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             DeltaPrev_0;                                       // 0x364(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3026[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AWaterSettings_C*                      WaterSettingsRef_0;                                // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InitialLocation_0;                                 // 0x378(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               NewLocation_0;                                     // 0x384(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ContainerUsers;                                    // 0x390(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WaterHeight_0;                                     // 0x394(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BuoyancyCheckDelay_0;                              // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InitialPositionReady_0;                            // 0x39C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnableWobbleSkeletalOnFloat;                       // 0x39D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DropOffContainer;                                  // 0x39E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3028[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ContainerTeamID;                                   // 0x3A0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CheckForDistanceBasedAutoClose;                    // 0x3A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         MarkForDestroy;                                    // 0x3A5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnableEmptyCheck;                                  // 0x3A6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AutoCloseWhenTooFar;                               // 0x3A7(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AutoDestroyAfterDelay;                             // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3029[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AutoDestroyDelay;                                  // 0x3AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FloatSkeletonAdded;                                // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         MoveEntireActorWithBuoyancy;                       // 0x3B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_302B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               BuoyancyLocationInterpolated;                      // 0x3B4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FloatUp;                                           // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_302D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FloatSpeed_0;                                      // 0x3C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               BuoyancyWaterSurfaceLocation_0;                    // 0x3C8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FloatSpeedFinal_0;                                 // 0x3D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RandomFloatRotation_0;                             // 0x3D8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_ContainerBase_C* GetDefaultObj();

	void CheckIfContainerInUse(bool* InUse, bool CallFunc_Greater_IntInt_ReturnValue);
	void OnRep_FloatingMode();
	void OnRep_InitialLocation();
	void UserConstructionScript();
	void Init();
	void Activate(class ABP_Character_C* LocalCharacterRef);
	void S_Activate();
	void StopActivate();
	void EventFloatingRep();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ContainerBase(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_CheckIfContainerInUse_InUse, class ABP_Character_C* K2Node_Event_LocalCharacterRef, float K2Node_Event_DeltaSeconds, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_CheckIfContainerInUse_InUse_1, class ABP_ContainerShip_C* K2Node_DynamicCast_AsBP_Container_Ship, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Compare_Teams_Is_Same_Team);
};

}


