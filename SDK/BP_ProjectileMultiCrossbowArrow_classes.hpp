#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x438 - 0x42A)
// BlueprintGeneratedClass BP_ProjectileMultiCrossbowArrow.BP_ProjectileMultiCrossbowArrow_C
class ABP_ProjectileMultiCrossbowArrow_C : public ABP_ProjectileBase_C
{
public:
	uint8                                        Pad_3C32[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_ProjectileMultiCrossbowArrow_C* GetDefaultObj();

	void PostHit(bool ForceKilled_);
	void ExecuteUbergraph_BP_ProjectileMultiCrossbowArrow(int32 EntryPoint, bool K2Node_Event_ForceKilled_);
};

}


