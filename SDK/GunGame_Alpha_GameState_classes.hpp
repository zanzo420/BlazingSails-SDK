#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x4D0 - 0x4A8)
// BlueprintGeneratedClass GunGame_Alpha_GameState.GunGame_Alpha_GameState_C
class AGunGame_Alpha_GameState_C : public AAlpha_Game_State_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FST_GunGameHostSettings_updated       Gun_Game_Host_Settings;                            // 0x4B0(0x20)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGunGame_Alpha_GameState_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_GunGame_Alpha_GameState(int32 EntryPoint, class UBP_GameInstance_C* CallFunc_Current_Game_BP_Instance_AsBP_Game_Instance);
};

}


