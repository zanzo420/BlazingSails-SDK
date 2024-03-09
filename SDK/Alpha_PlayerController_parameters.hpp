#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x58 - 0x0)
// Function Alpha_PlayerController.Alpha_PlayerController_C.Set UserName
struct AAlpha_PlayerController_C_Set_UserName_Params
{
public:
	class FString                                UserName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                User_Name;                                         // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        CurrentRandomInt;                                  // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_GameInstance_C*                    K2Node_DynamicCast_AsBP_Game_Instance;             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x39(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30FE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomInteger_ReturnValue;                // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Get_Item;                           // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function Alpha_PlayerController.Alpha_PlayerController_C.S_ServerRequestServerTime
struct AAlpha_PlayerController_C_S_ServerRequestServerTime_Params
{
public:
	class APlayerController*                     Requester;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RequestWorldTime;                                  // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Alpha_PlayerController.Alpha_PlayerController_C.ClientReportServerTime
struct AAlpha_PlayerController_C_ClientReportServerTime_Params
{
public:
	float                                        RequestWorldTime;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ServerTime;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function Alpha_PlayerController.Alpha_PlayerController_C.S_SetOwnShipCustomisations
struct AAlpha_PlayerController_C_S_SetOwnShipCustomisations_Params
{
public:
	TArray<enum class E_ShipTypes>               My_Ship_Types;                                     // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FST_ShipCustomisations>        My_Ship_Customization;                             // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x6C (0x6C - 0x0)
// Function Alpha_PlayerController.Alpha_PlayerController_C.S_SetOwnPlayerCustomisation
struct AAlpha_PlayerController_C_S_SetOwnPlayerCustomisation_Params
{
public:
	struct FST_PlayerCustomisation               Player_Customizations;                             // 0x0(0x6C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Alpha_PlayerController.Alpha_PlayerController_C.S_SetUserName
struct AAlpha_PlayerController_C_S_SetUserName_Params
{
public:
	class FString                                Preffered_Username;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Alpha_PlayerController.Alpha_PlayerController_C.S_SetDesiredMatchmakingId
struct AAlpha_PlayerController_C_S_SetDesiredMatchmakingId_Params
{
public:
	int32                                        Desired_Matchmaking_Id;                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Alpha_PlayerController.Alpha_PlayerController_C.S_FinishInitialReplication
struct AAlpha_PlayerController_C_S_FinishInitialReplication_Params
{
public:
	bool                                         Finish_Replication;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Alpha_PlayerController.Alpha_PlayerController_C.S_SetPrimaryPlatformId
struct AAlpha_PlayerController_C_S_SetPrimaryPlatformId_Params
{
public:
	class FString                                Primary_Platform_ID;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Alpha_PlayerController.Alpha_PlayerController_C.OC_On Team Defeated
struct AAlpha_PlayerController_C_OC_On_Team_Defeated_Params
{
public:
	class ANewTeamManager_C*                     Team;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Alpha_PlayerController.Alpha_PlayerController_C.S_Communicate_Extra_Data
struct AAlpha_PlayerController_C_S_Communicate_Extra_Data_Params
{
public:
	class FString                                Hardware_Info;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Alpha_PlayerController.Alpha_PlayerController_C.S_Set_CheckSum
struct AAlpha_PlayerController_C_S_Set_CheckSum_Params
{
public:
	struct FSHA256Hash                           CheckSum;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x298 (0x298 - 0x0)
// Function Alpha_PlayerController.Alpha_PlayerController_C.ExecuteUbergraph_Alpha_PlayerController
struct AAlpha_PlayerController_C_ExecuteUbergraph_Alpha_PlayerController_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3111[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDeviceId_ReturnValue;                  // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                     K2Node_CustomEvent_requester;                      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_requestWorldTime_1;             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3112[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAlpha_PlayerController_C*             K2Node_DynamicCast_AsAlpha_Player_Controller;      // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3113[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetServerWorldTimeSeconds_ReturnValue;    // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_requestWorldTime;               // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_serverTime;                     // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTimeSeconds_ReturnValue;               // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalController_ReturnValue;            // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3114[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTimeSeconds_ReturnValue_1;             // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalPlayerController_ReturnValue;      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3115[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class E_ShipTypes>               K2Node_CustomEvent_My_Ship_Types;                  // 0x68(0x10)(ConstParm, ReferenceParm)
	TArray<struct FST_ShipCustomisations>        K2Node_CustomEvent_My_Ship_Customization;          // 0x78(0x10)(ConstParm, ReferenceParm)
	struct FST_PlayerCustomisation               K2Node_CustomEvent_Player_Customizations;          // 0x88(0x6C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3116[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAlpha_PlayerState_C*                  K2Node_DynamicCast_AsAlpha_Player_State;           // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3117[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Preffered_Username;             // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AAlpha_PlayerState_C*                  K2Node_DynamicCast_AsAlpha_Player_State_1;         // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3118[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Desired_Matchmaking_Id;         // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Finish_Replication;             // 0x13C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3119[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Primary_Platform_Id;            // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AAlpha_PlayerState_C*                  K2Node_DynamicCast_AsAlpha_Player_State_2;         // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_311B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_BoolToString_ReturnValue;            // 0x160(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_GameInstance_C*                    K2Node_DynamicCast_AsBP_Game_Instance;             // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_311D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class E_ShipTypes>               CallFunc_Get_Ship_Customizations_Network_Ship_Types; // 0x188(0x10)(ReferenceParm)
	TArray<struct FST_ShipCustomisations>        CallFunc_Get_Ship_Customizations_Network_Ship_Cosmetics; // 0x198(0x10)(ReferenceParm)
	class FString                                CallFunc_Get_Primary_Account_ID_Account_ID;        // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Get_Player_User_Name_Nickname;            // 0x1B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Set_UserName_User_Name;                   // 0x1C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FST_PlayerCustomisation               CallFunc_Get_Player_Customization_Customization;   // 0x1D8(0x6C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_311F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANewTeamManager_C*                     K2Node_CustomEvent_Team;                           // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Hardware_Info;                  // 0x250(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FSHA256Hash                           K2Node_CustomEvent_CheckSum;                       // 0x260(0x10)(None)
	class AEOS_PlayerState_C*                    K2Node_DynamicCast_AsEOS_Player_State;             // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3121[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEOS_GameInstance_C*                   CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance; // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSHA256Hash                           CallFunc_Calculate_Check_Sum_Check_Sum;            // 0x288(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// Function Alpha_PlayerController.Alpha_PlayerController_C.On Team Defeated__DelegateSignature
struct AAlpha_PlayerController_C_On_Team_Defeated__DelegateSignature_Params
{
public:
	class ANewTeamManager_C*                     Team;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


