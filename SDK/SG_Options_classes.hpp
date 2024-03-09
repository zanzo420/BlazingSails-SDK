#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xFA (0x122 - 0x28)
// BlueprintGeneratedClass SG_Options.SG_Options_C
class USG_Options_C : public USaveGame
{
public:
	struct FST_Options                           Options;                                           // 0x28(0x64)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_2A34[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FST_Keybind>                   KeyBinds;                                          // 0x90(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         AlphaDisclaimerShown;                              // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A35[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Servername;                                        // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         ThirdPersonSteeringWheel;                          // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShowFpsCounter;                                    // 0xB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShowMSCounter;                                     // 0xBA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShowChatMessages;                                  // 0xBB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseProfanityFilter;                                // 0xBC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShowDamageNumbers;                                 // 0xBD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A36[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AnchorDropTime;                                    // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A37[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 MapFilters;                                        // 0xC8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_Keybind>                   KeyBindsController;                                // 0xD8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        ResolutionScale;                                   // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Brightness;                                        // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableControllerSupport;                           // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A38[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ControllerYSensitivity;                            // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ControllerXSensitivity;                            // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ToggleSprint;                                      // 0xFC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A39[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Sharpness;                                         // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BrightnessTotal;                                   // 0x104(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowAllChatMessages;                               // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         StreamerMode;                                      // 0x109(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A3A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FairDirectIP;                                      // 0x110(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         DisableMouseWheel;                                 // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IgnoreHammerOnMouseWheel;                          // 0x121(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USG_Options_C* GetDefaultObj();

};

}


