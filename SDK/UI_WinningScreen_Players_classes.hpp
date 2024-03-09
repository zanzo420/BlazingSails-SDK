#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x2B1 - 0x260)
// WidgetBlueprintGeneratedClass UI_WinningScreen_Players.UI_WinningScreen_Players_C
class UUI_WinningScreen_Players_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      RewardsFadeIn;                                     // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      XPAnim;                                            // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Kills;                                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Trophy;                                            // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WinningScreenPlayer_C*             UI_WinningScreenPlayer;                            // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WinningScreenPlayer_C*             UI_WinningScreenPlayer_0;                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WinningScreenPlayer_C*             UI_WinningScreenPlayer_1;                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_WinningScreenPlayer_C*             UI_WinningScreenPlayer_2;                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_2;                                     // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         MidGameDefeatedScreen_;                            // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUI_WinningScreen_Players_C* GetDefaultObj();

	void Player_Sorter(class UObject* ObjectA, class UObject* ObjectB, bool* Result, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetScore_Score, int32 CallFunc_GetScore_Score_1, bool CallFunc_Greater_IntInt_ReturnValue);
	void CheckIfSelf(class FText Name, class ABP_PlayerState_C* PlayerState, class FText* Output, bool* IsYou, struct FSlateColor* SelfColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Compare_Teams_Is_Same_Team, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_Compare_Crews_Is_Same_Team_And_Crew);
	void FillPlayerList(const TArray<class APlayerState*>& Sorted_Players, class UUI_WinningScreenPlayer_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class AAlpha_Game_State_C* CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State, class APlayerState* CallFunc_Array_Get_Item, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetScore_Score, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetScore_Score_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_CheckIfSelf_Output, bool CallFunc_CheckIfSelf_IsYou, const struct FSlateColor& CallFunc_CheckIfSelf_SelfColor, class FText CallFunc_CheckIfSelf_Output_1, bool CallFunc_CheckIfSelf_IsYou_1, const struct FSlateColor& CallFunc_CheckIfSelf_SelfColor_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void CheckIfOwnTeam(class ANewTeamManager_C* Team, bool* IsOwnTeam, class AAlpha_PlayerState_C* CallFunc_Current_Alpha_Player_State_As_Alpha_Player_State, bool CallFunc_Compare_Teams_Is_Same_Team);
	void OnInitialized();
	void ExecuteUbergraph_UI_WinningScreen_Players(int32 EntryPoint);
};

}


