#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x408 - 0x400)
// BlueprintGeneratedClass BP_PickupGoldBox_Super.BP_PickupGoldBox_Super_C
class ABP_PickupGoldBox_Super_C : public ABP_PickupGoldBox_High_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_PickupGoldBox_Super_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_PickupGoldBox_Super(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


