#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Alpha_PlayerController.Alpha_PlayerController_C
// (Actor, PlayerController)

class UClass* AAlpha_PlayerController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Alpha_PlayerController_C");

	return Clss;
}


// Alpha_PlayerController_C Alpha_PlayerController.Default__Alpha_PlayerController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAlpha_PlayerController_C* AAlpha_PlayerController_C::GetDefaultObj()
{
	static class AAlpha_PlayerController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAlpha_PlayerController_C*>(AAlpha_PlayerController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Alpha_PlayerController.Alpha_PlayerController_C.Set UserName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      UserName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      User_Name                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CurrentRandomInt                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)

void AAlpha_PlayerController_C::Set_UserName(const class FString& UserName, class FString* User_Name, int32 CurrentRandomInt, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "Set UserName");

	Params::AAlpha_PlayerController_C_Set_UserName_Params Parms{};

	Parms.UserName = UserName;
	Parms.CurrentRandomInt = CurrentRandomInt;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

	if (User_Name != nullptr)
		*User_Name = std::move(Parms.User_Name);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.S_ServerRequestServerTime
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Requester                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RequestWorldTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAlpha_PlayerController_C::S_ServerRequestServerTime(class APlayerController* Requester, float RequestWorldTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "S_ServerRequestServerTime");

	Params::AAlpha_PlayerController_C_S_ServerRequestServerTime_Params Parms{};

	Parms.Requester = Requester;
	Parms.RequestWorldTime = RequestWorldTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.ClientReportServerTime
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              RequestWorldTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ServerTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAlpha_PlayerController_C::ClientReportServerTime(float RequestWorldTime, float ServerTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "ClientReportServerTime");

	Params::AAlpha_PlayerController_C_ClientReportServerTime_Params Parms{};

	Parms.RequestWorldTime = RequestWorldTime;
	Parms.ServerTime = ServerTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.RequestServerTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAlpha_PlayerController_C::RequestServerTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "RequestServerTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAlpha_PlayerController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.S_SetOwnShipCustomisations
// (Net, NetReliable, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class E_ShipTypes>     My_Ship_Types                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FST_ShipCustomisations>My_Ship_Customization                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AAlpha_PlayerController_C::S_SetOwnShipCustomisations(TArray<enum class E_ShipTypes>& My_Ship_Types, TArray<struct FST_ShipCustomisations>& My_Ship_Customization)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "S_SetOwnShipCustomisations");

	Params::AAlpha_PlayerController_C_S_SetOwnShipCustomisations_Params Parms{};

	Parms.My_Ship_Types = My_Ship_Types;
	Parms.My_Ship_Customization = My_Ship_Customization;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.S_SetOwnPlayerCustomisation
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_PlayerCustomisation     Player_Customizations                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAlpha_PlayerController_C::S_SetOwnPlayerCustomisation(const struct FST_PlayerCustomisation& Player_Customizations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "S_SetOwnPlayerCustomisation");

	Params::AAlpha_PlayerController_C_S_SetOwnPlayerCustomisation_Params Parms{};

	Parms.Player_Customizations = Player_Customizations;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.S_SetUserName
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Preffered_Username                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AAlpha_PlayerController_C::S_SetUserName(const class FString& Preffered_Username)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "S_SetUserName");

	Params::AAlpha_PlayerController_C_S_SetUserName_Params Parms{};

	Parms.Preffered_Username = Preffered_Username;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.S_SetDesiredMatchmakingId
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Desired_Matchmaking_Id                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAlpha_PlayerController_C::S_SetDesiredMatchmakingId(int32 Desired_Matchmaking_Id)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "S_SetDesiredMatchmakingId");

	Params::AAlpha_PlayerController_C_S_SetDesiredMatchmakingId_Params Parms{};

	Parms.Desired_Matchmaking_Id = Desired_Matchmaking_Id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.S_FinishInitialReplication
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Finish_Replication                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAlpha_PlayerController_C::S_FinishInitialReplication(bool Finish_Replication)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "S_FinishInitialReplication");

	Params::AAlpha_PlayerController_C_S_FinishInitialReplication_Params Parms{};

	Parms.Finish_Replication = Finish_Replication;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.S_SetPrimaryPlatformId
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Primary_Platform_ID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AAlpha_PlayerController_C::S_SetPrimaryPlatformId(const class FString& Primary_Platform_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "S_SetPrimaryPlatformId");

	Params::AAlpha_PlayerController_C_S_SetPrimaryPlatformId_Params Parms{};

	Parms.Primary_Platform_ID = Primary_Platform_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.S_Initialize Trackers
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAlpha_PlayerController_C::S_Initialize_Trackers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "S_Initialize Trackers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.On Logout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAlpha_PlayerController_C::On_Logout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "On Logout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.OC_On Game Started
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAlpha_PlayerController_C::OC_On_Game_Started()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "OC_On Game Started");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.OC_On Game Mode Custom Game Mode Start
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAlpha_PlayerController_C::OC_On_Game_Mode_Custom_Game_Mode_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "OC_On Game Mode Custom Game Mode Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.OC_On Game Ended
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAlpha_PlayerController_C::OC_On_Game_Ended()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "OC_On Game Ended");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.OC_On Game Started Countdown
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAlpha_PlayerController_C::OC_On_Game_Started_Countdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "OC_On Game Started Countdown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.OC_On Team Defeated
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANewTeamManager_C*           Team                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAlpha_PlayerController_C::OC_On_Team_Defeated(class ANewTeamManager_C* Team)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "OC_On Team Defeated");

	Params::AAlpha_PlayerController_C_OC_On_Team_Defeated_Params Parms{};

	Parms.Team = Team;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.S_Communicate_Extra_Data
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Hardware_Info                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AAlpha_PlayerController_C::S_Communicate_Extra_Data(const class FString& Hardware_Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "S_Communicate_Extra_Data");

	Params::AAlpha_PlayerController_C_S_Communicate_Extra_Data_Params Parms{};

	Parms.Hardware_Info = Hardware_Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.S_Set_CheckSum
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSHA256Hash                 CheckSum                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void AAlpha_PlayerController_C::S_Set_CheckSum(const struct FSHA256Hash& CheckSum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "S_Set_CheckSum");

	Params::AAlpha_PlayerController_C_S_Set_CheckSum_Params Parms{};

	Parms.CheckSum = CheckSum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.ExecuteUbergraph_Alpha_PlayerController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDeviceId_ReturnValue                                 (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_CustomEvent_requester                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_requestWorldTime_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_PlayerController_C*   K2Node_DynamicCast_AsAlpha_Player_Controller                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetServerWorldTimeSeconds_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_requestWorldTime                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_serverTime                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSeconds_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class E_ShipTypes>     K2Node_CustomEvent_My_Ship_Types                                 (ConstParm, ReferenceParm)
// TArray<struct FST_ShipCustomisations>K2Node_CustomEvent_My_Ship_Customization                         (ConstParm, ReferenceParm)
// struct FST_PlayerCustomisation     K2Node_CustomEvent_Player_Customizations                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_PlayerState_C*        K2Node_DynamicCast_AsAlpha_Player_State                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Preffered_Username                            (ZeroConstructor, HasGetValueTypeHash)
// class AAlpha_PlayerState_C*        K2Node_DynamicCast_AsAlpha_Player_State_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Desired_Matchmaking_Id                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Finish_Replication                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Primary_Platform_Id                           (ZeroConstructor, HasGetValueTypeHash)
// class AAlpha_PlayerState_C*        K2Node_DynamicCast_AsAlpha_Player_State_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class E_ShipTypes>     CallFunc_Get_Ship_Customizations_Network_Ship_Types              (ReferenceParm)
// TArray<struct FST_ShipCustomisations>CallFunc_Get_Ship_Customizations_Network_Ship_Cosmetics          (ReferenceParm)
// class FString                      CallFunc_Get_Primary_Account_ID_Account_ID                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Player_User_Name_Nickname                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Set_UserName_User_Name                                  (ZeroConstructor, HasGetValueTypeHash)
// struct FST_PlayerCustomisation     CallFunc_Get_Player_Customization_Customization                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANewTeamManager_C*           K2Node_CustomEvent_Team                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Hardware_Info                                 (ZeroConstructor, HasGetValueTypeHash)
// struct FSHA256Hash                 K2Node_CustomEvent_CheckSum                                      (None)
// class AEOS_PlayerState_C*          K2Node_DynamicCast_AsEOS_Player_State                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSHA256Hash                 CallFunc_Calculate_Check_Sum_Check_Sum                           (None)

void AAlpha_PlayerController_C::ExecuteUbergraph_Alpha_PlayerController(int32 EntryPoint, const class FString& CallFunc_GetDeviceId_ReturnValue, class APlayerController* K2Node_CustomEvent_requester, float K2Node_CustomEvent_requestWorldTime_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AAlpha_PlayerController_C* K2Node_DynamicCast_AsAlpha_Player_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetServerWorldTimeSeconds_ReturnValue, float K2Node_CustomEvent_requestWorldTime, float K2Node_CustomEvent_serverTime, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsLocalController_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, bool CallFunc_IsLocalPlayerController_ReturnValue, TArray<enum class E_ShipTypes>& K2Node_CustomEvent_My_Ship_Types, TArray<struct FST_ShipCustomisations>& K2Node_CustomEvent_My_Ship_Customization, const struct FST_PlayerCustomisation& K2Node_CustomEvent_Player_Customizations, class AAlpha_PlayerState_C* K2Node_DynamicCast_AsAlpha_Player_State, bool K2Node_DynamicCast_bSuccess_1, const class FString& K2Node_CustomEvent_Preffered_Username, class AAlpha_PlayerState_C* K2Node_DynamicCast_AsAlpha_Player_State_1, bool K2Node_DynamicCast_bSuccess_2, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 K2Node_CustomEvent_Desired_Matchmaking_Id, bool K2Node_CustomEvent_Finish_Replication, const class FString& K2Node_CustomEvent_Primary_Platform_Id, class AAlpha_PlayerState_C* K2Node_DynamicCast_AsAlpha_Player_State_2, bool K2Node_DynamicCast_bSuccess_3, const class FString& CallFunc_Conv_BoolToString_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess_4, TArray<enum class E_ShipTypes>& CallFunc_Get_Ship_Customizations_Network_Ship_Types, TArray<struct FST_ShipCustomisations>& CallFunc_Get_Ship_Customizations_Network_Ship_Cosmetics, const class FString& CallFunc_Get_Primary_Account_ID_Account_ID, const class FString& CallFunc_Get_Player_User_Name_Nickname, const class FString& CallFunc_Set_UserName_User_Name, const struct FST_PlayerCustomisation& CallFunc_Get_Player_Customization_Customization, class ANewTeamManager_C* K2Node_CustomEvent_Team, const class FString& K2Node_CustomEvent_Hardware_Info, const struct FSHA256Hash& K2Node_CustomEvent_CheckSum, class AEOS_PlayerState_C* K2Node_DynamicCast_AsEOS_Player_State, bool K2Node_DynamicCast_bSuccess_5, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, const struct FSHA256Hash& CallFunc_Calculate_Check_Sum_Check_Sum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "ExecuteUbergraph_Alpha_PlayerController");

	Params::AAlpha_PlayerController_C_ExecuteUbergraph_Alpha_PlayerController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDeviceId_ReturnValue = CallFunc_GetDeviceId_ReturnValue;
	Parms.K2Node_CustomEvent_requester = K2Node_CustomEvent_requester;
	Parms.K2Node_CustomEvent_requestWorldTime_1 = K2Node_CustomEvent_requestWorldTime_1;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsAlpha_Player_Controller = K2Node_DynamicCast_AsAlpha_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetServerWorldTimeSeconds_ReturnValue = CallFunc_GetServerWorldTimeSeconds_ReturnValue;
	Parms.K2Node_CustomEvent_requestWorldTime = K2Node_CustomEvent_requestWorldTime;
	Parms.K2Node_CustomEvent_serverTime = K2Node_CustomEvent_serverTime;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_IsLocalController_ReturnValue = CallFunc_IsLocalController_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue_1 = CallFunc_GetTimeSeconds_ReturnValue_1;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.K2Node_CustomEvent_My_Ship_Types = K2Node_CustomEvent_My_Ship_Types;
	Parms.K2Node_CustomEvent_My_Ship_Customization = K2Node_CustomEvent_My_Ship_Customization;
	Parms.K2Node_CustomEvent_Player_Customizations = K2Node_CustomEvent_Player_Customizations;
	Parms.K2Node_DynamicCast_AsAlpha_Player_State = K2Node_DynamicCast_AsAlpha_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_Preffered_Username = K2Node_CustomEvent_Preffered_Username;
	Parms.K2Node_DynamicCast_AsAlpha_Player_State_1 = K2Node_DynamicCast_AsAlpha_Player_State_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_CustomEvent_Desired_Matchmaking_Id = K2Node_CustomEvent_Desired_Matchmaking_Id;
	Parms.K2Node_CustomEvent_Finish_Replication = K2Node_CustomEvent_Finish_Replication;
	Parms.K2Node_CustomEvent_Primary_Platform_Id = K2Node_CustomEvent_Primary_Platform_Id;
	Parms.K2Node_DynamicCast_AsAlpha_Player_State_2 = K2Node_DynamicCast_AsAlpha_Player_State_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Get_Ship_Customizations_Network_Ship_Types = CallFunc_Get_Ship_Customizations_Network_Ship_Types;
	Parms.CallFunc_Get_Ship_Customizations_Network_Ship_Cosmetics = CallFunc_Get_Ship_Customizations_Network_Ship_Cosmetics;
	Parms.CallFunc_Get_Primary_Account_ID_Account_ID = CallFunc_Get_Primary_Account_ID_Account_ID;
	Parms.CallFunc_Get_Player_User_Name_Nickname = CallFunc_Get_Player_User_Name_Nickname;
	Parms.CallFunc_Set_UserName_User_Name = CallFunc_Set_UserName_User_Name;
	Parms.CallFunc_Get_Player_Customization_Customization = CallFunc_Get_Player_Customization_Customization;
	Parms.K2Node_CustomEvent_Team = K2Node_CustomEvent_Team;
	Parms.K2Node_CustomEvent_Hardware_Info = K2Node_CustomEvent_Hardware_Info;
	Parms.K2Node_CustomEvent_CheckSum = K2Node_CustomEvent_CheckSum;
	Parms.K2Node_DynamicCast_AsEOS_Player_State = K2Node_DynamicCast_AsEOS_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance;
	Parms.CallFunc_Calculate_Check_Sum_Check_Sum = CallFunc_Calculate_Check_Sum_Check_Sum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.On Team Defeated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANewTeamManager_C*           Team                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAlpha_PlayerController_C::On_Team_Defeated__DelegateSignature(class ANewTeamManager_C* Team)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "On Team Defeated__DelegateSignature");

	Params::AAlpha_PlayerController_C_On_Team_Defeated__DelegateSignature_Params Parms{};

	Parms.Team = Team;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.On Game Started Countdown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAlpha_PlayerController_C::On_Game_Started_Countdown__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "On Game Started Countdown__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.On Game Ended__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAlpha_PlayerController_C::On_Game_Ended__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "On Game Ended__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.On Game Started__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAlpha_PlayerController_C::On_Game_Started__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "On Game Started__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Alpha_PlayerController.Alpha_PlayerController_C.On Game Mode Custom Game Mode Start__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAlpha_PlayerController_C::On_Game_Mode_Custom_Game_Mode_Start__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Alpha_PlayerController_C", "On Game Mode Custom Game Mode Start__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


