#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2E8 (0x548 - 0x260)
// WidgetBlueprintGeneratedClass UI_Options.UI_Options_C
class UUI_Options_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OptionsWheel;                                      // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Btn_Audio;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Btn_Close;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Btn_Credits;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Btn_Gameplay;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Btn_KeyBindings;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Btn_Video;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       OptionsWidgetSwitcher;                             // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_AudioOptions_C*                    UI_AudioOptions;                                   // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameplayOptions_C*                 UI_GameplayOptions;                                // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_KeyBinds_C*                        UI_KeyBinds;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_VideoOptions_C*                    UI_VideoOptions;                                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FButtonStyle                          DefaultButtonStyle;                                // 0x2C8(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUI_StartMenu_C*                       UIStartMenuRef;                                    // 0x540(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Options_C* GetDefaultObj();

	enum class ESlateVisibility ShowCreditsButton(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ABP_MainMenuGameMode_C* K2Node_DynamicCast_AsBP_Main_Menu_Game_Mode, bool K2Node_DynamicCast_bSuccess);
	void BlackenSelectedTab(class UButton* TabButton);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__Btn_Gameplay_K2Node_ComponentBoundEvent_145_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn_Video_K2Node_ComponentBoundEvent_162_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_163_K2Node_ComponentBoundEvent_588_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_164_K2Node_ComponentBoundEvent_605_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void CloseOptions();
	void BndEvt__Btn_Credits_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_Options(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_CloseOptions_CanClose, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UUI_StartMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_StartMenu_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class UUI_Credits_C* CallFunc_Create_ReturnValue, TArray<class UUI_StartMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UUI_StartMenu_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1);
};

}


