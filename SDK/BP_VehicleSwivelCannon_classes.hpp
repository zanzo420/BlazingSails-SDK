#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x5F0 - 0x5D9)
// BlueprintGeneratedClass BP_VehicleSwivelCannon.BP_VehicleSwivelCannon_C
class ABP_VehicleSwivelCannon_C : public ABP_VehicleCannon_C
{
public:
	uint8                                        Pad_1D65[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Cylinder_0;                                        // 0x5E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_VehicleSwivelCannon_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_VehicleSwivelCannon(int32 EntryPoint);
};

}


