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

// 0x68 (0x68 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Update Tokens
struct UEOS_GameInstance_C_Update_Tokens_Params
{
public:
	class UOnlineIdentitySubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetUniquePlayerId_ReturnValue;            // 0x8(0x28)(HasGetValueTypeHash)
	class UUserOnlineAccountRef*                 CallFunc_GetUserAccount_ReturnValue;               // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAuthAttribute_Found;                   // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2910[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetAuthAttribute_ReturnValue;             // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAuthAttribute_Found_1;                 // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2911[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetAuthAttribute_ReturnValue_1;           // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Restrict User
struct UEOS_GameInstance_C_Restrict_User_Params
{
public:
	class USG_BanData_C*                         BanData;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USG_BanData_C*                         CallFunc_CreateSaveGameObject_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveGameToSlot_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_WriteToRegistry_ReturnValue;              // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Handle Restricted List
struct UEOS_GameInstance_C_Handle_Restricted_List_Params
{
public:
	class FString                                Restricted;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FVariantDataBP                        K2Node_MakeStruct_VariantDataBP;                   // 0x10(0x28)(None)
	bool                                         CallFunc_Is_In_Party_In_Party_;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xAD (0xAD - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Validate Matchmaking Party Restrictions
struct UEOS_GameInstance_C_Validate_Matchmaking_Party_Restrictions_Params
{
public:
	bool                                         Restricted;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2912[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Party_Member_Primary_Account_Net_IDs;              // 0x8(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2913[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_ReadFromRegistry_ReturnValue;             // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2914[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FUniqueNetIdRepl>              CallFunc_Map_Keys_Keys;                            // 0x40(0x10)(ReferenceParm)
	bool                                         CallFunc_Is_In_Party_In_Party_;                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2915[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_Array_Get_Item;                           // 0x58(0x28)(HasGetValueTypeHash)
	class UEOS_PartyMemberReference_C*           CallFunc_Map_Find_Value;                           // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2916[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2917[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Get_Data_Int;                             // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Get_Data_string;                          // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Get_Data_float;                           // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Data_bool;                            // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE8 (0xE8 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Construct Matchmaking Party Unique Net Ids
struct UEOS_GameInstance_C_Construct_Matchmaking_Party_Unique_Net_Ids_Params
{
public:
	TArray<class FString>                        Party_Member_Unique_Net_IDs_as_Strings;            // 0x0(0x10)(Parm, OutParm)
	TArray<class FString>                        Party_Member_Unique_Net_IDs;                       // 0x10(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2918[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x38(0x28)(HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue; // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FUniqueNetIdRepl>              CallFunc_Map_Keys_Keys;                            // 0x70(0x10)(ReferenceParm)
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x80(0x10)(ReferenceParm)
	struct FUniqueNetIdRepl                      CallFunc_Array_Get_Item;                           // 0x90(0x28)(HasGetValueTypeHash)
	class UEOS_PartyMemberReference_C*           CallFunc_Map_Find_Value;                           // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2919[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_291A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue_1; // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_In_Party_In_Party_;                    // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_291B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x100 (0x100 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Compare Check Sum
struct UEOS_GameInstance_C_Compare_Check_Sum_Params
{
public:
	class FString                                A;                                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                B;                                                 // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                C;                                                 // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                D;                                                 // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSHA256Hash                           CheckSum;                                          // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Valid;                                             // 0x50(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_291C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Expected;                                          // 0x58(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FSHA256Hash                           K2Node_MakeStruct_SHA256Hash;                      // 0x68(0x10)(None)
	class FString                                CallFunc_GetHash_ReturnValue;                      // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetHash_ReturnValue_1;                    // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_291D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0xF8 (0xF8 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Calculate Check Sum
struct UEOS_GameInstance_C_Calculate_Check_Sum_Params
{
public:
	struct FSHA256Hash                           Check_Sum;                                         // 0x0(0x10)(Parm, OutParm)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDeviceId_ReturnValue;                  // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x28(0x28)(HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue; // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetProjectVersion_ReturnValue;            // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UEOS_GameInstance_C*                   CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance; // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSHA256Hash                           K2Node_MakeStruct_SHA256Hash;                      // 0x88(0x10)(None)
	class FString                                CallFunc_Get_Primary_Account_ID_Account_ID;        // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x85 (0x85 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Get Party Ready
struct UEOS_GameInstance_C_Get_Party_Ready_Params
{
public:
	bool                                         Party_Ready;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_291E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_In_Party_In_Party_;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_291F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FUniqueNetIdRepl>              CallFunc_Map_Keys_Keys;                            // 0x18(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2920[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_Array_Get_Item;                           // 0x30(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2921[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEOS_PartyMemberReference_C*           CallFunc_Map_Find_Value;                           // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Is_Member_Party_Leader_IsLeader;          // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2922[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Get_Data_Int;                             // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Get_Data_string;                          // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Get_Data_float;                           // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Data_bool;                            // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC8 (0xC8 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Set Default Attributes on Personal Party Object
struct UEOS_GameInstance_C_Set_Default_Attributes_on_Personal_Party_Object_Params
{
public:
	class UEOS_PartyMemberReference_C*           Party_Member_Reference;                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Restricted;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2923[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineIdentitySubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetUniquePlayerId_ReturnValue;            // 0x18(0x28)(HasGetValueTypeHash)
	class UUserOnlineAccountRef*                 CallFunc_GetUserAccount_ReturnValue;               // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSaveGameExist_ReturnValue;            // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetAuthAttribute_Found;                   // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2924[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetAuthAttribute_ReturnValue;             // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAuthAttribute_Found_1;                 // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2925[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetAuthAttribute_ReturnValue_1;           // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class USaveGame*                             CallFunc_LoadGameFromSlot_ReturnValue;             // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USG_BanData_C*                         K2Node_DynamicCast_AsSG_Ban_Data;                  // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2926[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_ReadFromRegistry_ReturnValue;             // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2927[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Get_Primary_Account_ID_Account_ID;        // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Get_Player_User_Name_Nickname;            // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x83 (0x83 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Clear Party Members
struct UEOS_GameInstance_C_Clear_Party_Members_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2928[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x18(0x28)(HasGetValueTypeHash)
	TArray<struct FUniqueNetIdRepl>              CallFunc_Map_Keys_Keys;                            // 0x40(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2929[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_Array_Get_Item;                           // 0x58(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue; // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x44 (0x44 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Session Follow Received
struct UEOS_GameInstance_C_Session_Follow_Received_Params
{
public:
	bool                                         CallFunc_Is_Party_Leader_IsLeader;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_292A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Get_Data_Int;                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Get_Data_string;                          // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Get_Data_float;                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Data_bool;                            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_292B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Split_LeftS;                              // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_RightS;                             // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Is_In_Party_In_Party_;                    // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Set_Contains_ReturnValue;                 // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Force Reset Party Attributes
struct UEOS_GameInstance_C_Force_Reset_Party_Attributes_Params
{
public:
	bool                                         Successful;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Validate Saved Session Data
struct UEOS_GameInstance_C_Validate_Saved_Session_Data_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Load Joined Session Data
struct UEOS_GameInstance_C_Load_Joined_Session_Data_Params
{
public:
	bool                                         CallFunc_DoesSaveGameExist_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_292C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USaveGame*                             CallFunc_LoadGameFromSlot_ReturnValue;             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USG_EOS_Session_Save_C*                K2Node_DynamicCast_AsSG_EOS_Session_Save;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Save Joined Session Data
struct UEOS_GameInstance_C_Save_Joined_Session_Data_Params
{
public:
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveGameToSlot_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_292D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USG_EOS_Session_Save_C*                CallFunc_CreateSaveGameObject_ReturnValue;         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x81 (0x81 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Get Party ID
struct UEOS_GameInstance_C_Get_Party_ID_Params
{
public:
	class FString                                PartyId;                                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_292E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x28(0x28)(HasGetValueTypeHash)
	class FString                                CallFunc_MakeJoinInfoJson_ReturnValue;             // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FEOS_Party_Info                       CallFunc_JsonStringToStructV2_Struct;              // 0x60(0x20)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_JsonStringToStructV2_ReturnValue;         // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Custom Popup
struct UEOS_GameInstance_C_Custom_Popup_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Text;                                              // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UUI_DisconnectPopup_C*                 UI_element;                                        // 0x30(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_DisconnectPopup_C*                 CallFunc_Create_ReturnValue;                       // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Global Data Response
struct UEOS_GameInstance_C_Global_Data_Response_Params
{
public:
	class UVaRestRequestJSON*                    Request;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVaRestRequestStatus              CallFunc_GetStatus_ReturnValue;                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_292F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVaRestJsonObject*                     CallFunc_GetResponseObject_ReturnValue;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2930[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetStringField_ReturnValue;               // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Construct Global Data Request
struct UEOS_GameInstance_C_Construct_Global_Data_Request_Params
{
public:
	class UVaRestJsonObject*                     Json_Object_Local;                                 // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestRequestJSON*                    Json_Request_Local;                                // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_GameInstance_C*                   CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                     CallFunc_ConstructVaRestJsonObject_ReturnValue;    // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0x10)(ZeroConstructor, NoDestructor)
	class UVaRestSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_1;         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestRequestJSON*                    CallFunc_ConstructVaRestRequestExt_ReturnValue;    // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4A (0x4A - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Compare Version
struct UEOS_GameInstance_C_Compare_Version_Params
{
public:
	class FString                                Other_Version;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetProjectVersion_ReturnValue;            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Replace_ReturnValue;                      // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Replace_ReturnValue_1;                    // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_1;           // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1F (0x1F - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Is Matchmaking Busy
struct UEOS_GameInstance_C_Is_Matchmaking_Busy_Params
{
public:
	bool                                         Matchmaking_Busy;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2931[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Get_Data_Int;                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Get_Data_string;                          // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Get_Data_float;                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Data_bool;                            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Set Ready State
struct UEOS_GameInstance_C_Set_Ready_State_Params
{
public:
	bool                                         Ready;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2932[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVariantDataBP                        K2Node_MakeStruct_VariantDataBP;                   // 0x8(0x28)(None)
};

// 0x58 (0x58 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Construct Matchmaking Ping Request
struct UEOS_GameInstance_C_Construct_Matchmaking_Ping_Request_Params
{
public:
	class UVaRestRequestJSON*                    Json_Request;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                     Json_Object;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                     CallFunc_ConstructVaRestJsonObject_ReturnValue;    // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetProjectVersion_ReturnValue;            // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UVaRestSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_1;         // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_GameInstance_C*                   CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestRequestJSON*                    CallFunc_ConstructVaRestRequestExt_ReturnValue;    // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x48(0x10)(ZeroConstructor, NoDestructor)
};

// 0x88 (0x88 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Construct Matchmaking Stop Request
struct UEOS_GameInstance_C_Construct_Matchmaking_Stop_Request_Params
{
public:
	class UVaRestRequestJSON*                    Json_Request;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                     Json_Object;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                     CallFunc_ConstructVaRestJsonObject_ReturnValue;    // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_1;         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestRequestJSON*                    CallFunc_ConstructVaRestRequestExt_ReturnValue;    // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x38(0x28)(HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue; // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UEOS_GameInstance_C*                   CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance; // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x78(0x10)(ZeroConstructor, NoDestructor)
};

// 0x168 (0x168 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Construct Matchmaking Join Request
struct UEOS_GameInstance_C_Construct_Matchmaking_Join_Request_Params
{
public:
	enum class E_GameModes                       Game_Mode;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2933[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVaRestRequestJSON*                    Json_Request;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                     Json_Object;                                       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                     CallFunc_ConstructVaRestJsonObject_ReturnValue;    // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Get_Product_User_ID_PUID;                 // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UVaRestSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_1;         // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Validate_Matchmaking_Party_Restrictions_Restricted; // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2934[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVaRestRequestJSON*                    CallFunc_ConstructVaRestRequestExt_ReturnValue;    // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_Construct_Matchmaking_Party_Unique_Net_Ids_Party_Member_Unique_Net_IDs_as_Strings; // 0x60(0x10)(ReferenceParm)
	class FString                                CallFunc_GetDeviceId_ReturnValue;                  // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Data_Int;                             // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2935[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Get_Data_string;                          // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Get_Data_float;                           // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Data_bool;                            // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2936[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_GameInstance_C*                    K2Node_DynamicCast_AsBP_Game_Instance;             // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2937[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Get_Primary_Account_ID_Account_ID;        // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetProjectVersion_ReturnValue;            // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_Construct_Matchmaking_Party_Ids_Party_Member_Primary_Account_Net_IDs_as_Strings; // 0xD8(0x10)(ReferenceParm)
	class UEOS_GameInstance_C*                   CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance; // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xF0(0x10)(ZeroConstructor, NoDestructor)
	class UOnlineIdentitySubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetUniquePlayerId_ReturnValue;            // 0x108(0x28)(HasGetValueTypeHash)
	class UUserOnlineAccountRef*                 CallFunc_GetUserAccount_ReturnValue;               // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAuthAttribute_Found;                   // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2938[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetAuthAttribute_ReturnValue;             // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAuthAttribute_Found_1;                 // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2939[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetAuthAttribute_ReturnValue_1;           // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0xBC (0xBC - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Construct Matchmaking Party Ids
struct UEOS_GameInstance_C_Construct_Matchmaking_Party_Ids_Params
{
public:
	TArray<class FString>                        Party_Member_Primary_Account_Net_IDs_as_Strings;   // 0x0(0x10)(Parm, OutParm)
	TArray<class FString>                        Party_Member_Primary_Account_Net_IDs;              // 0x10(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_293A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Get_Primary_Account_ID_Account_ID;        // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FUniqueNetIdRepl>              CallFunc_Map_Keys_Keys;                            // 0x40(0x10)(ReferenceParm)
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x50(0x10)(ReferenceParm)
	struct FUniqueNetIdRepl                      CallFunc_Array_Get_Item;                           // 0x60(0x28)(HasGetValueTypeHash)
	class UEOS_PartyMemberReference_C*           CallFunc_Map_Find_Value;                           // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_293B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_293C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Get_Data_Int;                             // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Get_Data_string;                          // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Get_Data_float;                           // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Data_bool;                            // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Is_In_Party_In_Party_;                    // 0xB5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_293D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Create Default Match Maker Attributes
struct UEOS_GameInstance_C_Create_Default_Match_Maker_Attributes_Params
{
public:
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_293E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEOS_Party_Repicated_Attribute_C*      CallFunc_SpawnObject_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Get All Platforms
struct UEOS_GameInstance_C_Get_All_Platforms_Params
{
public:
	TArray<class FString>                        Platforms;                                         // 0x0(0x10)(Parm, OutParm)
	class UOnlineIdentitySubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetUniquePlayerId_ReturnValue;            // 0x18(0x28)(HasGetValueTypeHash)
	class UUserOnlineAccountRef*                 CallFunc_GetUserAccount_ReturnValue;               // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAuthAttribute_Found;                   // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_293F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetAuthAttribute_ReturnValue;             // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetUserAttribute_Found;                   // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2940[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetUserAttribute_ReturnValue;             // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_ParseIntoArray_ReturnValue;               // 0x78(0x10)(ReferenceParm)
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x88(0x10)(ReferenceParm)
};

// 0x82 (0x82 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Get Primary Platform Custom
struct UEOS_GameInstance_C_Get_Primary_Platform_Custom_Params
{
public:
	class FString                                Primary_Platform;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_Signed_In__Signed_in_;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_WithEditor_ReturnValue;                   // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2941[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineIdentitySubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetUniquePlayerId_ReturnValue;            // 0x20(0x28)(HasGetValueTypeHash)
	class UUserOnlineAccountRef*                 CallFunc_GetUserAccount_ReturnValue;               // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAuthAttribute_Found;                   // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2942[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetAuthAttribute_ReturnValue;             // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetUserAttribute_Found;                   // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2943[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetUserAttribute_ReturnValue;             // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x179 (0x179 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Read Presence
struct UEOS_GameInstance_C_Read_Presence_Params
{
public:
	struct FUniqueNetIdRepl                      User_ID;                                           // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FOnlineUserPresenceData               OutPresence;                                       // 0x28(0xA0)(Parm, OutParm)
	enum class EOnlineCachedResult_              ReturnValue;                                       // 0xC8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2944[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlinePresenceSubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOnlineUserPresenceData               CallFunc_GetCachedPresence_OutPresence;            // 0xD8(0xA0)(None)
	enum class EOnlineCachedResult_              CallFunc_GetCachedPresence_ReturnValue;            // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE (0xE - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Check If Should Leave Current Party
struct UEOS_GameInstance_C_Check_If_Should_Leave_Current_Party_Params
{
public:
	class UPartyId*                              Party_ID;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Is_In_Party_In_Party_;                    // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_PartyIdPartyId_ReturnValue;    // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x318 (0x318 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Internal Update Server Settings
struct UEOS_GameInstance_C_Internal_Update_Server_Settings_Params
{
public:
	TMap<class FName, struct FOnlineSessionSettingBP> Server_Settings;                                   // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	TMap<class FName, struct FOnlineSessionSettingBP> Updated_Server_Settings;                           // 0x50(0x50)(Parm, OutParm)
	TMap<class FName, struct FOnlineSessionSettingBP> Local_Server_Settings;                             // 0xA0(0x50)(Edit, BlueprintVisible)
	class FName                                  Temp_name_Variable;                                // 0xF0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAlpha_Game_State_C*                   CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State; // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAlpha_Game_State_C*                   CallFunc_Current_Alpha_Game_State_AsAlpha_Game_State_1; // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FVariantDataBP                        K2Node_MakeStruct_VariantDataBP;                   // 0x118(0x28)(None)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FOnlineSessionSettingBP               K2Node_MakeStruct_OnlineSessionSettingBP;          // 0x150(0x30)(None)
	struct FVariantDataBP                        K2Node_MakeStruct_VariantDataBP_1;                 // 0x180(0x28)(None)
	class FName                                  Temp_name_Variable_1;                              // 0x1A8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOnlineSessionSettingBP               K2Node_MakeStruct_OnlineSessionSettingBP_1;        // 0x1B0(0x30)(None)
	class FName                                  Temp_name_Variable_2;                              // 0x1E0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_3;                              // 0x1E8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2945[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVariantDataBP                        K2Node_MakeStruct_VariantDataBP_2;                 // 0x1F8(0x28)(None)
	class FName                                  Temp_name_Variable_4;                              // 0x220(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOnlineSessionSettingBP               K2Node_MakeStruct_OnlineSessionSettingBP_2;        // 0x228(0x30)(None)
	class FString                                CallFunc_GetProjectVersion_ReturnValue;            // 0x258(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FVariantDataBP                        K2Node_MakeStruct_VariantDataBP_3;                 // 0x268(0x28)(None)
	struct FOnlineSessionSettingBP               K2Node_MakeStruct_OnlineSessionSettingBP_3;        // 0x290(0x30)(None)
	struct FVariantDataBP                        K2Node_MakeStruct_VariantDataBP_4;                 // 0x2C0(0x28)(None)
	struct FOnlineSessionSettingBP               K2Node_MakeStruct_OnlineSessionSettingBP_4;        // 0x2E8(0x30)(None)
};

// 0x71 (0x71 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Is Member Party Leader
struct UEOS_GameInstance_C_Is_Member_Party_Leader_Params
{
public:
	struct FUniqueNetIdRepl                      Party_Member;                                      // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         IsLeader;                                          // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2946[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2947[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x48(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_IsMemberLeader_ReturnValue;               // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x168 (0x168 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Send Party Data Map
struct UEOS_GameInstance_C_Send_Party_Data_Map_Params
{
public:
	TMap<class FString, struct FVariantDataBP>   Attributes;                                        // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class FString>                        Attribute_Keys;                                    // 0x50(0x10)(Edit, BlueprintVisible)
	class UMutablePartyData*                     Mutable_Party_Member_Data;                         // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Length_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_Party_Leader_IsLeader;                 // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2948[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_In_Party_In_Party_;                    // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2949[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_Map_Keys_Keys;                            // 0x78(0x10)(ReferenceParm)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_294A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x98(0x28)(HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_294B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_294C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item;                           // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_UpdatePartyData_ReturnValue;              // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_294D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVariantDataBP                        CallFunc_Map_Find_Value;                           // 0xF0(0x28)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_294E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_1;   // 0x130(0x28)(HasGetValueTypeHash)
	class UReadablePartyData*                    CallFunc_GetPartyData_ReturnValue;                 // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMutablePartyData*                     CallFunc_CreateMutablePartyData_ReturnValue;       // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x160 (0x160 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Send Party Member Data Map
struct UEOS_GameInstance_C_Send_Party_Member_Data_Map_Params
{
public:
	TMap<class FString, struct FVariantDataBP>   Attributes;                                        // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class FString>                        Attribute_Keys;                                    // 0x50(0x10)(Edit, BlueprintVisible)
	class UMutablePartyData*                     Mutable_Party_Member_Data;                         // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Length_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_In_Party_In_Party_;                    // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_294F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2950[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x80(0x28)(HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2951[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2952[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FVariantDataBP                        CallFunc_Map_Find_Value;                           // 0xC8(0x28)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2953[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_Map_Keys_Keys;                            // 0xF8(0x10)(ReferenceParm)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UpdatePartyMemberData_ReturnValue;        // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2954[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_1;   // 0x128(0x28)(HasGetValueTypeHash)
	class UReadablePartyData*                    CallFunc_GetPartyMemberData_ReturnValue;           // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMutablePartyData*                     CallFunc_CreateMutablePartyData_ReturnValue;       // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Set Party Locked
struct UEOS_GameInstance_C_Set_Party_Locked_Params
{
public:
	bool                                         Party_Locked;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2955[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVariantDataBP                        K2Node_MakeStruct_VariantDataBP;                   // 0x8(0x28)(None)
	bool                                         CallFunc_Is_Party_Leader_IsLeader;                 // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB8 (0xB8 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Get Party Member Name
struct UEOS_GameInstance_C_Get_Party_Member_Name_Params
{
public:
	struct FUniqueNetIdRepl                      Member_Id;                                         // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FString                                Name;                                              // 0x28(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue; // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_FUniqueNetIdIsValid_ReturnValue;          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2956[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x60(0x28)(HasGetValueTypeHash)
	class UBlueprintPartyMember*                 CallFunc_GetPartyMember_ReturnValue;               // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetUserAttribute_OutAttrValue;            // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetUserAttribute_ReturnValue;             // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2957[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Get Party Member Data
struct UEOS_GameInstance_C_Get_Party_Member_Data_Params
{
public:
	struct FUniqueNetIdRepl                      Member_Id;                                         // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UReadablePartyData*                    Party_Member_Data;                                 // 0x28(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x38(0x28)(HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UReadablePartyData*                    CallFunc_GetPartyMemberData_ReturnValue;           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x64 (0x64 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Get Party Member Count
struct UEOS_GameInstance_C_Get_Party_Member_Count_Params
{
public:
	int32                                        Party_Member_Count;                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2958[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UEOS_PartyMemberReference_C*>   Results;                                           // 0x8(0x10)(Edit, BlueprintVisible)
	bool                                         CallFunc_Is_In_Party_In_Party_;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2959[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x30(0x28)(HasGetValueTypeHash)
	int64                                        CallFunc_GetPartyMemberCount_ReturnValue;          // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Get Party Data
struct UEOS_GameInstance_C_Get_Party_Data_Params
{
public:
	class UReadablePartyData*                    Party_Data;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x10(0x28)(HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UReadablePartyData*                    CallFunc_GetPartyData_ReturnValue;                 // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Is In Party
struct UEOS_GameInstance_C_Is_In_Party_Params
{
public:
	bool                                         In_Party_;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x188 (0x188 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Get Player User Name
struct UEOS_GameInstance_C_Get_Player_User_Name_Params
{
public:
	struct FUniqueNetIdRepl                      User_ID;                                           // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FString                                Nickname;                                          // 0x28(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UOnlineIdentitySubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue; // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetUniquePlayerId_ReturnValue;            // 0x50(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_295A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlayerNickname_ReturnValue;            // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_FUniqueNetIdIsValid_ReturnValue;          // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x93(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_295B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_295C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Get_Primary_Platform_Custom_Primary_Platform; // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_295D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlineUserSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0xE0(0x28)(HasGetValueTypeHash)
	class UOnlineUserRef*                        CallFunc_GetUserInfo_ReturnValue;                  // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue; // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetUserAttribute_Found;                   // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_295E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetUserAttribute_ReturnValue;             // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UOnlineIdentitySubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetUniquePlayerId_ReturnValue_1;          // 0x140(0x28)(HasGetValueTypeHash)
	class UUserOnlineAccountRef*                 CallFunc_GetUserAccount_ReturnValue;               // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetUserAttribute_Found_1;                 // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_295F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetUserAttribute_ReturnValue_1;           // 0x178(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x228 (0x228 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Request Party Members Follow Leader
struct UEOS_GameInstance_C_Request_Party_Members_Follow_Leader_Params
{
public:
	class FName                                  Session_Name;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2960[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineSessionSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UNamedOnlineSession*                   CallFunc_GetNamedSession_ReturnValue;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2961[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNamedOnlineSessionBP                 CallFunc_GetValue_ReturnValue;                     // 0x48(0x1D0)(None)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x218(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x1B8 (0x1B8 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Get Resolved Connect String From Search Result
struct UEOS_GameInstance_C_Get_Resolved_Connect_String_From_Search_Result_Params
{
public:
	struct FOnlineSessionSearchResultBP          Search_Result;                                     // 0x0(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                Connection_String;                                 // 0x188(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UOnlineSessionSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetResolvedConnectStringBySearchResult_bWasSuccessful; // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2962[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetResolvedConnectStringBySearchResult_OutConnectInfo; // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Get Resolved Connect String From Session Name
struct UEOS_GameInstance_C_Get_Resolved_Connect_String_From_Session_Name_Params
{
public:
	class FName                                  Session_Name;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Connection_String;                                 // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UOnlineSessionSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetResolvedConnectStringByName_bWasSuccessful; // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2963[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetResolvedConnectStringByName_OutConnectInfo; // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x268 (0x268 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Get Players in Session
struct UEOS_GameInstance_C_Get_Players_in_Session_Params
{
public:
	TArray<struct FUniqueNetIdRepl>              Registered_Players;                                // 0x0(0x10)(Parm, OutParm)
	TArray<class FString>                        Players_Names;                                     // 0x10(0x10)(Parm, OutParm)
	TArray<class FString>                        Players;                                           // 0x20(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2964[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineSessionSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNamedOnlineSession*                   CallFunc_GetNamedSession_ReturnValue;              // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNamedOnlineSessionBP                 CallFunc_GetValue_ReturnValue;                     // 0x50(0x1D0)(None)
	struct FUniqueNetIdRepl                      CallFunc_Array_Get_Item;                           // 0x220(0x28)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2965[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Get_Player_User_Name_Nickname;            // 0x250(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2966[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x264(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F9 (0x1F9 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Get Current Session Id
struct UEOS_GameInstance_C_Get_Current_Session_Id_Params
{
public:
	class FString                                Session_ID;                                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2967[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineSessionSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNamedOnlineSession*                   CallFunc_GetNamedSession_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNamedOnlineSessionBP                 CallFunc_GetValue_ReturnValue;                     // 0x28(0x1D0)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x99 (0x99 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Can Kick Member
struct UEOS_GameInstance_C_Can_Kick_Member_Params
{
public:
	TArray<class UEOS_PartyReference_C*>         Parties;                                           // 0x0(0x10)(Parm, OutParm)
	TArray<class UEOS_PartyReference_C*>         Results;                                           // 0x10(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2968[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_PartyReference_C*                 CallFunc_SpawnObject_ReturnValue;                  // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x48(0x28)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2969[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPartyId*>                      CallFunc_GetJoinedParties_OutPartyIdArray;         // 0x78(0x10)(ReferenceParm)
	bool                                         CallFunc_GetJoinedParties_ReturnValue;             // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_296A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPartyId*                              CallFunc_Array_Get_Item;                           // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x99 (0x99 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Get Invites
struct UEOS_GameInstance_C_Get_Invites_Params
{
public:
	TArray<class UEOS_PartyInviteReference_C*>   Invites;                                           // 0x0(0x10)(Parm, OutParm)
	TArray<class UEOS_PartyInviteReference_C*>   Results;                                           // 0x10(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_296B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_PartyInviteReference_C*           CallFunc_SpawnObject_ReturnValue;                  // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x48(0x28)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_296C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UOnlinePartyJoinInfo*>          CallFunc_GetPendingInvites_OutPendingInvitesArray; // 0x78(0x10)(ReferenceParm)
	bool                                         CallFunc_GetPendingInvites_ReturnValue;            // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_296D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartyJoinInfo*                  CallFunc_Array_Get_Item;                           // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x49 (0x49 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Is Party Leader
struct UEOS_GameInstance_C_Is_Party_Leader_Params
{
public:
	bool                                         IsLeader;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_296E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_296F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x20(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_IsMemberLeader_ReturnValue;               // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC8 (0xC8 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Get Party Members
struct UEOS_GameInstance_C_Get_Party_Members_Params
{
public:
	TArray<class UEOS_PartyMemberReference_C*>   Party_Member_Ids;                                  // 0x0(0x10)(Parm, OutParm)
	TArray<class UEOS_PartyMemberReference_C*>   Results;                                           // 0x10(0x10)(Edit, BlueprintVisible)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2970[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEOS_PartyMemberReference_C*           CallFunc_SpawnObject_ReturnValue;                  // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x48(0x28)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2971[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBlueprintPartyMember*>         CallFunc_GetPartyMembers_OutPartyMembersArray;     // 0x78(0x10)(ReferenceParm)
	bool                                         CallFunc_GetPartyMembers_ReturnValue;              // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2972[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlueprintPartyMember*                 CallFunc_Array_Get_Item;                           // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2973[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_GetUserId_ReturnValue;                    // 0xA0(0x28)(HasGetValueTypeHash)
};

// 0x99 (0x99 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Get Joined Parties
struct UEOS_GameInstance_C_Get_Joined_Parties_Params
{
public:
	TArray<class UEOS_PartyReference_C*>         Parties;                                           // 0x0(0x10)(Parm, OutParm)
	TArray<class UEOS_PartyReference_C*>         Results;                                           // 0x10(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2974[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_PartyReference_C*                 CallFunc_SpawnObject_ReturnValue;                  // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2975[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x50(0x28)(HasGetValueTypeHash)
	TArray<class UPartyId*>                      CallFunc_GetJoinedParties_OutPartyIdArray;         // 0x78(0x10)(ReferenceParm)
	bool                                         CallFunc_GetJoinedParties_ReturnValue;             // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2976[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPartyId*                              CallFunc_Array_Get_Item;                           // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Create Default Party Attributes
struct UEOS_GameInstance_C_Create_Default_Party_Attributes_Params
{
public:
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2977[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x10(0x28)(HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_1;   // 0x40(0x28)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x68(0x10)(ZeroConstructor, NoDestructor)
	class UEOS_PartyMemberReference_C*           CallFunc_SpawnObject_ReturnValue;                  // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2978[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEOS_Party_Repicated_Attribute_C*      CallFunc_SpawnObject_ReturnValue_1;                // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x90(0x10)(ZeroConstructor, NoDestructor)
	class UEOS_Party_Repicated_Attribute_C*      CallFunc_SpawnObject_ReturnValue_2;                // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Get User ID
struct UEOS_GameInstance_C_Get_User_ID_Params
{
public:
	struct FUniqueNetIdRepl                      User_ID;                                           // 0x0(0x28)(Parm, OutParm, HasGetValueTypeHash)
	class UOnlineIdentitySubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetUniquePlayerId_ReturnValue;            // 0x30(0x28)(HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Get Logged In Auth Attribute
struct UEOS_GameInstance_C_Get_Logged_In_Auth_Attribute_Params
{
public:
	class FString                                Attribute_Name;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Value;                                             // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_Signed_In__Signed_in_;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2979[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineIdentitySubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetUniquePlayerId_ReturnValue;            // 0x30(0x28)(HasGetValueTypeHash)
	class UUserOnlineAccountRef*                 CallFunc_GetUserAccount_ReturnValue;               // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAuthAttribute_Found;                   // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_297A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetAuthAttribute_ReturnValue;             // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Can Link To Epic Games Account?
struct UEOS_GameInstance_C_Can_Link_To_Epic_Games_Account__Params
{
public:
	bool                                         CanLink_;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_297B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineIdentitySubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetUniquePlayerId_ReturnValue;            // 0x10(0x28)(HasGetValueTypeHash)
	class UUserOnlineAccountRef*                 CallFunc_GetUserAccount_ReturnValue;               // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_Signed_In__Signed_in_;                 // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetAuthAttribute_Found;                   // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_297C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetAuthAttribute_ReturnValue;             // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Get Product User ID
struct UEOS_GameInstance_C_Get_Product_User_ID_Params
{
public:
	class FString                                PUID;                                              // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UOnlineIdentitySubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetUniquePlayerId_ReturnValue;            // 0x18(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_Is_Signed_In__Signed_in_;                 // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_297D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserOnlineAccountRef*                 CallFunc_GetUserAccount_ReturnValue;               // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetUserAttribute_Found;                   // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_297E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetUserAttribute_ReturnValue;             // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0xF1 (0xF1 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Get Primary Account ID
struct UEOS_GameInstance_C_Get_Primary_Account_ID_Params
{
public:
	class FString                                Account_ID;                                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UOnlineIdentitySubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetUniquePlayerId_ReturnValue;            // 0x38(0x28)(HasGetValueTypeHash)
	class UUserOnlineAccountRef*                 CallFunc_GetUserAccount_ReturnValue;               // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetUserAttribute_Found;                   // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_297F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetUserAttribute_ReturnValue;             // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetUserAttribute_Found_1;                 // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2980[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetUserAttribute_ReturnValue_1;           // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAuthAttribute_Found;                   // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2981[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetAuthAttribute_ReturnValue;             // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_WithEditor_ReturnValue;                   // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2982[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Get_Primary_Platform_Custom_Primary_Platform; // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2983[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_Signed_In__Signed_in_;                 // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x81 (0x81 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Get Epic Account ID
struct UEOS_GameInstance_C_Get_Epic_Account_ID_Params
{
public:
	class FString                                Epic_ID;                                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UOnlineIdentitySubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetUniquePlayerId_ReturnValue;            // 0x18(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_Is_Signed_In__Signed_in_;                 // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2984[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserOnlineAccountRef*                 CallFunc_GetUserAccount_ReturnValue;               // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAuthAttribute_Found;                   // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2985[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetAuthAttribute_ReturnValue;             // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAuthAttribute_Found_1;                 // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2986[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetAuthAttribute_ReturnValue_1;           // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x61 (0x61 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Is Signed In with Epic Games Account?
struct UEOS_GameInstance_C_Is_Signed_In_with_Epic_Games_Account__Params
{
public:
	bool                                         Signed_In_With_Epic_;                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2987[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineIdentitySubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetUniquePlayerId_ReturnValue;            // 0x10(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_Is_Signed_In__Signed_in_;                 // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2988[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserOnlineAccountRef*                 CallFunc_GetUserAccount_ReturnValue;               // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAuthAttribute_Found;                   // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2989[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetAuthAttribute_ReturnValue;             // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Is Signed In?
struct UEOS_GameInstance_C_Is_Signed_In__Params
{
public:
	bool                                         Signed_in_;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_298A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineIdentitySubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOnlineLoginStatus                CallFunc_GetLoginStatus_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnPresenceTaskComplete_302D1894400B4CD2AEC044B0DFE1862C
struct UEOS_GameInstance_C_OnPresenceTaskComplete_302D1894400B4CD2AEC044B0DFE1862C_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         bWasSuccessful;                                    // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_302D1894400B4CD2AEC044B0DFE1862C
struct UEOS_GameInstance_C_OnCallFailed_302D1894400B4CD2AEC044B0DFE1862C_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         bWasSuccessful;                                    // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnPresenceTaskComplete_11D1165F4D7BF63A2CE88A8B9AFF4C8B
struct UEOS_GameInstance_C_OnPresenceTaskComplete_11D1165F4D7BF63A2CE88A8B9AFF4C8B_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         bWasSuccessful;                                    // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_11D1165F4D7BF63A2CE88A8B9AFF4C8B
struct UEOS_GameInstance_C_OnCallFailed_11D1165F4D7BF63A2CE88A8B9AFF4C8B_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         bWasSuccessful;                                    // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnFindSessionsComplete_A2159F9E4575DCCCA2BB228CE2FAB39C
struct UEOS_GameInstance_C_OnFindSessionsComplete_A2159F9E4575DCCCA2BB228CE2FAB39C_Params
{
public:
	bool                                         bWasSuccessful;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_A2159F9E4575DCCCA2BB228CE2FAB39C
struct UEOS_GameInstance_C_OnCallFailed_A2159F9E4575DCCCA2BB228CE2FAB39C_Params
{
public:
	bool                                         bWasSuccessful;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnJoinSessionComplete_94973A284644EB4A38882BBEBED5E33B
struct UEOS_GameInstance_C_OnJoinSessionComplete_94973A284644EB4A38882BBEBED5E33B_Params
{
public:
	class FName                                  SessionName;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOnJoinSessionCompleteResult_     Result;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_94973A284644EB4A38882BBEBED5E33B
struct UEOS_GameInstance_C_OnCallFailed_94973A284644EB4A38882BBEBED5E33B_Params
{
public:
	class FName                                  SessionName;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOnJoinSessionCompleteResult_     Result;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnCreateSessionComplete_B4AB608F474AFCFD8D0253B744CA3EF2
struct UEOS_GameInstance_C_OnCreateSessionComplete_B4AB608F474AFCFD8D0253B744CA3EF2_Params
{
public:
	class FName                                  SessionName;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasSuccessful;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_B4AB608F474AFCFD8D0253B744CA3EF2
struct UEOS_GameInstance_C_OnCallFailed_B4AB608F474AFCFD8D0253B744CA3EF2_Params
{
public:
	class FName                                  SessionName;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasSuccessful;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnDestroySessionComplete_3F47825A4427C8EDBEB424A49C25FA71
struct UEOS_GameInstance_C_OnDestroySessionComplete_3F47825A4427C8EDBEB424A49C25FA71_Params
{
public:
	class FName                                  SessionName;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasSuccessful;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_3F47825A4427C8EDBEB424A49C25FA71
struct UEOS_GameInstance_C_OnCallFailed_3F47825A4427C8EDBEB424A49C25FA71_Params
{
public:
	class FName                                  SessionName;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasSuccessful;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x190 (0x190 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnSingleSessionResultComplete_ECCF253642672CDE726E0DB1137DB519
struct UEOS_GameInstance_C_OnSingleSessionResultComplete_ECCF253642672CDE726E0DB1137DB519_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasSuccessful;                                    // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_298B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineSessionSearchResultBP          SearchResult;                                      // 0x8(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x190 (0x190 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_ECCF253642672CDE726E0DB1137DB519
struct UEOS_GameInstance_C_OnCallFailed_ECCF253642672CDE726E0DB1137DB519_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasSuccessful;                                    // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_298C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineSessionSearchResultBP          SearchResult;                                      // 0x8(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x18 (0x18 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnFindFriendSessionComplete_4B89E9BB4A28A03232A7948C963B204D
struct UEOS_GameInstance_C_OnFindFriendSessionComplete_4B89E9BB4A28A03232A7948C963B204D_Params
{
public:
	bool                                         bWasSuccessful;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_298D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FOnlineSessionSearchResultBP>  FriendSearchResult;                                // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_4B89E9BB4A28A03232A7948C963B204D
struct UEOS_GameInstance_C_OnCallFailed_4B89E9BB4A28A03232A7948C963B204D_Params
{
public:
	bool                                         bWasSuccessful;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_298E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FOnlineSessionSearchResultBP>  FriendSearchResult;                                // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x9 (0x9 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnUpdateSessionComplete_E3F7734C40560B130D78F48346A3CCB0
struct UEOS_GameInstance_C_OnUpdateSessionComplete_E3F7734C40560B130D78F48346A3CCB0_Params
{
public:
	class FName                                  SessionName;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasSuccessful;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_E3F7734C40560B130D78F48346A3CCB0
struct UEOS_GameInstance_C_OnCallFailed_E3F7734C40560B130D78F48346A3CCB0_Params
{
public:
	class FName                                  SessionName;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasSuccessful;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnCreatePartyComplete_8EAF2E3B4B7F7D0DFD35A4882CD57819
struct UEOS_GameInstance_C_OnCreatePartyComplete_8EAF2E3B4B7F7D0DFD35A4882CD57819_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECreatePartyCompletionResult_     Result;                                            // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_8EAF2E3B4B7F7D0DFD35A4882CD57819
struct UEOS_GameInstance_C_OnCallFailed_8EAF2E3B4B7F7D0DFD35A4882CD57819_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECreatePartyCompletionResult_     Result;                                            // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnSendPartyInvitationComplete_32091BA1452A8FA022409C9D5D53760F
struct UEOS_GameInstance_C_OnSendPartyInvitationComplete_32091BA1452A8FA022409C9D5D53760F_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      RecipientId;                                       // 0x30(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	enum class ESendPartyInvitationCompletionResult_ Result;                                            // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_32091BA1452A8FA022409C9D5D53760F
struct UEOS_GameInstance_C_OnCallFailed_32091BA1452A8FA022409C9D5D53760F_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      RecipientId;                                       // 0x30(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	enum class ESendPartyInvitationCompletionResult_ Result;                                            // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnJoinPartyComplete_D9193FAF46512D4925FB5AAC5E694B71
struct UEOS_GameInstance_C_OnJoinPartyComplete_D9193FAF46512D4925FB5AAC5E694B71_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EJoinPartyCompletionResult_       Result;                                            // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_298F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NotApprovedReason;                                 // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_D9193FAF46512D4925FB5AAC5E694B71
struct UEOS_GameInstance_C_OnCallFailed_D9193FAF46512D4925FB5AAC5E694B71_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EJoinPartyCompletionResult_       Result;                                            // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2990[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NotApprovedReason;                                 // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnKickPartyMemberComplete_7E53908D4B9F239876878F8C1C6A14FB
struct UEOS_GameInstance_C_OnKickPartyMemberComplete_7E53908D4B9F239876878F8C1C6A14FB_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      MemberId;                                          // 0x30(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	enum class EKickMemberCompletionResult_      Result;                                            // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_7E53908D4B9F239876878F8C1C6A14FB
struct UEOS_GameInstance_C_OnCallFailed_7E53908D4B9F239876878F8C1C6A14FB_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      MemberId;                                          // 0x30(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	enum class EKickMemberCompletionResult_      Result;                                            // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnLeavePartyComplete_4CCA085B4EE35E33E312DE9F76C193C6
struct UEOS_GameInstance_C_OnLeavePartyComplete_4CCA085B4EE35E33E312DE9F76C193C6_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELeavePartyCompletionResult_      Result;                                            // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_4CCA085B4EE35E33E312DE9F76C193C6
struct UEOS_GameInstance_C_OnCallFailed_4CCA085B4EE35E33E312DE9F76C193C6_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELeavePartyCompletionResult_      Result;                                            // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnReadFriendsListComplete_0C288BDF4874A442F09639904B36D53E
struct UEOS_GameInstance_C_OnReadFriendsListComplete_0C288BDF4874A442F09639904B36D53E_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasSuccessful;                                    // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2991[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ListName;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                ErrorStr;                                          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_0C288BDF4874A442F09639904B36D53E
struct UEOS_GameInstance_C_OnCallFailed_0C288BDF4874A442F09639904B36D53E_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasSuccessful;                                    // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2992[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ListName;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                ErrorStr;                                          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnGetAvatarComplete_97A8BF3541875BC08341B2B383B4D161
struct UEOS_GameInstance_C_OnGetAvatarComplete_97A8BF3541875BC08341B2B383B4D161_Params
{
public:
	bool                                         bWasSuccessful;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2993[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              ResultTexture;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_97A8BF3541875BC08341B2B383B4D161
struct UEOS_GameInstance_C_OnCallFailed_97A8BF3541875BC08341B2B383B4D161_Params
{
public:
	bool                                         bWasSuccessful;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2994[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              ResultTexture;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnLoginComplete_2BE8B34546FB4D223E30AC819336B27A
struct UEOS_GameInstance_C_OnLoginComplete_2BE8B34546FB4D223E30AC819336B27A_Params
{
public:
	bool                                         bWasSuccessful;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2995[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FString                                Error;                                             // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnCallFailed_2BE8B34546FB4D223E30AC819336B27A
struct UEOS_GameInstance_C_OnCallFailed_2BE8B34546FB4D223E30AC819336B27A_Params
{
public:
	bool                                         bWasSuccessful;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2996[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FString                                Error;                                             // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.CustomEvent_1
struct UEOS_GameInstance_C_CustomEvent_1_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Game Services Connection Closed
struct UEOS_GameInstance_C_Game_Services_Connection_Closed_Params
{
public:
	int32                                        StatusCode;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2997[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Reason;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         bWasClean;                                         // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Game Services Connection Error
struct UEOS_GameInstance_C_Game_Services_Connection_Error_Params
{
public:
	class FString                                Error;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Game Services Message Received
struct UEOS_GameInstance_C_Game_Services_Message_Received_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Game Services Message Sent
struct UEOS_GameInstance_C_Game_Services_Message_Sent_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Game Services Send Message
struct UEOS_GameInstance_C_Game_Services_Send_Message_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Stop Match Making
struct UEOS_GameInstance_C_Stop_Match_Making_Params
{
public:
	bool                                         Force;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2998[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Reason;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Start Match Making
struct UEOS_GameInstance_C_Start_Match_Making_Params
{
public:
	enum class E_GameModes                       Game_Mode;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Party Events Stopped Match Making
struct UEOS_GameInstance_C_Party_Events_Stopped_Match_Making_Params
{
public:
	bool                                         Successful;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Party Member Joining Stopped Match Making
struct UEOS_GameInstance_C_Party_Member_Joining_Stopped_Match_Making_Params
{
public:
	struct FUniqueNetIdRepl                      Member_Id;                                         // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Join Matchmaking Queue Response
struct UEOS_GameInstance_C_Join_Matchmaking_Queue_Response_Params
{
public:
	class UVaRestRequestJSON*                    Request;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Stop Matchmaking Queue Response
struct UEOS_GameInstance_C_Stop_Matchmaking_Queue_Response_Params
{
public:
	class UVaRestRequestJSON*                    Request;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Ping Matchmaking Queue Response
struct UEOS_GameInstance_C_Ping_Matchmaking_Queue_Response_Params
{
public:
	class UVaRestRequestJSON*                    Request;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Change Presence
struct UEOS_GameInstance_C_Change_Presence_Params
{
public:
	class FString                                Presence_Status;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Get Presence
struct UEOS_GameInstance_C_Get_Presence_Params
{
public:
	struct FUniqueNetIdRepl                      Unique_Id;                                         // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Receive Presence
struct UEOS_GameInstance_C_Receive_Presence_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FOnlineUserPresenceData               Presence;                                          // 0x28(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Received Global Config
struct UEOS_GameInstance_C_Received_Global_Config_Params
{
public:
	class UVaRestRequestJSON*                    Request;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Process Authorized Request
struct UEOS_GameInstance_C_Process_Authorized_Request_Params
{
public:
	class UVaRestRequestJSON*                    Request_JSON;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                     JsonObject;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Url_Extension;                                     // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Process Authorized Encoded Request
struct UEOS_GameInstance_C_Process_Authorized_Encoded_Request_Params
{
public:
	class UVaRestRequestJSON*                    Request_JSON;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                     JsonObject;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Url_Extension;                                     // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Create Session
struct UEOS_GameInstance_C_Create_Session_Params
{
public:
	class FName                                  Session_Name;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x192 (0x192 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Join Session
struct UEOS_GameInstance_C_Join_Session_Params
{
public:
	class FName                                  Session_Name;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOnlineSessionSearchResultBP          Session_Reference;                                 // 0x8(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Auto_Connect;                                      // 0x190(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Bring_Party;                                       // 0x191(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x130 (0x130 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Create Session Advanced
struct UEOS_GameInstance_C_Create_Session_Advanced_Params
{
public:
	class FName                                  Session_Name;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOnlineSessionSettingsBP              Settings;                                          // 0x8(0x128)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x58 (0x58 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Create Session Moderate
struct UEOS_GameInstance_C_Create_Session_Moderate_Params
{
public:
	class FName                                  Session_Name;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FOnlineSessionSettingBP> Server_Settings;                                   // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Destroy Session
struct UEOS_GameInstance_C_Destroy_Session_Params
{
public:
	class FName                                  Session_Name;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Join Session From Session Id String
struct UEOS_GameInstance_C_Join_Session_From_Session_Id_String_Params
{
public:
	class FString                                Session_ID;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Auto_Connect;                                      // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x128 (0x128 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Update Session Settings
struct UEOS_GameInstance_C_Update_Session_Settings_Params
{
public:
	struct FOnlineSessionSettingsBP              Settings;                                          // 0x0(0x128)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x2 (0x2 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.HandleNetworkError
struct UEOS_GameInstance_C_HandleNetworkError_Params
{
public:
	enum class ENetworkFailure                   FailureType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsServer;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.On Party Invite Received
struct UEOS_GameInstance_C_On_Party_Invite_Received_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      SenderId;                                          // 0x30(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.On Party Data Updated
struct UEOS_GameInstance_C_On_Party_Data_Updated_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMutablePartyData*                     PartyData;                                         // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Invite Friend To Party
struct UEOS_GameInstance_C_Invite_Friend_To_Party_Params
{
public:
	class UEOS_PartyReference_C*                 Party_ID;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_FriendReference_C*                Friend;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Join Party From Invite
struct UEOS_GameInstance_C_Join_Party_From_Invite_Params
{
public:
	class UEOS_PartyInviteReference_C*           Invite;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Kick Member
struct UEOS_GameInstance_C_Kick_Member_Params
{
public:
	struct FUniqueNetIdRepl                      Party_Member_Id;                                   // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Party Member Data Receieved
struct UEOS_GameInstance_C_Party_Member_Data_Receieved_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      MemberId;                                          // 0x30(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FName                                  Namespace;                                         // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UReadablePartyData*                    PartyData;                                         // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Party Data Received
struct UEOS_GameInstance_C_Party_Data_Received_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Namespace;                                         // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UReadablePartyData*                    PartyData;                                         // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Reject Invitation
struct UEOS_GameInstance_C_Reject_Invitation_Params
{
public:
	class UEOS_PartyInviteReference_C*           Rejected_Invite;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Send Party Data
struct UEOS_GameInstance_C_Send_Party_Data_Params
{
public:
	class FString                                Attribute_Name;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FVariantDataBP                        Data;                                              // 0x10(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x38 (0x38 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Send Party Member Data
struct UEOS_GameInstance_C_Send_Party_Member_Data_Params
{
public:
	class FString                                Attribute_Name;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FVariantDataBP                        Data;                                              // 0x10(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x58 (0x58 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Party Member Joined
struct UEOS_GameInstance_C_Party_Member_Joined_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      MemberId;                                          // 0x30(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Party Member Left
struct UEOS_GameInstance_C_Party_Member_Left_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      MemberId;                                          // 0x30(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	enum class EMemberExitedReason_              Reason;                                            // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Joined Party
struct UEOS_GameInstance_C_Joined_Party_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Got Kicked
struct UEOS_GameInstance_C_Got_Kicked_Params
{
public:
	struct FUniqueNetIdRepl                      LocalUserId;                                       // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPartyId*                              PartyId;                                           // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Join Party From ID
struct UEOS_GameInstance_C_Join_Party_From_ID_Params
{
public:
	class FString                                LobbyId;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Join Party From Party Join Object
struct UEOS_GameInstance_C_Join_Party_From_Party_Join_Object_Params
{
public:
	class UOnlinePartyJoinInfo*                  Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Fetch Avatar
struct UEOS_GameInstance_C_Fetch_Avatar_Params
{
public:
	struct FUniqueNetIdRepl                      User_ID;                                           // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UTexture*                              Default_Avatar;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Fetch Avatar Friend
struct UEOS_GameInstance_C_Fetch_Avatar_Friend_Params
{
public:
	class UEOS_FriendReference_C*                Friend;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Default_Avatar;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.EOS Friend Changed
struct UEOS_GameInstance_C_EOS_Friend_Changed_Params
{
public:
	int32                                        Friend_number;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Presence Event Received
struct UEOS_GameInstance_C_Presence_Event_Received_Params
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FOnlineUserPresenceData               Presence;                                          // 0x28(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x4 (0x4 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.EOS Start Login
struct UEOS_GameInstance_C_EOS_Start_Login_Params
{
public:
	int32                                        Local_User_Num;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.OnSignedInComplete
struct UEOS_GameInstance_C_OnSignedInComplete_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasSuccessful;                                    // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2999[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FString                                Error;                                             // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x2EF8 (0x2EF8 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.ExecuteUbergraph_EOS_GameInstance
struct UEOS_GameInstance_C_ExecuteUbergraph_EOS_GameInstance_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_SessionName_2;                  // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_13;              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_299A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_299B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable;                                // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_299C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineSessionSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlineSessionSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_LocalUserNum_4;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_12;              // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_299D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineSessionSearchResultBP          K2Node_CustomEvent_SearchResult_1;                 // 0x48(0x188)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1D0(0x10)(ZeroConstructor, NoDestructor)
	int32                                        K2Node_CustomEvent_LocalUserNum_3;                 // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_11;              // 0x1E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_299E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineSessionSearchResultBP          K2Node_CustomEvent_SearchResult;                   // 0x1E8(0x188)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x370(0x10)(ZeroConstructor, NoDestructor)
	struct FOnlineSessionSearchResultBP          Temp_struct_Variable;                              // 0x380(0x188)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x508(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_299F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x50C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlineSessionSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x510(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_10;              // 0x518(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FOnlineSessionSearchResultBP>  K2Node_CustomEvent_FriendSearchResult_1;           // 0x520(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x530(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_9;               // 0x540(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FOnlineSessionSearchResultBP>  K2Node_CustomEvent_FriendSearchResult;             // 0x548(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x558(0x10)(ZeroConstructor, NoDestructor)
	TArray<struct FOnlineSessionSearchResultBP>  Temp_struct_Variable_1;                            // 0x568(0x10)(ReferenceParm)
	bool                                         Temp_bool_Variable_2;                              // 0x578(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineSessionSearchResultBP          CallFunc_Array_Get_Item;                           // 0x580(0x188)(None)
	class FName                                  K2Node_CustomEvent_SessionName_1;                  // 0x708(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_8;               // 0x710(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x714(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_SessionName;                    // 0x724(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_7;               // 0x72C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29A4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x730(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable_3;                              // 0x740(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29A5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable_1;                              // 0x744(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineSessionSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x750(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_4;   // 0x758(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_5;   // 0x760(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x768(0x10)(ZeroConstructor, NoDestructor)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_6;   // 0x778(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_17;                 // 0x780(0x28)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_17;                     // 0x7A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECreatePartyCompletionResult_     K2Node_CustomEvent_Result_9;                       // 0x7B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x7B4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_29A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_16;                 // 0x7C8(0x28)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_16;                     // 0x7F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECreatePartyCompletionResult_     K2Node_CustomEvent_Result_8;                       // 0x7F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x7FC(0x10)(ZeroConstructor, NoDestructor)
	enum class ECreatePartyCompletionResult_     Temp_byte_Variable;                                // 0x80C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29AA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPartyId*                              Temp_object_Variable;                              // 0x810(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x818(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      Temp_struct_Variable_2;                            // 0x820(0x28)(HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_7;   // 0x848(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_15;                 // 0x850(0x28)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_15;                     // 0x878(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_RecipientId_1;                  // 0x880(0x28)(HasGetValueTypeHash)
	enum class ESendPartyInvitationCompletionResult_ K2Node_CustomEvent_Result_7;                       // 0x8A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x8AC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_29AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_14;                 // 0x8C0(0x28)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_14;                     // 0x8E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_RecipientId;                    // 0x8F0(0x28)(HasGetValueTypeHash)
	enum class ESendPartyInvitationCompletionResult_ K2Node_CustomEvent_Result_6;                       // 0x918(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29AE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x91C(0x10)(ZeroConstructor, NoDestructor)
	enum class ESendPartyInvitationCompletionResult_ Temp_byte_Variable_1;                              // 0x92C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      Temp_struct_Variable_3;                            // 0x930(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x958(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPartyId*                              Temp_object_Variable_1;                            // 0x960(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      Temp_struct_Variable_4;                            // 0x968(0x28)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x990(0x10)(ZeroConstructor, NoDestructor)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_13;                 // 0x9A0(0x28)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_13;                     // 0x9C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EJoinPartyCompletionResult_       K2Node_CustomEvent_Result_5;                       // 0x9D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_NotApprovedReason_1;            // 0x9D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_12;                 // 0x9D8(0x28)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_12;                     // 0xA00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EJoinPartyCompletionResult_       K2Node_CustomEvent_Result_4;                       // 0xA08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_NotApprovedReason;              // 0xA0C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0xA10(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Variable_1;                               // 0xA20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EJoinPartyCompletionResult_       Temp_byte_Variable_2;                              // 0xA24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0xA25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29B3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPartyId*                              Temp_object_Variable_2;                            // 0xA28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      Temp_struct_Variable_5;                            // 0xA30(0x28)(HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_8;   // 0xA58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_11;                 // 0xA60(0x28)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_11;                     // 0xA88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_MemberId_4;                     // 0xA90(0x28)(HasGetValueTypeHash)
	enum class EKickMemberCompletionResult_      K2Node_CustomEvent_Result_3;                       // 0xAB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0xABC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_29B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_10;                 // 0xAD0(0x28)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_10;                     // 0xAF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_MemberId_3;                     // 0xB00(0x28)(HasGetValueTypeHash)
	enum class EKickMemberCompletionResult_      K2Node_CustomEvent_Result_2;                       // 0xB28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0xB2C(0x10)(ZeroConstructor, NoDestructor)
	enum class EKickMemberCompletionResult_      Temp_byte_Variable_3;                              // 0xB3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      Temp_struct_Variable_6;                            // 0xB40(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0xB68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPartyId*                              Temp_object_Variable_3;                            // 0xB70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      Temp_struct_Variable_7;                            // 0xB78(0x28)(HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_9;   // 0xBA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_9;                  // 0xBA8(0x28)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_9;                      // 0xBD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELeavePartyCompletionResult_      K2Node_CustomEvent_Result_1;                       // 0xBD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0xBDC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_29BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_8;                  // 0xBF0(0x28)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_8;                      // 0xC18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELeavePartyCompletionResult_      K2Node_CustomEvent_Result;                         // 0xC20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_17;           // 0xC24(0x10)(ZeroConstructor, NoDestructor)
	enum class ELeavePartyCompletionResult_      Temp_byte_Variable_4;                              // 0xC34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPartyId*                              Temp_object_Variable_4;                            // 0xC38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0xC40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      Temp_struct_Variable_8;                            // 0xC48(0x28)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_18;           // 0xC70(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_19;           // 0xC80(0x10)(ZeroConstructor, NoDestructor)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_10;  // 0xC90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_11;  // 0xC98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_20;           // 0xCA0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_21;           // 0xCB0(0x10)(ZeroConstructor, NoDestructor)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_12;  // 0xCC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlineLobbySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_13;  // 0xCC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_14;  // 0xCD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_15;  // 0xCD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlineFriendsSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue_16;  // 0xCE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlineFriendsSubsystemReadFriendsList* CallFunc_ReadFriendsList_ReturnValue;              // 0xCE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_22;           // 0xCF0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29BE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_LocalUserNum_2;                 // 0xD04(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_6;               // 0xD08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_ListName_1;                     // 0xD10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ErrorStr_1;                     // 0xD20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_LocalUserNum_1;                 // 0xD30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_5;               // 0xD34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_ListName;                       // 0xD38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ErrorStr;                       // 0xD48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_23;           // 0xD58(0x10)(ZeroConstructor, NoDestructor)
	class FString                                Temp_string_Variable;                              // 0xD68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_1;                            // 0xD78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0xD88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_2;                               // 0xD8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlineFriendsSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue_17;  // 0xD90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UOnlineFriendRef*>              CallFunc_GetFriendsList_OutFriends;                // 0xD98(0x10)(ReferenceParm)
	bool                                         CallFunc_GetFriendsList_ReturnValue;               // 0xDA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xDAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlineAvatarSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue_18;  // 0xDB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_4;               // 0xDB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              K2Node_CustomEvent_ResultTexture_1;                // 0xDC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_24;           // 0xDC8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_3;               // 0xDD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              K2Node_CustomEvent_ResultTexture;                  // 0xDE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_25;           // 0xDE8(0x10)(ZeroConstructor, NoDestructor)
	class UTexture*                              Temp_object_Variable_5;                            // 0xDF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0xE00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineFriendsSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue_19;  // 0xE08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlineFriendsSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue_20;  // 0xE10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlinePresenceSubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue_21;  // 0xE18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlineIdentitySubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue_22;  // 0xE20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_2;               // 0xE28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_UserId_4;                       // 0xE30(0x28)(HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Error_3;                        // 0xE58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_26;           // 0xE68(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_1;               // 0xE78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_UserId_3;                       // 0xE80(0x28)(HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Error_2;                        // 0xEA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_27;           // 0xEB8(0x10)(ZeroConstructor, NoDestructor)
	class FString                                Temp_string_Variable_2;                            // 0xEC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      Temp_struct_Variable_9;                            // 0xED8(0x28)(HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_6;                              // 0xF00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_7;                              // 0xF01(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29C8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineIdentitySubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue_23;  // 0xF08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xF10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xF14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xF18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xF1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_SessionName_3;                  // 0xF20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_14;              // 0xF28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineFriendRef*                      CallFunc_Array_Get_Item_1;                         // 0xF30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xF38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xF3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xF40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_28;           // 0xF44(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0xF54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xF58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0xF5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0xF60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xF64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_29;           // 0xF68(0x10)(ZeroConstructor, NoDestructor)
	class UWebSocket*                            CallFunc_CreateWebSocket_ReturnValue;              // 0xF78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Message_3;                      // 0xF80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_StatusCode;                     // 0xF90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Reason_2;                       // 0xF98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasClean;                      // 0xFA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Error_1;                        // 0xFB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Message_2;                      // 0xFC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xFD0(0x18)(None)
	class UUI_DisconnectPopup_C*                 CallFunc_Custom_Popup_UI_element;                  // 0xFE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Message_1;                      // 0xFF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Message;                        // 0x1000(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Force;                          // 0x1010(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Reason_1;                       // 0x1018(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class E_GameModes                       K2Node_CustomEvent_Game_Mode;                      // 0x1028(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x1029(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29D0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_30;           // 0x102C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_CustomEvent_Successful;                     // 0x103C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29D1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_31;           // 0x1040(0x10)(ZeroConstructor, NoDestructor)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_Member_Id;                      // 0x1050(0x28)(HasGetValueTypeHash)
	class UVaRestRequestJSON*                    K2Node_CustomEvent_Request_3;                      // 0x1078(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestRequestJSON*                    K2Node_CustomEvent_Request_2;                      // 0x1080(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                     CallFunc_Get_Data_From_Response_Response_Data;     // 0x1088(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                     CallFunc_Get_Data_From_Response_Response_Data_1;   // 0x1090(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue;               // 0x1098(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue_1;             // 0x10A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBoolField_ReturnValue;                 // 0x10B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetIntegerField_ReturnValue;              // 0x10BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue_2;             // 0x10C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBoolField_ReturnValue_1;               // 0x10D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetStringField_ReturnValue_3;             // 0x10D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue_4;             // 0x10E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x10F8(0x18)(None)
	class UUI_DisconnectPopup_C*                 CallFunc_Custom_Popup_UI_element_1;                // 0x1110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVaRestRequestStatus              CallFunc_GetStatus_ReturnValue;                    // 0x1118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVaRestRequestStatus              CallFunc_GetStatus_ReturnValue_1;                  // 0x1119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x111A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x111B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVaRestRequestJSON*                    K2Node_CustomEvent_Request_1;                      // 0x1120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                     CallFunc_Get_Data_From_Response_Response_Data_2;   // 0x1128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue_5;             // 0x1130(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBoolField_ReturnValue_2;               // 0x1140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x1148(0x18)(None)
	class UUI_DisconnectPopup_C*                 CallFunc_Custom_Popup_UI_element_2;                // 0x1160(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                     CallFunc_GetObjectField_ReturnValue;               // 0x1168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                     CallFunc_GetObjectField_ReturnValue_1;             // 0x1170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue_6;             // 0x1178(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetIntegerField_ReturnValue_1;            // 0x1188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetIntegerField_ReturnValue_2;            // 0x118C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue_7;             // 0x1190(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue_8;             // 0x11A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue_9;             // 0x11B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x11C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x11C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29D6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetStringField_ReturnValue_10;            // 0x11C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x11D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue_11;            // 0x11E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue_1;                    // 0x11F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EVaRestRequestStatus              CallFunc_GetStatus_ReturnValue_2;                  // 0x11F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x11F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x11F3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x11F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29D7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x11F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x1208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x1209(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29D8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_32;           // 0x120C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_29D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineSessionSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue_24;  // 0x1220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_DisconnectPopup_C*                 CallFunc_Custom_Popup_UI_element_3;                // 0x1228(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Data_Int;                             // 0x1230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29DA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Get_Data_string;                          // 0x1238(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Get_Data_float;                           // 0x1248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Data_bool;                            // 0x124C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x124D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29DB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Get_Data_Int_1;                           // 0x1250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Get_Data_string_1;                        // 0x1258(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Get_Data_float_1;                         // 0x1268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Data_bool_1;                          // 0x126C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x126D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x126E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x126F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Get_Data_Int_2;                           // 0x1270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29DD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Get_Data_string_2;                        // 0x1278(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Get_Data_float_2;                         // 0x1288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Data_bool_2;                          // 0x128C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Presence_Status;                // 0x1290(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_2;                              // 0x12A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOnlineUserPresenceStatusData         K2Node_MakeStruct_OnlineUserPresenceStatusData;    // 0x12A8(0x68)(None)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_Unique_Id;                      // 0x1310(0x28)(HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_8;                              // 0x1338(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_UserId_8;                       // 0x1340(0x28)(HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_22;              // 0x1368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_BoolToString_ReturnValue;            // 0x1370(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x1380(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_UserId_2;                       // 0x1390(0x28)(HasGetValueTypeHash)
	struct FOnlineUserPresenceData               K2Node_CustomEvent_Presence_1;                     // 0x13B8(0xA0)(None)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x1458(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x1460(0x28)(HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_SessionName_4;                  // 0x1488(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_15;              // 0x1490(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVaRestRequestJSON*                    K2Node_CustomEvent_Request;                        // 0x1498(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                     CallFunc_GetResponseObject_ReturnValue;            // 0x14A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UVaRestJsonValue*>              CallFunc_GetArrayField_ReturnValue;                // 0x14A8(0x10)(ReferenceParm)
	class FString                                CallFunc_GetStringField_ReturnValue_12;            // 0x14B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UVaRestJsonValue*                      CallFunc_Array_Get_Item_2;                         // 0x14C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestRequestJSON*                    K2Node_CustomEvent_Request_JSON_1;                 // 0x14D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                     K2Node_CustomEvent_JsonObject_1;                   // 0x14D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Url_Extension_1;                // 0x14E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_AsString_ReturnValue;                     // 0x14F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x1500(0x10)(ReferenceParm)
	struct FGlobalConfig                         K2Node_MakeStruct_GlobalConfig;                    // 0x1510(0x20)(HasGetValueTypeHash)
	bool                                         CallFunc_WithEditor_ReturnValue;                   // 0x1530(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x1531(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x1532(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_WithEditor_ReturnValue_1;                 // 0x1533(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29E2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x1538(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x1548(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x1550(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UVaRestRequestJSON*                    K2Node_CustomEvent_Request_JSON;                   // 0x1560(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                     K2Node_CustomEvent_JsonObject;                     // 0x1568(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Url_Extension;                  // 0x1570(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_33;           // 0x1580(0x10)(ZeroConstructor, NoDestructor)
	class UVaRestJsonObject*                     CallFunc_Create_Data_From_Request_Request_Data;    // 0x1590(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_Session_Name_4;                 // 0x1598(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_34;           // 0x15A0(0x10)(ZeroConstructor, NoDestructor)
	class UOnlineSessionSearch*                  CallFunc_SpawnObject_ReturnValue;                  // 0x15B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x15B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_4;                   // 0x15BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_SessionName_5;                  // 0x15C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_16;              // 0x15C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x15D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_1;   // 0x15D8(0x28)(HasGetValueTypeHash)
	TArray<class UEOS_SessionReference_C*>       K2Node_MakeArray_Array_1;                          // 0x1600(0x10)(ReferenceParm)
	TArray<struct FOnlineSessionSearchResultBP>  CallFunc_GetSearchResults_ReturnValue;             // 0x1610(0x10)(ReferenceParm)
	struct FOnlineSessionSearchResultBP          CallFunc_Array_Get_Item_3;                         // 0x1620(0x188)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x17A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEOS_SessionReference_C*               CallFunc_SpawnObject_ReturnValue_1;                // 0x17B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x17B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_Session_Name_3;                 // 0x17BC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineSessionSearchResultBP          K2Node_CustomEvent_Session_Reference;              // 0x17C8(0x188)(None)
	bool                                         K2Node_CustomEvent_Auto_Connect_1;                 // 0x1950(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Bring_Party;                    // 0x1951(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29E7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x1958(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_2;   // 0x1960(0x28)(HasGetValueTypeHash)
	class FString                                CallFunc_Get_Resolved_Connect_String_From_Search_Result_Connection_String; // 0x1988(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x1998(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_35;           // 0x19A8(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_Session_Name_2;                 // 0x19B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOnlineSessionSettingsBP              K2Node_CustomEvent_Settings_1;                     // 0x19C0(0x128)(None)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_3;        // 0x1AE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_3;   // 0x1AF0(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1B18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_Session_Name_1;                 // 0x1B1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29E9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FOnlineSessionSettingBP> K2Node_CustomEvent_Server_Settings;                // 0x1B28(0x50)(None)
	TMap<class FName, struct FOnlineSessionSettingBP> CallFunc_Internal_Update_Server_Settings_Updated_Server_Settings; // 0x1B78(0x50)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x1BC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_Session_Name;                   // 0x1BCC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineSessionSettingsBP              K2Node_MakeStruct_OnlineSessionSettingsBP;         // 0x1BD8(0x128)(None)
	class UOnlineSessionSubsystemDestroySession* CallFunc_DestroySession_ReturnValue;               // 0x1D00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1D08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlinePresenceSubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue_25;  // 0x1D10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlinePresenceSubsystemSetPresence*   CallFunc_SetPresence_ReturnValue;                  // 0x1D18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x1D20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineIdentitySubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue_26;  // 0x1D28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlineSessionSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue_27;  // 0x1D30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_CreateUniquePlayerId_ReturnValue;         // 0x1D38(0x28)(HasGetValueTypeHash)
	class UOnlineSessionSubsystemCreateSession*  CallFunc_CreateSession_ReturnValue;                // 0x1D60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x1D68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Session_Id;                     // 0x1D70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Auto_Connect;                   // 0x1D80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x1D84(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29F0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x1D90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x1DA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_CreateSessionIdFromString_ReturnValue;    // 0x1DB0(0x28)(HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_4;        // 0x1DD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_3;                              // 0x1DE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_4;   // 0x1DE8(0x28)(HasGetValueTypeHash)
	class UOnlineSessionSubsystemFindSessionById* CallFunc_FindSessionById_ReturnValue;              // 0x1E10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOnJoinSessionCompleteResult_     Temp_byte_Variable_5;                              // 0x1E18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_8;        // 0x1E19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x1E1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29F1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_SessionName_6;                  // 0x1E1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOnJoinSessionCompleteResult_     K2Node_CustomEvent_Result_10;                      // 0x1E24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_SessionName_7;                  // 0x1E28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOnJoinSessionCompleteResult_     K2Node_CustomEvent_Result_11;                      // 0x1E30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29F3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_36;           // 0x1E34(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Is_In_Party_In_Party_;                    // 0x1E44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Is_Party_Leader_IsLeader;                 // 0x1E45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x1E46(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x1E47(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_37;           // 0x1E48(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_5;        // 0x1E58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOnlineSessionSettingsBP              K2Node_CustomEvent_Settings;                       // 0x1E60(0x128)(None)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_5;   // 0x1F88(0x28)(HasGetValueTypeHash)
	class UOnlineSessionSubsystemFindFriendSession* CallFunc_FindFriendSession_ReturnValue;            // 0x1FB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlineSessionSubsystemUpdateSession*  CallFunc_UpdateSession_ReturnValue;                // 0x1FB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x1FC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x1FC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ENetworkFailure                   K2Node_Event_FailureType;                          // 0x1FC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsServer;                            // 0x1FC3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineSessionSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue_28;  // 0x1FC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_7;                  // 0x1FD0(0x28)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_7;                      // 0x1FF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_SenderId;                       // 0x2000(0x28)(HasGetValueTypeHash)
	class UOnlineSessionSubsystemJoinSession*    CallFunc_JoinSession_ReturnValue;                  // 0x2028(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_6;                  // 0x2030(0x28)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_6;                      // 0x2058(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMutablePartyData*                     K2Node_CustomEvent_PartyData_2;                    // 0x2060(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAttribute_OutFound;                    // 0x2068(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVariantDataBP                        CallFunc_GetAttribute_OutAttrValue;                // 0x2070(0x28)(None)
	bool                                         CallFunc_GetAttribute_OutFound_1;                  // 0x2098(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVariantDataBP                        CallFunc_GetAttribute_OutAttrValue_1;              // 0x20A0(0x28)(None)
	class FString                                CallFunc_Base64Decode_Dest;                        // 0x20C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Base64Decode_ReturnValue;                 // 0x20D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetAttribute_OutFound_2;                  // 0x20D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29F7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVariantDataBP                        CallFunc_GetAttribute_OutAttrValue_2;              // 0x20E0(0x28)(None)
	class UParty*                                CallFunc_GetParty_ReturnValue;                     // 0x2108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetLeaderId_ReturnValue;                  // 0x2110(0x28)(HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x2138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue; // 0x213C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x213D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_9;                              // 0x213E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29F8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_6;        // 0x2140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_6;   // 0x2148(0x28)(HasGetValueTypeHash)
	int64                                        CallFunc_GetPrimaryPartyType_ReturnValue;          // 0x2170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_PartyReference_C*                 K2Node_CustomEvent_Party_Id;                       // 0x2178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_FriendReference_C*                K2Node_CustomEvent_Friend;                         // 0x2180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_7;        // 0x2188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_7;   // 0x2190(0x28)(HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetUserId_ReturnValue;                    // 0x21B8(0x28)(HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_17;              // 0x21E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlinePartySubsystemSendInvitation*   CallFunc_SendInvitation_ReturnValue;               // 0x21E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x21F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEOS_PartyInviteReference_C*           K2Node_CustomEvent_Invite;                         // 0x21F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_38;           // 0x2200(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_8;        // 0x2210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_8;   // 0x2218(0x28)(HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_Party_Member_Id;                // 0x2240(0x28)(HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_9;        // 0x2268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_39;           // 0x2270(0x10)(ZeroConstructor, NoDestructor)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_9;   // 0x2280(0x28)(HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_10;       // 0x22A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_10;  // 0x22B0(0x28)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_40;           // 0x22D8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_18;              // 0x22E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_5;                  // 0x22F0(0x28)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_5;                      // 0x2318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_MemberId_2;                     // 0x2320(0x28)(HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_Namespace_1;                    // 0x2348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UReadablePartyData*                    K2Node_CustomEvent_PartyData_1;                    // 0x2350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_PartyReference_C*                 CallFunc_SpawnObject_ReturnValue_2;                // 0x2358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_4;                  // 0x2360(0x28)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_4;                      // 0x2388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_Namespace;                      // 0x2390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UReadablePartyData*                    K2Node_CustomEvent_PartyData;                      // 0x2398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMutablePartyData*                     CallFunc_CreateMutablePartyData_ReturnValue;       // 0x23A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_41;           // 0x23A8(0x10)(ZeroConstructor, NoDestructor)
	class UEOS_PartyInviteReference_C*           K2Node_CustomEvent_Rejected_Invite;                // 0x23B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_11;       // 0x23C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Get__Sender_Sender;                       // 0x23C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_Get__Sender_Sender_ID;                    // 0x23D8(0x28)(HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_11;  // 0x2400(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_RejectInvitation_ReturnValue;             // 0x2428(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_42;           // 0x242C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_29FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEOS_PartyReference_C*                 CallFunc_SpawnObject_ReturnValue_3;                // 0x2440(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Attribute_Name_1;               // 0x2448(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FVariantDataBP                        K2Node_CustomEvent_Data_1;                         // 0x2458(0x28)(None)
	TMap<class FString, struct FVariantDataBP>   K2Node_MakeMap_Map;                                // 0x2480(0x50)(None)
	class FString                                K2Node_CustomEvent_Attribute_Name;                 // 0x24D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FVariantDataBP                        K2Node_CustomEvent_Data;                           // 0x24E0(0x28)(None)
	TMap<class FString, struct FVariantDataBP>   K2Node_MakeMap_Map_1;                              // 0x2508(0x50)(None)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_3;                  // 0x2558(0x28)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_3;                      // 0x2580(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_MemberId_1;                     // 0x2588(0x28)(HasGetValueTypeHash)
	class UBlueprintPartyMember*                 CallFunc_GetPartyMember_ReturnValue;               // 0x25B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_2;                  // 0x25B8(0x28)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_2;                      // 0x25E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_MemberId;                       // 0x25E8(0x28)(HasGetValueTypeHash)
	enum class EMemberExitedReason_              K2Node_CustomEvent_Reason;                         // 0x2610(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x2611(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29FE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlinePartySubsystemLeaveParty*       CallFunc_LeaveParty_ReturnValue;                   // 0x2618(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystemKickMember*       CallFunc_KickMember_ReturnValue;                   // 0x2620(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0x2628(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0x2629(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29FF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId_1;                  // 0x2630(0x28)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId_1;                      // 0x2658(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_43;           // 0x2660(0x10)(ZeroConstructor, NoDestructor)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_LocalUserId;                    // 0x2670(0x28)(HasGetValueTypeHash)
	class UPartyId*                              K2Node_CustomEvent_PartyId;                        // 0x2698(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlineSessionSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue_29;  // 0x26A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlineSessionSubsystemFindSessions*   CallFunc_FindSessions_ReturnValue;                 // 0x26A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0x26B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A00[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_12;       // 0x26B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_12;  // 0x26C0(0x28)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_44;           // 0x26E8(0x10)(ZeroConstructor, NoDestructor)
	class FString                                K2Node_CustomEvent_LobbyId;                        // 0x26F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FOnlinePartyConfiguration             K2Node_MakeStruct_OnlinePartyConfiguration;        // 0x2708(0x40)(None)
	class ULobbyId*                              CallFunc_ParseSerializedLobbyId_ReturnValue;       // 0x2748(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystemCreateParty*      CallFunc_CreateParty_ReturnValue;                  // 0x2750(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartyJoinInfo*                  CallFunc_Conv_ULobbyIdToUOnlinePartyJoinInfo_ReturnValue; // 0x2758(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_14;                   // 0x2760(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A01[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlinePartyJoinInfo*                  K2Node_CustomEvent_Target;                         // 0x2768(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystemJoinParty*        CallFunc_JoinParty_ReturnValue;                    // 0x2770(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPartyId*                              CallFunc_GetPartyId_ReturnValue;                   // 0x2778(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Check_If_Should_Leave_Current_Party_ReturnValue; // 0x2780(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_15;                   // 0x2781(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A02[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlinePresenceSubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue_30;  // 0x2788(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_45;           // 0x2790(0x10)(ZeroConstructor, NoDestructor)
	class UEOS_PartyMemberReference_C*           CallFunc_SpawnObject_ReturnValue_4;                // 0x27A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      Temp_struct_Variable_10;                           // 0x27A8(0x28)(HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_13;       // 0x27D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOnlineUserPresenceData               CallFunc_Read_Presence_OutPresence;                // 0x27D8(0xA0)(None)
	enum class EOnlineCachedResult_              CallFunc_Read_Presence_ReturnValue;                // 0x2878(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A03[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_13;  // 0x2880(0x28)(HasGetValueTypeHash)
	TArray<class UBlueprintPartyMember*>         CallFunc_GetPartyMembers_OutPartyMembersArray;     // 0x28A8(0x10)(ReferenceParm)
	bool                                         CallFunc_GetPartyMembers_ReturnValue;              // 0x28B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A04[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlueprintPartyMember*                 CallFunc_Array_Get_Item_4;                         // 0x28C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_46;           // 0x28C8(0x10)(ZeroConstructor, NoDestructor)
	struct FUniqueNetIdRepl                      CallFunc_GetUserId_ReturnValue_1;                  // 0x28D8(0x28)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x2900(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x2904(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A05[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEOS_PartyMemberReference_C*           CallFunc_SpawnObject_ReturnValue_5;                // 0x2908(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_10;                             // 0x2910(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A06[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_14;       // 0x2918(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_15;       // 0x2920(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_14;  // 0x2928(0x28)(HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_15;  // 0x2950(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_1; // 0x2978(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A07[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_UserId_5;                       // 0x2980(0x28)(HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_19;              // 0x29A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Is_Party_Leader_IsLeader_1;               // 0x29A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A08[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Get_Primary_Account_ID_Account_ID;        // 0x29B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_16;       // 0x29C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x29C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A09[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_16;  // 0x29D0(0x28)(HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue; // 0x29F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_47;           // 0x2A08(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue_1;                   // 0x2A18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x2A19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A0A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UEOS_FriendReference_C*>        K2Node_MakeArray_Array_2;                          // 0x2A20(0x10)(ReferenceParm)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x2A30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x2A34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A0B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x2A38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_48;           // 0x2A3C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_2A0C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEOS_FriendReference_C*                CallFunc_SpawnObject_ReturnValue_6;                // 0x2A50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x2A58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A0D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_User_Id;                        // 0x2A60(0x28)(HasGetValueTypeHash)
	class UTexture*                              K2Node_CustomEvent_Default_Avatar;                 // 0x2A88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue_1; // 0x2A90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_UserId_6;                       // 0x2AA0(0x28)(HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_20;              // 0x2AC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x2AC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A0E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_17;       // 0x2AD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_FriendReference_C*                K2Node_Event_Friend;                               // 0x2AD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              K2Node_Event_Default_Avatar;                       // 0x2AE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_17;  // 0x2AE8(0x28)(HasGetValueTypeHash)
	class UOnlineAvatarSubsystemGetAvatar*       CallFunc_GetAvatar_ReturnValue;                    // 0x2B10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetUserId_ReturnValue_2;                  // 0x2B18(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_16;                   // 0x2B40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A0F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_49;           // 0x2B44(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_2A10[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              CallFunc_Map_Find_Value;                           // 0x2B58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x2B60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A11[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Friend_number;                  // 0x2B64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlineFriendRef*                      CallFunc_GetFriend_ReturnValue;                    // 0x2B68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_FriendReference_C*                CallFunc_SpawnObject_ReturnValue_7;                // 0x2B70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_50;           // 0x2B78(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_51;           // 0x2B88(0x10)(ZeroConstructor, NoDestructor)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_UserId_1;                       // 0x2B98(0x28)(HasGetValueTypeHash)
	struct FOnlineUserPresenceData               K2Node_CustomEvent_Presence;                       // 0x2BC0(0xA0)(None)
	class UOnlinePresenceSubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue_31;  // 0x2C60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_FriendReference_C*                CallFunc_Array_Get_Item_5;                         // 0x2C68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlinePresenceSubsystemQueryPresence* CallFunc_QueryPresence_ReturnValue;                // 0x2C70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOnlineUserPresenceData               CallFunc_GetPresence_ReturnValue;                  // 0x2C78(0xA0)(None)
	bool                                         CallFunc_IsValid_ReturnValue_17;                   // 0x2D18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A12[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_Get_Unique_Net_Id_ReturnValue;            // 0x2D20(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_2; // 0x2D48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A13[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x2D4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x2D50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x2D51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A14[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      Temp_struct_Variable_11;                           // 0x2D58(0x28)(HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_11;                             // 0x2D80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A15[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Local_User_Num;                 // 0x2D84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlineIdentitySubsystemAutoLogin*     CallFunc_AutoLogin_ReturnValue;                    // 0x2D88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_1;          // 0x2D90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_18;                   // 0x2DA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A16[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x2DA8(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x2DC0(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x2DD8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x2DF0(0x40)(HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_UserId_7;                       // 0x2E30(0x28)(HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_21;              // 0x2E58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A17[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_3;                          // 0x2E60(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x2E70(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_52;           // 0x2E88(0x10)(ZeroConstructor, NoDestructor)
	int32                                        K2Node_CustomEvent_LocalUserNum;                   // 0x2E98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful;                 // 0x2E9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A18[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_UserId;                         // 0x2EA0(0x28)(HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Error;                          // 0x2EC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Can_Link_To_Epic_Games_Account__CanLink_; // 0x2ED8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Can_Link_To_Epic_Games_Account__CanLink__1; // 0x2ED9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A19[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Get_Player_User_Name_Nickname;            // 0x2EE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UEvents_Manager_C*                     CallFunc_CreateObject_Object;                      // 0x2EF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.WS Game Services Message Sent__DelegateSignature
struct UEOS_GameInstance_C_WS_Game_Services_Message_Sent__DelegateSignature_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.WS Game Services Message Received__DelegateSignature
struct UEOS_GameInstance_C_WS_Game_Services_Message_Received__DelegateSignature_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.WS Game Services Connection Error__DelegateSignature
struct UEOS_GameInstance_C_WS_Game_Services_Connection_Error__DelegateSignature_Params
{
public:
	class FString                                Error;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.DestroyedSession__DelegateSignature
struct UEOS_GameInstance_C_DestroyedSession__DelegateSignature_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Left Match Making Queue__DelegateSignature
struct UEOS_GameInstance_C_Left_Match_Making_Queue__DelegateSignature_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Found_Match;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A1A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Left_Reason;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Aborted;                                           // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Joined Match Making Queue__DelegateSignature
struct UEOS_GameInstance_C_Joined_Match_Making_Queue__DelegateSignature_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A1B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Party_id;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0xC9 (0xC9 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.Received Presence__DelegateSignature
struct UEOS_GameInstance_C_Received_Presence__DelegateSignature_Params
{
public:
	struct FUniqueNetIdRepl                      User_ID;                                           // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FOnlineUserPresenceData               Presence_Data;                                     // 0x28(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Successful;                                        // 0xC8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.EOS Friend Presence Change__DelegateSignature
struct UEOS_GameInstance_C_EOS_Friend_Presence_Change__DelegateSignature_Params
{
public:
	class UEOS_FriendReference_C*                Friend;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOnlineUserPresenceData               Presence;                                          // 0x8(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.EOS Friend Change__DelegateSignature
struct UEOS_GameInstance_C_EOS_Friend_Change__DelegateSignature_Params
{
public:
	class UEOS_FriendReference_C*                Updated_Friend;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.EOS Party On Party Member Left__DelegateSignature
struct UEOS_GameInstance_C_EOS_Party_On_Party_Member_Left__DelegateSignature_Params
{
public:
	struct FUniqueNetIdRepl                      MemberId;                                          // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	enum class EMemberExitedReason_              Reason;                                            // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.EOS Party On Joined Member__DelegateSignature
struct UEOS_GameInstance_C_EOS_Party_On_Joined_Member__DelegateSignature_Params
{
public:
	struct FUniqueNetIdRepl                      Member_Id;                                         // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.EOS Party On Party Member Data Received__DelegateSignature
struct UEOS_GameInstance_C_EOS_Party_On_Party_Member_Data_Received__DelegateSignature_Params
{
public:
	struct FUniqueNetIdRepl                      Member_Id;                                         // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UReadablePartyData*                    Party_Member_Data;                                 // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.EOS Party On Party Data Received__DelegateSignature
struct UEOS_GameInstance_C_EOS_Party_On_Party_Data_Received__DelegateSignature_Params
{
public:
	class UReadablePartyData*                    Party_Data;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x190 (0x190 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.JoinedSession__DelegateSignature
struct UEOS_GameInstance_C_JoinedSession__DelegateSignature_Params
{
public:
	bool                                         Successful;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A1C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineSessionSearchResultBP          Session;                                           // 0x8(0x188)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x18 (0x18 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.FoundSessions__DelegateSignature
struct UEOS_GameInstance_C_FoundSessions__DelegateSignature_Params
{
public:
	bool                                         Successful;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A1D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UEOS_SessionReference_C*>       Search_Results;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.CreatedSession__DelegateSignature
struct UEOS_GameInstance_C_CreatedSession__DelegateSignature_Params
{
public:
	bool                                         Successful;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.EOS Party On Left Party__DelegateSignature
struct UEOS_GameInstance_C_EOS_Party_On_Left_Party__DelegateSignature_Params
{
public:
	bool                                         Successful;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.EOS Party On Kicked Member__DelegateSignature
struct UEOS_GameInstance_C_EOS_Party_On_Kicked_Member__DelegateSignature_Params
{
public:
	bool                                         Successful;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.EOS Party On Joined Party__DelegateSignature
struct UEOS_GameInstance_C_EOS_Party_On_Joined_Party__DelegateSignature_Params
{
public:
	bool                                         Successful;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.EOS Party On Friend Invited__DelegateSignature
struct UEOS_GameInstance_C_EOS_Party_On_Friend_Invited__DelegateSignature_Params
{
public:
	bool                                         Successful;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.EOS Party On Party Created__DelegateSignature
struct UEOS_GameInstance_C_EOS_Party_On_Party_Created__DelegateSignature_Params
{
public:
	bool                                         Successful;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.EOS Party On Party Leader Was Followed to Session__DelegateSignature
struct UEOS_GameInstance_C_EOS_Party_On_Party_Leader_Was_Followed_to_Session__DelegateSignature_Params
{
public:
	class FName                                  Session_Name;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.EOS Friend Fetched Friends__DelegateSignature
struct UEOS_GameInstance_C_EOS_Friend_Fetched_Friends__DelegateSignature_Params
{
public:
	bool                                         Successful;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A1E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UEOS_FriendReference_C*>        Friends;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.EOS Auth Logged In__DelegateSignature
struct UEOS_GameInstance_C_EOS_Auth_Logged_In__DelegateSignature_Params
{
public:
	bool                                         Successful;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A1F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Error_Message;                                     // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function EOS_GameInstance.EOS_GameInstance_C.EOS Friend Get Avatar__DelegateSignature
struct UEOS_GameInstance_C_EOS_Friend_Get_Avatar__DelegateSignature_Params
{
public:
	bool                                         Successful;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A20[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              Avatar;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      User_ID;                                           // 0x10(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

}
}


