#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3F8 - 0x3F0)
// BlueprintGeneratedClass BP_PickupWeaponNockGun.BP_PickupWeaponNockGun_C
class ABP_PickupWeaponNockGun_C : public ABP_PickupWeaponBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_PickupWeaponNockGun_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_PickupWeaponNockGun(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


