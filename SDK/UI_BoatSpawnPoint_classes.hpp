#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x330 - 0x2D0)
// WidgetBlueprintGeneratedClass UI_BoatSpawnPoint.UI_BoatSpawnPoint_C
class UUI_BoatSpawnPoint_C : public UUI_KnifeUsingBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      CircleRotation;                                    // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Selected;                                          // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Btn_ClaimSpawnPoint;                               // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Selection;                                     // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          KnifeCanvasPanel_2;                                // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_BoatSpawn_C*                       SpawnPointRef;                                     // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TakenByOtherTeam;                                  // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BCC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                SelectedPlayerColors;                              // 0x318(0x10)(Edit, BlueprintVisible)
	bool                                         TakenByOwnTeam;                                    // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SpawnPointSelected;                                // 0x329(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Disabled;                                          // 0x32A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BCD[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Cluster_ID;                                        // 0x32C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_BoatSpawnPoint_C* GetDefaultObj();

	void Validate_Selected(class APlayerState* Player_State, bool* Valid, class ABR_Alpha_PlayerState_C* K2Node_DynamicCast_AsBR_Alpha_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	enum class ESlateVisibility ShowImage();
	struct FLinearColor SetTopArrowColor(TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Get_Item, class FName CallFunc_Array_Get_Item_1, const struct FST_TeamPlayerColor& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	struct FLinearColor SetRightArrowColor(TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Get_Item, class FName CallFunc_Array_Get_Item_1, const struct FST_TeamPlayerColor& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	struct FLinearColor SetLeftArrowColor(TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Get_Item, class FName CallFunc_Array_Get_Item_1, const struct FST_TeamPlayerColor& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	struct FLinearColor SetBottomArrowColor(TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Get_Item, class FName CallFunc_Array_Get_Item_1, const struct FST_TeamPlayerColor& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	enum class ESlateVisibility ShowTopArrow(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	enum class ESlateVisibility ShowRightArrow(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	enum class ESlateVisibility ShowLeftArrow(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	enum class ESlateVisibility ShowBottomArrow(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	bool SetEnableButton();
	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Set_Voted();
	void Refresh();
	void SelectSpawnPoint();
	void ExecuteUbergraph_UI_BoatSpawnPoint(int32 EntryPoint, class ABR_Alpha_PlayerState_C* CallFunc_Current_BR_Alpha_Player_State_As_BR_Alpha_Player_State, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, TArray<class UUI_SpawnSelection_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_SpawnSelection_C* CallFunc_Array_Get_Item, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
};

}


