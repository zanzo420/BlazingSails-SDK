#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x2A0 - 0x292)
// WidgetBlueprintGeneratedClass UI_DirectionIndicatorFlag.UI_DirectionIndicatorFlag_C
class UUI_DirectionIndicatorFlag_C : public UUI_DirectionIndicatorBase_C
{
public:
	uint8                                        Pad_2AFD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UUI_DirectionIndicatorFlag_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_UI_DirectionIndicatorFlag(int32 EntryPoint, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, class UUI_ConquestFlag_C* CallFunc_Create_ReturnValue);
};

}


