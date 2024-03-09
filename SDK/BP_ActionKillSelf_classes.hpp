#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x268 - 0x25C)
// BlueprintGeneratedClass BP_ActionKillSelf.BP_ActionKillSelf_C
class ABP_ActionKillSelf_C : public ABP_ActionBase_C
{
public:
	uint8                                        Pad_3832[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_ActionKillSelf_C* GetDefaultObj();

	void StartAction();
	void ExecuteUbergraph_BP_ActionKillSelf(int32 EntryPoint, const struct FST_SimpleMessage& K2Node_MakeStruct_ST_SimpleMessage, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess);
};

}


