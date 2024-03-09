#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x2D0 - 0x260)
// WidgetBlueprintGeneratedClass UI_KnifeUsingBase.UI_KnifeUsingBase_C
class UUI_KnifeUsingBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        PreviousAmount;                                    // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_239D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FUniqueNetIdRepl, class UUI_PlayerKnife_C*> Player_Knife_Mapping;                              // 0x270(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UCanvasPanel*                          Knife_Canvas;                                      // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Min_Knife_Spawn_Radius;                            // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Max_Knife_Spawn_Radius;                            // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_KnifeUsingBase_C* GetDefaultObj();

	void Random_Point_Within_Circle(const struct FVector2D& Center, struct FVector2D* Random_Point, float Random_Angle, float Random_Radius, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_DegSin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_DegCos_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void Validate_Selected(class APlayerState* Player_State, bool* Valid);
	void GetPlayerAmountAndColors(int32* TeamMemberAmountThatSelectedThis, const TArray<int32>& TeamPlayerColors, int32 PlayerAmount, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, bool CallFunc_Validate_Selected_Valid, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Compare_Teams_Is_Same_Team);
	void Update();
	void RemoveKnife(const struct FUniqueNetIdRepl& Player_ID);
	void Add_Knife(const struct FUniqueNetIdRepl& Player_ID, class ABP_PlayerState_C* Player_State);
	void Clicked_Button();
	void Set_Voted();
	void Refresh();
	void ExecuteUbergraph_UI_KnifeUsingBase(int32 EntryPoint, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, int32 CallFunc_GetPlayerAmountAndColors_TeamMemberAmountThatSelectedThis, const struct FVector2D& CallFunc_Random_Point_Within_Circle_Random_Point, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_Player_ID_1, const struct FUniqueNetIdRepl& K2Node_CustomEvent_Player_ID, class ABP_PlayerState_C* K2Node_CustomEvent_Player_State, bool CallFunc_Map_Contains_ReturnValue, class UUI_PlayerKnife_C* CallFunc_Create_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, class UUI_PlayerKnife_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


