#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x5A0 - 0x58C)
// BlueprintGeneratedClass BP_Junk_MastBaseFront.BP_Junk_MastBaseFront_C
class ABP_Junk_MastBaseFront_C : public ABP_Brig_MastBase_C
{
public:
	uint8                                        Pad_372D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x590(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  HitBox;                                            // 0x598(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Junk_MastBaseFront_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Junk_MastBaseFront(int32 EntryPoint, float K2Node_Event_DeltaSeconds, float CallFunc_MapRangeClamped_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue);
};

}


