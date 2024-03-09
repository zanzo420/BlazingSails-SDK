#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x4C0 - 0x4A9)
// BlueprintGeneratedClass BP_WeaponBombLauncher.BP_WeaponBombLauncher_C
class ABP_WeaponBombLauncher_C : public ABP_WeaponRangedBase_C
{
public:
	uint8                                        Pad_2EE2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  bomb;                                              // 0x4B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_WeaponBombLauncher_C* GetDefaultObj();

	void SecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction);
	void ReloadEvent(class ABP_Character_C* CharacterRef);
	void HolsteredEvent();
	void ExecuteUbergraph_BP_WeaponBombLauncher(int32 EntryPoint, const struct FVector& K2Node_Event_CameraLocation, const struct FVector& K2Node_Event_Direction, class ABP_Character_C* K2Node_Event_CharacterRef, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
};

}


