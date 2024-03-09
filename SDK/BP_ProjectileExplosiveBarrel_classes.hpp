#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x4A0 - 0x494)
// BlueprintGeneratedClass BP_ProjectileExplosiveBarrel.BP_ProjectileExplosiveBarrel_C
class ABP_ProjectileExplosiveBarrel_C : public ABP_ProjectileCannonballBase_C
{
public:
	uint8                                        Pad_2113[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x498(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_ProjectileExplosiveBarrel_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void WaterSplash();
	void PostHit(bool ForceKilled_);
	void ExecuteUbergraph_BP_ProjectileExplosiveBarrel(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_IsClosed_Variable, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool K2Node_Event_ForceKilled_, class ABP_ExplosiveBarrel_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsServer_ReturnValue);
};

}


