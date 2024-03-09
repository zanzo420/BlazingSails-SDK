#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16E (0x3E2 - 0x274)
// WidgetBlueprintGeneratedClass UI_ConquestFlag.UI_ConquestFlag_C
class UUI_ConquestFlag_C : public UUI_DirectionIndicatorImageBase_C
{
public:
	uint8                                        Pad_2E47[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_2;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_3;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_5;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Arrow;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Flag;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_76;                                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          RedBar;                                            // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_ConquestFlag_C*                    FlagRef;                                           // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Distant;                                           // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E48[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           IconBrush;                                         // 0x2D0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           ArrowBrush;                                        // 0x358(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HideFlagIcon;                                      // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HideArrow;                                         // 0x3E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_ConquestFlag_C* GetDefaultObj();

	enum class ESlateVisibility Get_Image_Arrow_Visibility_0();
	enum class ESlateVisibility ShowFullWidget(bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess);
	enum class ESlateVisibility ShowFullFlagIcon(class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess);
	enum class ESlateVisibility ShowFlagIcon(class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess);
	float Get_BlueBar_Percent_0(bool CallFunc_IsValid_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
	enum class ESlateVisibility Get_BlueBar_Visibility_0(bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	enum class ESlateVisibility Get_RedBar_Visibility_0(bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	struct FLinearColor SetProgressBarColor(bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	float SetCaptureProgress(bool CallFunc_IsValid_ReturnValue);
	struct FLinearColor SetIconColor(bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void Initialize(class UObject* Icon, class UObject* Arrow);
	void SetScale(const struct FVector2D& S);
	void InitializeIconOnly(class UObject* Icon);
	void SetAngle(float Degrees);
	void ExecuteUbergraph_UI_ConquestFlag(int32 EntryPoint, class UObject* K2Node_CustomEvent_Icon_1, class UObject* K2Node_CustomEvent_Arrow, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FVector2D& K2Node_Event_S, class UObject* K2Node_CustomEvent_Icon, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, float K2Node_Event_Degrees, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


