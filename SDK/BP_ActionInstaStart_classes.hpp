#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x268 - 0x25C)
// BlueprintGeneratedClass BP_ActionInstaStart.BP_ActionInstaStart_C
class ABP_ActionInstaStart_C : public ABP_ActionBase_C
{
public:
	uint8                                        Pad_3728[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_ActionInstaStart_C* GetDefaultObj();

	void StartAction();
	void ExecuteUbergraph_BP_ActionInstaStart(int32 EntryPoint, class AAlpha_GameMode_C* CallFunc_CurrentGameMode_As_Alpha_Game_Mode, bool CallFunc_IsServer_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue);
};

}


