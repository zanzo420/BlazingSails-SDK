#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x268 - 0x25C)
// BlueprintGeneratedClass BP_ActionPauseStartTimer.BP_ActionPauseStartTimer_C
class ABP_ActionPauseStartTimer_C : public ABP_ActionBase_C
{
public:
	uint8                                        Pad_382F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_ActionPauseStartTimer_C* GetDefaultObj();

	void StartAction();
	void ExecuteUbergraph_BP_ActionPauseStartTimer(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AAlpha_GameMode_C* CallFunc_CurrentGameMode_As_Alpha_Game_Mode);
};

}


