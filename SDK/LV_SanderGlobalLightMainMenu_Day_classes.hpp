#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x238 - 0x228)
// BlueprintGeneratedClass LV_SanderGlobalLightMainMenu_Day.LV_SanderGlobalLightMainMenu_Day_C
class ALV_SanderGlobalLightMainMenu_Day_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class APostProcessVolume*                    PostProcessVolume_1_ExecuteUbergraph_LV_SanderGlobalLightMainMenu_Day_RefProperty; // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ALV_SanderGlobalLightMainMenu_Day_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_LV_SanderGlobalLightMainMenu_Day(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess);
};

}


