#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x308 - 0x2D0)
// WidgetBlueprintGeneratedClass UI_Ship_Sign.UI_Ship_Sign_C
class UUI_Ship_Sign_C : public UUI_KnifeUsingBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_91;                                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_56;                                          // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_86;                                          // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          KnifeCanvasPanel;                                  // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_ShipTypes                       Ship_Type;                                         // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_35FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Ship_Texture;                                      // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Ship_Sign_C* GetDefaultObj();

	void Validate_Selected(class APlayerState* Player_State, bool* Valid, class ABR_Alpha_PlayerState_C* K2Node_DynamicCast_AsBR_Alpha_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void BndEvt__UI_Ship_Sign_Button_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Refresh();
	void Construct();
	void Set_Voted();
	void ExecuteUbergraph_UI_Ship_Sign(int32 EntryPoint, class ABR_Alpha_PlayerState_C* CallFunc_Current_BR_Alpha_Player_State_As_BR_Alpha_Player_State, TArray<class UUI_SpawnSelection_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_SpawnSelection_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue);
};

}


