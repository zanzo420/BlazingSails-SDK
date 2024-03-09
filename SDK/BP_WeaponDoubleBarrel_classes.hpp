#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x4B8 - 0x4A9)
// BlueprintGeneratedClass BP_WeaponDoubleBarrel.BP_WeaponDoubleBarrel_C
class ABP_WeaponDoubleBarrel_C : public ABP_WeaponRangedBase_C
{
public:
	uint8                                        Pad_2726[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_WeaponDoubleBarrel_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_WeaponDoubleBarrel(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


