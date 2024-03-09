#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x37 (0x610 - 0x5D9)
// BlueprintGeneratedClass BP_VehicleGalleonCannon.BP_VehicleGalleonCannon_C
class ABP_VehicleGalleonCannon_C : public ABP_VehicleCannon_C
{
public:
	uint8                                        Pad_2E3D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        CoolDown_CoolDownGlow_5A8076F74484B60E5ED631A8D9594838; // 0x5E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CoolDown__Direction_5A8076F74484B60E5ED631A8D9594838; // 0x5EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E3E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CoolDown;                                          // 0x5F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              DefaultBaseRotation;                               // 0x5F8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              DefaultbarrelRotation;                             // 0x604(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_VehicleGalleonCannon_C* GetDefaultObj();

	void CoolDown__FinishedFunc();
	void CoolDown__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void S_Fire(const struct FVector& StartLocation, const struct FVector& Direction, int32 TeamID, enum class E_CannonAmmo AmmoType, const struct FVector& AddedVelocity, int32 FleetID, float DroprateMultiplier);
	void OverHeatEffects();
	void ExecuteUbergraph_BP_VehicleGalleonCannon(int32 EntryPoint, float K2Node_Event_DeltaSeconds, const struct FVector& K2Node_Event_StartLocation, const struct FVector& K2Node_Event_Direction, int32 K2Node_Event_TeamID, enum class E_CannonAmmo K2Node_Event_AmmoType, const struct FVector& K2Node_Event_AddedVelocity, int32 K2Node_Event_FleetID, float K2Node_Event_DropRateMultiplier, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FRotator& CallFunc_RInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FRotator& CallFunc_RInterpTo_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1);
};

}


