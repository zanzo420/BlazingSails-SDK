#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x298 - 0x28D)
// BlueprintGeneratedClass BP_AOEBombExplosion.BP_AOEBombExplosion_C
class ABP_AOEBombExplosion_C : public ABP_AOEBase_C
{
public:
	uint8                                        Pad_260B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_AOEBombExplosion_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AOEBombExplosion(int32 EntryPoint);
};

}


