#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16 (0x440 - 0x42A)
// BlueprintGeneratedClass BP_ProjectileExplosiveArrow.BP_ProjectileExplosiveArrow_C
class ABP_ProjectileExplosiveArrow_C : public ABP_ProjectileBase_C
{
public:
	uint8                                        Pad_3C2F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              ParticleSystem_0;                                  // 0x438(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ProjectileExplosiveArrow_C* GetDefaultObj();

	void PostHit(bool ForceKilled_);
	void ExecuteUbergraph_BP_ProjectileExplosiveArrow(int32 EntryPoint, bool K2Node_Event_ForceKilled_, class ABP_AOEBase_C* CallFunc_SpawnAOE_AOEActorRef);
};

}


