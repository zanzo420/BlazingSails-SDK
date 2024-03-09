#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xAD (0xC60 - 0xBB3)
// BlueprintGeneratedClass BP_MainMenu_GameInstance.BP_MainMenu_GameInstance_C
class UBP_MainMenu_GameInstance_C : public UBP_GameInstance_C
{
public:
	uint8                                        Pad_32BD[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FST_ShipCustomisations                LeaderCustomization_0;                             // 0xBC0(0x74)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_32BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         StartUpScreenShown;                                // 0xC38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FST_ShipCustomizationPreset>   PirateCosmeticPresets_0;                           // 0xC40(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_ShipCustomizationPreset>   ShipCosmeticPresets_0;                             // 0xC50(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_MainMenu_GameInstance_C* GetDefaultObj();

	void ExecuteUbergraph_BP_MainMenu_GameInstance(int32 EntryPoint);
};

}


