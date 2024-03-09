#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x298 - 0x28D)
// BlueprintGeneratedClass BP_AOEBowBarrelExplosion.BP_AOEBowBarrelExplosion_C
class ABP_AOEBowBarrelExplosion_C : public ABP_AOEBase_C
{
public:
	uint8                                        Pad_273A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_AOEBowBarrelExplosion_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_BP_AOEBowBarrelExplosion(int32 EntryPoint, class AActor* K2Node_Event_OtherActor);
};

}


