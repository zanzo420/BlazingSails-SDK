#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x269 - 0x25C)
// BlueprintGeneratedClass BP_ActionBroadCast.BP_ActionBroadCast_C
class ABP_ActionBroadCast_C : public ABP_ActionBase_C
{
public:
	uint8                                        Pad_2BC9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         NotificationSound;                                 // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ABP_ActionBroadCast_C* GetDefaultObj();

	void StartAction();
	void ExecuteUbergraph_BP_ActionBroadCast(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess);
};

}


