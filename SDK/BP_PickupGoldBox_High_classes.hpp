#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x37 (0x400 - 0x3C9)
// BlueprintGeneratedClass BP_PickupGoldBox_High.BP_PickupGoldBox_High_C
class ABP_PickupGoldBox_High_C : public ABP_PickupBase_C
{
public:
	uint8                                        Pad_3068[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class E_TurnInTreasure                  ChestType;                                         // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3069[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Discovered;                                        // 0x3DC(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         DiscoverySynced;                                   // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TeamIDSynced;                                      // 0x3E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_306A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IconBase_C*                        MarkerRef;                                         // 0x3E8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DetachedFromShip;                                  // 0x3F0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_306B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GoldAmountToReward;                                // 0x3F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                IconWidget;                                        // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PickupGoldBox_High_C* GetDefaultObj();

	void OnRep_GoldAmountToReward();
	void OnRep_DetachedFromShip(bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
	void OnRep_Discovered();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Activate(class ABP_Character_C* LocalCharacterRef);
	void TakePickup();
	void TeamIDChanged();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_PickupGoldBox_High(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable_1, float K2Node_Event_DeltaSeconds, class ABP_Character_C* K2Node_Event_LocalCharacterRef, bool CallFunc_StopSprint_WasSprinting, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_3, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetAttachParentActor_ReturnValue, class ABP_BoatMeshBase_C* K2Node_DynamicCast_AsBP_Boat_Mesh_Base, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_IconBase_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocalController_ReturnValue, bool Temp_bool_IsClosed_Variable_3, bool CallFunc_Compare_Teams_Is_Same_Team);
};

}


