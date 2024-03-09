#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x318 - 0x260)
// WidgetBlueprintGeneratedClass CP_SC_ValueSlider_H.CP_SC_ValueSlider_H_C
class UCP_SC_ValueSlider_H_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Background;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               SliderValue;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMaterialInstanceDynamic*              SliderMat;                                         // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           BackgroundSlateBrush;                              // 0x290(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UCP_SC_ValueSlider_H_C* GetDefaultObj();

	void OnComponentsUpdated(float NewHue, float NewSat, float NewVal);
	void BndEvt__SliderValue_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void OnColorUpdate(float NewHue, float NewSat);
	void ExecuteUbergraph_CP_SC_ValueSlider_H(int32 EntryPoint, float K2Node_ComponentBoundEvent_Value, float K2Node_CustomEvent_NewHue, float K2Node_CustomEvent_NewSat, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_GetValue_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void OnValueChanged__DelegateSignature(float NewValue);
};

}


