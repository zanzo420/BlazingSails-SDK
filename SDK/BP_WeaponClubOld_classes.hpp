#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x478 - 0x46A)
// BlueprintGeneratedClass BP_WeaponClubOld.BP_WeaponClubOld_C
class ABP_WeaponClubOld_C : public ABP_WeaponMeleeBase_C
{
public:
	uint8                                        Pad_2EF9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_WeaponClubOld_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WeaponClubOld(int32 EntryPoint);
};

}


