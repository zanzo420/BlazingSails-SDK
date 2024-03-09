#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x6A8 - 0x630)
// BlueprintGeneratedClass BP_MainMenuCOntroller.BP_MainMenuCOntroller_C
class ABP_MainMenuCOntroller_C : public AAlpha_PlayerController_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x630(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         RotateMode;                                        // 0x638(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3827[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Mannequin_C*                       MannequinRef;                                      // 0x640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_ShipWaterCulling_C*>        ShipCullings;                                      // 0x648(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AWaterPlane_C*                         WaterPlaneRef;                                     // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_CheatCodes_C*                      CheatCodeRef;                                      // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BoatMeshBase_C*                    ShipRef;                                           // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_ObjectToRotate                  ObjectToRotate;                                    // 0x670(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3828[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LastYawRotation;                                   // 0x674(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_LobbyChat_C*                       LobbyChatRef;                                      // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_StartMenu_C*                       StartMenuRef;                                      // 0x680(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MouseYController;                                  // 0x688(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MouseXController;                                  // 0x68C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SimulatedMouseClick;                               // 0x690(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3829[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            RightThumbStickScroll;                             // 0x698(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_MainMenuCOntroller_C* GetDefaultObj();

	void InpActEvt_Enter_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_Multiply_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_PrimaryFire_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_PrimaryFire_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_F12_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void CreateAndAddWaterCullingVolume(class ABP_BoatMeshBase_C* BoatMeshBaseRef);
	void S_GrantRandomtestItems();
	void GrantRandomtestitems();
	void ResetShipFetch();
	void InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_0(float AxisValue);
	void InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_0(float AxisValue);
	void InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_2(float AxisValue);
	void ExecuteUbergraph_BP_MainMenuCOntroller(int32 EntryPoint, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FKey& K2Node_InputActionEvent_Key, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputKeyEvent_Key_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_Key_IsGamepadKey_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& K2Node_InputKeyEvent_Key_5, const struct FKey& K2Node_InputKeyEvent_Key_6, class UUI_CheatCodes_C* CallFunc_Create_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, class UUI_FPSCounter_C* CallFunc_Create_ReturnValue_1, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float K2Node_Event_DeltaSeconds, const struct FKey& K2Node_InputKeyEvent_Key_7, TArray<class AWaterPlane_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool Temp_bool_Variable, class AWaterPlane_C* CallFunc_Array_Get_Item, bool Temp_bool_Has_Been_Initd_Variable_2, class ABP_BoatMeshBase_C* K2Node_CustomEvent_BoatMeshBaseRef, bool CallFunc_SetHardwareCursor_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_MainMenuPawn_C* K2Node_DynamicCast_AsBP_Main_Menu_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_SetActorRotation_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class ABP_MainMenuPawn_C* K2Node_DynamicCast_AsBP_Main_Menu_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item_1, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable_1, bool Temp_bool_IsClosed_Variable_3, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_2, bool CallFunc_K2_SetActorRotation_ReturnValue_1, TArray<class ABP_BoatMeshBase_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, bool CallFunc_IsValid_ReturnValue_1, class ABP_BoatMeshBase_C* CallFunc_Array_Get_Item_2, const struct FKey& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_3, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_4, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, bool CallFunc_IsValid_ReturnValue_3, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_5, float CallFunc_BreakRotator_Roll_4, float CallFunc_BreakRotator_Pitch_4, float CallFunc_BreakRotator_Yaw_4, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_6, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_3, bool CallFunc_K2_SetActorRotation_ReturnValue_2, const struct FKey& K2Node_InputKeyEvent_Key_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors_3, float K2Node_InputAxisKeyEvent_AxisValue_2, float K2Node_InputAxisKeyEvent_AxisValue_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, float K2Node_Select_Default, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_3, bool CallFunc_Less_FloatFloat_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_3, float K2Node_Select_Default_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 CallFunc_Round_ReturnValue_1, bool CallFunc_GetMousePosition_Success, int32 CallFunc_GetMousePosition_X, int32 CallFunc_GetMousePosition_Y, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetMousePosition_Success_1, int32 CallFunc_GetMousePosition_X_1, int32 CallFunc_GetMousePosition_Y_1, bool Temp_bool_Has_Been_Initd_Variable_4, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GetMousePosition_Success_2, int32 CallFunc_GetMousePosition_X_2, int32 CallFunc_GetMousePosition_Y_2, bool CallFunc_GetMousePosition_Success_3, int32 CallFunc_GetMousePosition_X_3, int32 CallFunc_GetMousePosition_Y_3, const struct FKey& K2Node_InputKeyEvent_Key_3, float K2Node_InputAxisEvent_AxisValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, bool CallFunc_K2_SetActorRotation_ReturnValue_3, bool CallFunc_K2_SetActorRotation_ReturnValue_4, class UUI_StartMenu_C* CallFunc_Create_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool Temp_bool_IsClosed_Variable_4, const struct FKey& Temp_struct_Variable_2, const struct FKey& K2Node_InputKeyEvent_Key_4, float K2Node_InputAxisKeyEvent_AxisValue, float CallFunc_Multiply_FloatFloat_ReturnValue_4);
	void RightThumbStickScroll__DelegateSignature(float ScrollValue);
};

}


