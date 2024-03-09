#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16 (0x480 - 0x46A)
// BlueprintGeneratedClass BP_WeaponShield.BP_WeaponShield_C
class ABP_WeaponShield_C : public ABP_WeaponMeleeBase_C
{
public:
	uint8                                        Pad_2E80[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         Box;                                               // 0x478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_WeaponShield_C* GetDefaultObj();

	void ExecuteUbergraph_BP_WeaponShield(int32 EntryPoint);
};

}


