#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x32 (0x292 - 0x260)
// WidgetBlueprintGeneratedClass UI_DirectionIndicatorBase.UI_DirectionIndicatorBase_C
class UUI_DirectionIndicatorBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        ScreenWidth;                                       // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScreenHeight;                                      // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BorderRadius;                                      // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PreviousAngle;                                     // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_DirectionIndicatorImageBase_C*     UI_DirectionIndicatorImageBase;                    // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Class_DirectionIndicatorImageDerived;              // 0x288(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsVisible_;                                        // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HasIsVisibleChanged;                               // 0x291(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_DirectionIndicatorBase_C* GetDefaultObj();

	void TransformToRange(float& ValueRef, float Min, float Max, float* NewValue, float Range, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void SetVisibilityOverride(enum class ESlateVisibility Visibility, bool ForceVisibilityDidNotChange, bool PreviousIsVisible, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void ClampAngleDifference(float NewAngle, float PreviousAngle, float* RedefinedAngle, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float K2Node_Select_Default);
	void GetSubClass(class UClass** SubClass, class UClass* CallFunc_GetObjectClass_ReturnValue);
	void UpdateTransformAdvanced(float OffsetX, float OffsetY, float Angle);
	void UpdateTransform(float Angle, float DeltaTime, float InterpSpeedScale);
	void ExecuteUbergraph_UI_DirectionIndicatorBase(int32 EntryPoint, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_GetViewportScale_ReturnValue, float K2Node_CustomEvent_Angle, float K2Node_CustomEvent_DeltaTime, float K2Node_CustomEvent_InterpSpeedScale, bool CallFunc_IsValid_ReturnValue, float CallFunc_ClampAngleDifference_RedefinedAngle, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_DegCos_ReturnValue, float CallFunc_DegSin_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float K2Node_CustomEvent_OffsetX, float K2Node_CustomEvent_OffsetY, float K2Node_CustomEvent_Angle_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_TransformToRange_NewValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue);
};

}


