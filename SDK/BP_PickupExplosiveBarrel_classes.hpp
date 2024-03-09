#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x3E8 - 0x3D8)
// BlueprintGeneratedClass BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C
class ABP_PickupExplosiveBarrel_C : public ABP_PickupItemBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         ProjectileDetectionBox;                            // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PickupExplosiveBarrel_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void S_Activate();
	void Explode(class ABP_Controller_C* ControllerRef, float DetonationDelay);
	void MC_Effects();
	void S_Explode();
	void ExecuteUbergraph_BP_PickupExplosiveBarrel(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class ABP_Controller_C* K2Node_CustomEvent_ControllerRef, float K2Node_CustomEvent_DetonationDelay, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FVector& Temp_struct_Variable, class ABP_AOEHugeExplosion_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

}


