#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass UI_ConquestFlagName.UI_ConquestFlagName_C
class UUI_ConquestFlagName_C : public UUserWidget
{
public:
	class UTextBlock*                            TextBlock_64;                                      // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_ConquestFlag_C*                    FlagRef;                                           // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_ConquestFlagName_C* GetDefaultObj();

	class FText GetText_0(bool CallFunc_IsValid_ReturnValue);
};

}

