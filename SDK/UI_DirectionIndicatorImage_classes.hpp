#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x15C (0x3D0 - 0x274)
// WidgetBlueprintGeneratedClass UI_DirectionIndicatorImage.UI_DirectionIndicatorImage_C
class UUI_DirectionIndicatorImage_C : public UUI_DirectionIndicatorImageBase_C
{
public:
	uint8                                        Pad_1C65[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Arrow;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Icon;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_IconOnly;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          IconColor;                                         // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ArrowColor;                                        // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           IconBrush;                                         // 0x2C0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           ArrowBrush;                                        // 0x348(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUI_DirectionIndicatorImage_C* GetDefaultObj();

	void Initialize(class UObject* Icon, class UObject* Arrow, const struct FLinearColor& IconColor, const struct FLinearColor& ArrowColor);
	void InitializeIconOnly(class UObject* Icon, const struct FLinearColor& IconColor);
	void SetScale(const struct FVector2D& S);
	void SetAngle(float Degrees);
	void ExecuteUbergraph_UI_DirectionIndicatorImage(int32 EntryPoint, float K2Node_Event_Degrees, float CallFunc_Multiply_FloatFloat_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, class UObject* K2Node_CustomEvent_Icon_1, class UObject* K2Node_CustomEvent_Arrow, const struct FLinearColor& K2Node_CustomEvent_IconColor_1, const struct FLinearColor& K2Node_CustomEvent_ArrowColor, class UObject* K2Node_CustomEvent_Icon, const struct FLinearColor& K2Node_CustomEvent_IconColor, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, uint8 CallFunc_MakeLiteralByte_ReturnValue_4, uint8 CallFunc_MakeLiteralByte_ReturnValue_5, const struct FVector2D& K2Node_Event_S);
};

}


