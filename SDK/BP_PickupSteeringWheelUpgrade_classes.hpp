#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3E0 - 0x3D8)
// BlueprintGeneratedClass BP_PickupSteeringWheelUpgrade.BP_PickupSteeringWheelUpgrade_C
class ABP_PickupSteeringWheelUpgrade_C : public ABP_PickupItemBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_PickupSteeringWheelUpgrade_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void S_Activate();
	void ExecuteUbergraph_BP_PickupSteeringWheelUpgrade(int32 EntryPoint);
};

}


