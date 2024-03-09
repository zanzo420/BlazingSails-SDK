#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass UI_ConquestFlagMarker.UI_ConquestFlagMarker_C
class UUI_ConquestFlagMarker_C : public UUserWidget
{
public:
	class UImage*                                Image_89;                                          // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_ConquestFlag_C*                    FlagRef;                                           // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_ConquestFlagMarker_C* GetDefaultObj();

	struct FLinearColor GetColorAndOpacity_0(bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	enum class ESlateVisibility SetShowWidget();
};

}


