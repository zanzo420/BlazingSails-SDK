#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x4A0 - 0x494)
// BlueprintGeneratedClass BP_ProjectileCannonball.BP_ProjectileCannonball_C
class ABP_ProjectileCannonball_C : public ABP_ProjectileCannonballBase_C
{
public:
	uint8                                        Pad_3C93[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x498(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_ProjectileCannonball_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ProjectileCannonball(int32 EntryPoint);
};

}


