#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x3F0 - 0x3E4)
// BlueprintGeneratedClass BP_ContainerPlayerDeathChest.BP_ContainerPlayerDeathChest_C
class ABP_ContainerPlayerDeathChest_C : public ABP_ContainerBase_C
{
public:
	uint8                                        Pad_28D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_ContainerPlayerDeathChest_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Destroy_Self();
	void ExecuteUbergraph_BP_ContainerPlayerDeathChest(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AAlpha_GameMode_C* K2Node_DynamicCast_AsAlpha_Game_Mode, bool K2Node_DynamicCast_bSuccess);
};

}


