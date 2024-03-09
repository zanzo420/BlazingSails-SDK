#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x3F1 - 0x3E4)
// BlueprintGeneratedClass BP_ContainerDestroyedShipChest.BP_ContainerDestroyedShipChest_C
class ABP_ContainerDestroyedShipChest_C : public ABP_ContainerBase_C
{
public:
	uint8                                        Pad_3038[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         EnableEmptyCheck_0;                                // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_ContainerDestroyedShipChest_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ContainerDestroyedShipChest(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


