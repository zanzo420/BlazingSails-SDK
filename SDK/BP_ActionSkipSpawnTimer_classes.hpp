#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x268 - 0x25C)
// BlueprintGeneratedClass BP_ActionSkipSpawnTimer.BP_ActionSkipSpawnTimer_C
class ABP_ActionSkipSpawnTimer_C : public ABP_ActionBase_C
{
public:
	uint8                                        Pad_333[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_ActionSkipSpawnTimer_C* GetDefaultObj();

	void StartAction();
	void ExecuteUbergraph_BP_ActionSkipSpawnTimer(int32 EntryPoint, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class ABR_Alpha_GameState_C* K2Node_DynamicCast_AsBR_Alpha_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanOR_ReturnValue);
};

}


