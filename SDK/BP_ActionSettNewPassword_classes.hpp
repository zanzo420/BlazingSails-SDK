#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x269 - 0x25C)
// BlueprintGeneratedClass BP_ActionSettNewPassword.BP_ActionSettNewPassword_C
class ABP_ActionSettNewPassword_C : public ABP_ActionBase_C
{
public:
	uint8                                        Pad_382B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         NotificationSound;                                 // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ABP_ActionSettNewPassword_C* GetDefaultObj();

	void StartAction();
	void ExecuteUbergraph_BP_ActionSettNewPassword(int32 EntryPoint, const class FString& CallFunc_Conv_TextToString_ReturnValue);
};

}


