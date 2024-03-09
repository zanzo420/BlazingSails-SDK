#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x438 - 0x42A)
// BlueprintGeneratedClass BP_ProjectileBowArrow.BP_ProjectileBowArrow_C
class ABP_ProjectileBowArrow_C : public ABP_ProjectileBase_C
{
public:
	uint8                                        Pad_3C1E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_ProjectileBowArrow_C* GetDefaultObj();

	void PostHit(bool ForceKilled_);
	void ExecuteUbergraph_BP_ProjectileBowArrow(int32 EntryPoint, bool K2Node_Event_ForceKilled_);
};

}


