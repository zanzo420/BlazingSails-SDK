#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x268 - 0x25C)
// BlueprintGeneratedClass BP_ActionInspectSelf.BP_ActionInspectSelf_C
class ABP_ActionInspectSelf_C : public ABP_ActionBase_C
{
public:
	uint8                                        Pad_E0E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_ActionInspectSelf_C* GetDefaultObj();

	void StartAction();
	void ExecuteUbergraph_BP_ActionInspectSelf(int32 EntryPoint);
};

}


