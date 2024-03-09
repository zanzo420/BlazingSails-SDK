#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x268 - 0x25C)
// BlueprintGeneratedClass BP_ActionPauseDeadZone.BP_ActionPauseDeadZone_C
class ABP_ActionPauseDeadZone_C : public ABP_ActionBase_C
{
public:
	uint8                                        Pad_281[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_ActionPauseDeadZone_C* GetDefaultObj();

	void StartAction();
	void ExecuteUbergraph_BP_ActionPauseDeadZone(int32 EntryPoint, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class ABP_GameMode_TreasureHunt_C* K2Node_DynamicCast_AsBP_Game_Mode_Treasure_Hunt, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsServer_ReturnValue, TArray<class ABP_Deathzone_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_Deathzone_C* CallFunc_Array_Get_Item, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanOR_ReturnValue);
};

}


