#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xF0 - 0xB0)
// BlueprintGeneratedClass TimeTracker.TimeTracker_C
class UTimeTracker_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AAlpha_PlayerController_C*             Controller_ref;                                    // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Time_tracker_Active;                               // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A57[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             Previous_Date_Time;                                // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                Time_Deviations;                                   // 0xD0(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	float                                        Time_Interval;                                     // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Margin_of_error;                                   // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Event_Timer;                                       // 0xE8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTimeTracker_C* GetDefaultObj();

	void Create_Time_Sync_Report(class UVaRestJsonObject* Json_Object, class UVaRestRequestJSON* Json_Request, class UVaRestSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, float Temp_float_Variable, class UVaRestRequestJSON* CallFunc_ConstructVaRestRequestExt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class AAlpha_PlayerState_C* K2Node_DynamicCast_AsAlpha_Player_State, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPlayerName_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 Temp_int_Array_Index_Variable, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, float CallFunc_Array_Get_Item, float CallFunc_Add_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance_1, class UVaRestSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, class UVaRestJsonObject* CallFunc_ConstructVaRestJsonObject_ReturnValue);
	void ReceiveBeginPlay();
	void S_Start_Time_Tracker();
	void OC_Start_Time_Tracker();
	void Compare_Time();
	void S_Stop_Time_Tracker(class ANewTeamManager_C* Team);
	void OC_Stop_Time_Tracker();
	void Force_Stop_Time_Tracker();
	void ExecuteUbergraph_TimeTracker(int32 EntryPoint, bool CallFunc_WithEditor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_IsClosed_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class AAlpha_GameMode_C* CallFunc_CurrentGameMode_As_Alpha_Game_Mode, class AAlpha_PlayerController_C* K2Node_DynamicCast_AsAlpha_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FDateTime& CallFunc_Now_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue_1, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class ANewTeamManager_C* K2Node_CustomEvent_Team, bool CallFunc_IsLocalPlayerController_ReturnValue, bool CallFunc_Compare_Teams_Is_Same_Team, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue);
};

}


