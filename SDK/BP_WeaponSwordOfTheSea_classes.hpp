#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x478 - 0x46A)
// BlueprintGeneratedClass BP_WeaponSwordOfTheSea.BP_WeaponSwordOfTheSea_C
class ABP_WeaponSwordOfTheSea_C : public ABP_WeaponMeleeBase_C
{
public:
	uint8                                        Pad_2EEA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_WeaponSwordOfTheSea_C* GetDefaultObj();

	void PlayerHitEvent();
	void ExecuteUbergraph_BP_WeaponSwordOfTheSea(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}


