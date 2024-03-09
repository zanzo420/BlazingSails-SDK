#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x3D8 - 0x3C9)
// BlueprintGeneratedClass BP_PickupBackpackUpgrade.BP_PickupBackpackUpgrade_C
class ABP_PickupBackpackUpgrade_C : public ABP_PickupBase_C
{
public:
	uint8                                        Pad_1BC5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_PickupBackpackUpgrade_C* GetDefaultObj();

	void Activate(class ABP_Character_C* LocalCharacterRef);
	void S_Activate();
	void ExecuteUbergraph_BP_PickupBackpackUpgrade(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_IsClosed_Variable, class ABP_Character_C* K2Node_Event_LocalCharacterRef, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_UpgradeInventory_Upgraded);
};

}


