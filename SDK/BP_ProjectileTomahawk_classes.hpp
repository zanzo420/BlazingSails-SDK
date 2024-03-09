#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16 (0x440 - 0x42A)
// BlueprintGeneratedClass BP_ProjectileTomahawk.BP_ProjectileTomahawk_C
class ABP_ProjectileTomahawk_C : public ABP_ProjectileBase_C
{
public:
	uint8                                        Pad_3C94[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URotatingMovementComponent*            RotatingMovement;                                  // 0x438(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ProjectileTomahawk_C* GetDefaultObj();

	void PostHit(bool ForceKilled_);
	void ExecuteUbergraph_BP_ProjectileTomahawk(int32 EntryPoint, bool K2Node_Event_ForceKilled_);
};

}


