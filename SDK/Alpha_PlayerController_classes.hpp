#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x77 (0x630 - 0x5B9)
// BlueprintGeneratedClass Alpha_PlayerController.Alpha_PlayerController_C
class AAlpha_PlayerController_C : public ABP_BaseController_C
{
public:
	uint8                                        Pad_3122[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTimeTracker_C*                        TimeTracker;                                       // 0x5C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTeam_Crew_Ship_Member_State_C*        Team_Crew_Ship_Member_State;                       // 0x5D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ServerTime;                                        // 0x5D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3123[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            On_Game_Mode_Custom_Game_Mode_Start;               // 0x5E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            On_Game_Started;                                   // 0x5F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            On_Game_Ended;                                     // 0x600(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            On_Game_Started_Countdown;                         // 0x610(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            On_Team_Defeated;                                  // 0x620(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class AAlpha_PlayerController_C* GetDefaultObj();

	void Set_UserName(const class FString& UserName, class FString* User_Name, int32 CurrentRandomInt, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1);
	void S_ServerRequestServerTime(class APlayerController* Requester, float RequestWorldTime);
	void ClientReportServerTime(float RequestWorldTime, float ServerTime);
	void RequestServerTime();
	void ReceiveBeginPlay();
	void S_SetOwnShipCustomisations(TArray<enum class E_ShipTypes>& My_Ship_Types, TArray<struct FST_ShipCustomisations>& My_Ship_Customization);
	void S_SetOwnPlayerCustomisation(const struct FST_PlayerCustomisation& Player_Customizations);
	void S_SetUserName(const class FString& Preffered_Username);
	void S_SetDesiredMatchmakingId(int32 Desired_Matchmaking_Id);
	void S_FinishInitialReplication(bool Finish_Replication);
	void S_SetPrimaryPlatformId(const class FString& Primary_Platform_ID);
	void S_Initialize_Trackers();
	void On_Logout();
	void OC_On_Game_Started();
	void OC_On_Game_Mode_Custom_Game_Mode_Start();
	void OC_On_Game_Ended();
	void OC_On_Game_Started_Countdown();
	void OC_On_Team_Defeated(class ANewTeamManager_C* Team);
	void S_Communicate_Extra_Data(const class FString& Hardware_Info);
	void S_Set_CheckSum(const struct FSHA256Hash& CheckSum);
	void ExecuteUbergraph_Alpha_PlayerController(int32 EntryPoint, const class FString& CallFunc_GetDeviceId_ReturnValue, class APlayerController* K2Node_CustomEvent_requester, float K2Node_CustomEvent_requestWorldTime_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AAlpha_PlayerController_C* K2Node_DynamicCast_AsAlpha_Player_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetServerWorldTimeSeconds_ReturnValue, float K2Node_CustomEvent_requestWorldTime, float K2Node_CustomEvent_serverTime, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsLocalController_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, bool CallFunc_IsLocalPlayerController_ReturnValue, TArray<enum class E_ShipTypes>& K2Node_CustomEvent_My_Ship_Types, TArray<struct FST_ShipCustomisations>& K2Node_CustomEvent_My_Ship_Customization, const struct FST_PlayerCustomisation& K2Node_CustomEvent_Player_Customizations, class AAlpha_PlayerState_C* K2Node_DynamicCast_AsAlpha_Player_State, bool K2Node_DynamicCast_bSuccess_1, const class FString& K2Node_CustomEvent_Preffered_Username, class AAlpha_PlayerState_C* K2Node_DynamicCast_AsAlpha_Player_State_1, bool K2Node_DynamicCast_bSuccess_2, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 K2Node_CustomEvent_Desired_Matchmaking_Id, bool K2Node_CustomEvent_Finish_Replication, const class FString& K2Node_CustomEvent_Primary_Platform_Id, class AAlpha_PlayerState_C* K2Node_DynamicCast_AsAlpha_Player_State_2, bool K2Node_DynamicCast_bSuccess_3, const class FString& CallFunc_Conv_BoolToString_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess_4, TArray<enum class E_ShipTypes>& CallFunc_Get_Ship_Customizations_Network_Ship_Types, TArray<struct FST_ShipCustomisations>& CallFunc_Get_Ship_Customizations_Network_Ship_Cosmetics, const class FString& CallFunc_Get_Primary_Account_ID_Account_ID, const class FString& CallFunc_Get_Player_User_Name_Nickname, const class FString& CallFunc_Set_UserName_User_Name, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization, class ANewTeamManager_C* K2Node_CustomEvent_Team, const class FString& K2Node_CustomEvent_Hardware_Info, const struct FSHA256Hash& K2Node_CustomEvent_CheckSum, class AEOS_PlayerState_C* K2Node_DynamicCast_AsEOS_Player_State, bool K2Node_DynamicCast_bSuccess_5, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, const struct FSHA256Hash& CallFunc_Calculate_Check_Sum_Check_Sum);
	void On_Team_Defeated__DelegateSignature(class ANewTeamManager_C* Team);
	void On_Game_Started_Countdown__DelegateSignature();
	void On_Game_Ended__DelegateSignature();
	void On_Game_Started__DelegateSignature();
	void On_Game_Mode_Custom_Game_Mode_Start__DelegateSignature();
};

}


