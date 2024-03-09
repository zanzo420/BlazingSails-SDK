#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x2C0 - 0x2A4)
// WidgetBlueprintGeneratedClass CP_ColorPicker_Wheel.CP_ColorPicker_Wheel_C
class UCP_ColorPicker_Wheel_C : public UCP_SC_BaseColorPicker_C
{
public:
	uint8                                        Pad_1B0C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCP_SC_ValueSlider_H_C*                CP_ValueSlider;                                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCP_SC_HueSatWheelPicker_C*            HueSatColorWheelPickerCmp;                         // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCP_ColorPicker_Wheel_C* GetDefaultObj();

	void BndEvt__CP_ValueSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float NewValue);
	void UpdateColor(const struct FLinearColor& NewColor);
	void BndEvt__HueSatColorWheelPickerCmp_K2Node_ComponentBoundEvent_0_OnValuesChanged__DelegateSignature(float NewCmp1, float NewCmp2);
	void ExecuteUbergraph_CP_ColorPicker_Wheel(int32 EntryPoint, const struct FLinearColor& K2Node_Event_NewColor, float K2Node_ComponentBoundEvent_NewValue, float CallFunc_RGBToHSV_H, float CallFunc_RGBToHSV_S, float CallFunc_RGBToHSV_V, float CallFunc_RGBToHSV_A, float K2Node_ComponentBoundEvent_NewCmp1, float K2Node_ComponentBoundEvent_NewCmp2);
};

}


