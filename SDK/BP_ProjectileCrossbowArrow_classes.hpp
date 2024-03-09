#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x438 - 0x42A)
// BlueprintGeneratedClass BP_ProjectileCrossbowArrow.BP_ProjectileCrossbowArrow_C
class ABP_ProjectileCrossbowArrow_C : public ABP_ProjectileBase_C
{
public:
	uint8                                        Pad_39AD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_ProjectileCrossbowArrow_C* GetDefaultObj();

	void PostHit(bool ForceKilled_);
	void ExecuteUbergraph_BP_ProjectileCrossbowArrow(int32 EntryPoint, bool K2Node_Event_ForceKilled_);
};

}


