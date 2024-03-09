#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x269 - 0x25C)
// BlueprintGeneratedClass BP_ActionAddModSelf.BP_ActionAddModSelf_C
class ABP_ActionAddModSelf_C : public ABP_ActionBase_C
{
public:
	uint8                                        Pad_2722[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         NotificationSound;                                 // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ABP_ActionAddModSelf_C* GetDefaultObj();

	void StartAction();
	void ExecuteUbergraph_BP_ActionAddModSelf(int32 EntryPoint);
};

}


