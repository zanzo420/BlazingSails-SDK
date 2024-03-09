#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// BlueprintGeneratedClass SG_Presets.SG_Presets_C
class USG_Presets_C : public USaveGame
{
public:
	TArray<struct FST_ShipCustomizationPreset>   ShipCosmeticPresets;                               // 0x28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_ShipCustomizationPreset>   PirateCosmeticPresets;                             // 0x38(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class USG_Presets_C* GetDefaultObj();

};

}


