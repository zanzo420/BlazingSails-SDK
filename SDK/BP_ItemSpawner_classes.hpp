#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x230 - 0x220)
// BlueprintGeneratedClass BP_ItemSpawner.BP_ItemSpawner_C
class ABP_ItemSpawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ItemSpawner_C* GetDefaultObj();

	void SpawnItem(const struct FTransform& SpawnTransform, float SpawnTime, class UClass* ItemToSpawn, int32 MinAmount, int32 MaxAmount);
	void ExecuteUbergraph_BP_ItemSpawner(int32 EntryPoint, const struct FTransform& K2Node_CustomEvent_SpawnTransform, float K2Node_CustomEvent_SpawnTime, class UClass* K2Node_CustomEvent_ItemToSpawn, int32 K2Node_CustomEvent_MinAmount, int32 K2Node_CustomEvent_MaxAmount, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_PickupBase_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}


