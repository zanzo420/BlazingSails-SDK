#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x160 (0x3C0 - 0x260)
// WidgetBlueprintGeneratedClass UI_Play_New.UI_Play_New_C
class UUI_Play_New_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                BGFadeColor;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Back;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Back_1;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Stop;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LeftFlag;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        PlayMenuBox;                                       // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        PlayMenuBox_LowLevel;                              // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RightFlag;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_3;                                       // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Estimate;                                // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_ProgressInfo;                            // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_ProgressInfo2;                           // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Loading_C*                         UI_Loading;                                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SubMenu_C*                         UI_SubMenu_BR;                                     // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SubMenu_C*                         UI_SubMenu_BR_1;                                   // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SubMenu_C*                         UI_SubMenu_C;                                      // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SubMenu_C*                         UI_SubMenu_C_2;                                    // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SubMenu_C*                         UI_SubMenu_C_6;                                    // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SubMenu_C*                         UI_SubMenu_C_7;                                    // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SubMenu_C*                         UI_SubMenu_Conquest;                               // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SubMenu_C*                         UI_SubMenu_Host_1;                                 // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SubMenu_C*                         UI_SubMenu_Host_2;                                 // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SubMenu_C*                         UI_SubMenu_Servers_1;                              // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SubMenu_C*                         UI_SubMenu_Servers_2;                              // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMatchmakerHostConfiguration          MatchMakingConfig;                                 // 0x328(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Matchmaking;                                       // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B39[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCheckBox*                             Use_Dedicated_Server;                              // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Play_New_C* GetDefaultObj();

	class FText Tool_Tip_On_Large_Parties(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, TArray<struct FUniqueNetIdRepl>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class FText K2Node_Select_Default);
	bool Disable_On_Large_Parties(class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, TArray<struct FUniqueNetIdRepl>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	enum class ESlateVisibility Get_PlayMenuBox_LowLevel_Visibility_0(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_GameInstance_C* CallFunc_Current_Game_BP_Instance_AsBP_Game_Instance, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	bool Get_PlayMenuBox_bIsEnabled_0(class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, bool CallFunc_Is_Matchmaking_Busy_Matchmaking_Busy, bool CallFunc_Not_PreBool_ReturnValue);
	bool Get_UI_SubMenu_BR_bIsEnabled_0();
	bool Get_Button_Stop_bIsEnabled_0(class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, bool CallFunc_Not_PreBool_ReturnValue);
	class FText SetBackButtonText(class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, bool CallFunc_Is_Matchmaking_Busy_Matchmaking_Busy);
	enum class ESlateVisibility ShowPlayMenu(class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, bool CallFunc_Is_Matchmaking_Busy_Matchmaking_Busy);
	enum class ESlateVisibility ShowMatchmakingInfo(class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, bool CallFunc_Is_Matchmaking_Busy_Matchmaking_Busy);
	void Construct();
	void BndEvt__UI_SubMenu_C_2_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature();
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void Start_Matchmaking(enum class E_GameModes Game_Mode);
	void UpdateProgressInfo(const struct FMatchmakerProgressInfo& Progress_info);
	void StopMatchmaking();
	void BndEvt__UI_Play_New_Button_Back_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_Play_New_UI_SubMenu_BR_1_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
	void BndEvt__UI_Play_New_UI_SubMenu_Conquest_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature();
	void BndEvt__UI_Play_New_UI_SubMenu_Servers_2_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature();
	void BndEvt__UI_Play_New_Button_Back_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_Play_New(int32 EntryPoint, TArray<class UUI_StartMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_StartMenu_C* CallFunc_Array_Get_Item, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller_1, bool K2Node_DynamicCast_bSuccess_1, enum class E_GameModes K2Node_CustomEvent_Game_Mode, const struct FMatchmakerProgressInfo& K2Node_CustomEvent_Progress_info, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, class FText CallFunc_AsTimespan_Timespan_ReturnValue, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_2, class FText CallFunc_Format_ReturnValue, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_3);
};

}


