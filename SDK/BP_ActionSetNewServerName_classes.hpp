#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x268 - 0x25C)
// BlueprintGeneratedClass BP_ActionSetNewServerName.BP_ActionSetNewServerName_C
class ABP_ActionSetNewServerName_C : public ABP_ActionBase_C
{
public:
	uint8                                        Pad_382C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_ActionSetNewServerName_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ActionSetNewServerName(int32 EntryPoint, float K2Node_Event_DeltaSeconds, const class FString& CallFunc_Conv_TextToString_ReturnValue);
};

}

