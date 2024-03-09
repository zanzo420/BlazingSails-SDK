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

// 0x28 (0x28 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Set Transmit Mode
struct AEOS_Voice_Chat_Service_C_Set_Transmit_Mode_Params
{
public:
	uint8                                        Transmit_Mode;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2782[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_GetChannels_ReturnValue;                  // 0x8(0x10)(ReferenceParm)
	class FString                                CallFunc_Array_Get_Item;                           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Set Output Volume
struct AEOS_Voice_Chat_Service_C_Set_Output_Volume_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Set Output Muted
struct AEOS_Voice_Chat_Service_C_Set_Output_Muted_Params
{
public:
	bool                                         Muted;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Set Input Volume
struct AEOS_Voice_Chat_Service_C_Set_Input_Volume_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Set Input Muted
struct AEOS_Voice_Chat_Service_C_Set_Input_Muted_Params
{
public:
	bool                                         Muted;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x7 (0x7 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Get Transmit Mode
struct AEOS_Voice_Chat_Service_C_Get_Transmit_Mode_Params
{
public:
	uint8                                        Transmit_Mode;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVoiceChatTransmitMode_           Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Temp_byte_Variable_2;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Temp_byte_Variable_3;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVoiceChatTransmitMode_           CallFunc_GetTransmitMode_ReturnValue;              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        K2Node_Select_Default;                             // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Get Output Volume
struct AEOS_Voice_Chat_Service_C_Get_Output_Volume_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetAudioOutputVolume_ReturnValue;         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Get Output Muted
struct AEOS_Voice_Chat_Service_C_Get_Output_Muted_Params
{
public:
	bool                                         Muted;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetAudioOutputDeviceMuted_ReturnValue;    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Get Input Volume
struct AEOS_Voice_Chat_Service_C_Get_Input_Volume_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetAudioInputVolume_ReturnValue;          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Get Input Muted
struct AEOS_Voice_Chat_Service_C_Get_Input_Muted_Params
{
public:
	bool                                         Muted;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetAudioInputDeviceMuted_ReturnValue;     // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x74 (0x74 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Get Players In Channel
struct AEOS_Voice_Chat_Service_C_Get_Players_In_Channel_Params
{
public:
	class UEOS_VoiceChannel_Referemce_C*         Channel;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UEOS_Voice_Chat_Participant_Reference_C*> Participants;                                      // 0x8(0x10)(Parm, OutParm)
	TArray<class UEOS_Voice_Chat_Participant_Reference_C*> Results;                                           // 0x18(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2783[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_Voice_Chat_Participant_Reference_C* CallFunc_SpawnObject_ReturnValue;                  // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_GetPlayersInChannel_ReturnValue;          // 0x48(0x10)(ReferenceParm)
	class FString                                CallFunc_Array_Get_Item;                           // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2784[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x71 (0x71 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Get Joined Channels
struct AEOS_Voice_Chat_Service_C_Get_Joined_Channels_Params
{
public:
	TArray<class UEOS_VoiceChannel_Referemce_C*> Channels;                                          // 0x0(0x10)(Parm, OutParm)
	TArray<class UEOS_VoiceChannel_Referemce_C*> Results;                                           // 0x10(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2785[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_VoiceChannel_Referemce_C*         CallFunc_SpawnObject_ReturnValue;                  // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2786[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_GetChannels_ReturnValue;                  // 0x48(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2787[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Is Connecting?
struct AEOS_Voice_Chat_Service_C_Is_Connecting__Params
{
public:
	bool                                         Connecting;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2788[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineVoiceChatSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsConnecting_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Is Connected?
struct AEOS_Voice_Chat_Service_C_Is_Connected__Params
{
public:
	bool                                         Connected;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2789[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineVoiceChatSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsConnected_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Get Logged In Player Name
struct AEOS_Voice_Chat_Service_C_Get_Logged_In_Player_Name_Params
{
public:
	class FString                                Player_Name;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetLoggedInPlayerName_ReturnValue;        // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Is Logged In?
struct AEOS_Voice_Chat_Service_C_Is_Logged_In__Params
{
public:
	bool                                         Logged_In;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLoggedIn_ReturnValue;                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Set Output Device
struct AEOS_Voice_Chat_Service_C_Set_Output_Device_Params
{
public:
	class FString                                Device;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_LeftS;                              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_RightS;                             // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Set Input Device
struct AEOS_Voice_Chat_Service_C_Set_Input_Device_Params
{
public:
	class FString                                Device;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_LeftS;                              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_RightS;                             // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Get Current Output Device
struct AEOS_Voice_Chat_Service_C_Get_Current_Output_Device_Params
{
public:
	class FString                                Device;                                            // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FVoiceChatDeviceInfoBP                CallFunc_GetOutputDeviceInfo_ReturnValue;          // 0x10(0x20)(None)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Get Current Input Device
struct AEOS_Voice_Chat_Service_C_Get_Current_Input_Device_Params
{
public:
	class FString                                Device;                                            // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FVoiceChatDeviceInfoBP                CallFunc_GetInputDeviceInfo_ReturnValue;           // 0x10(0x20)(None)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x94 (0x94 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Get Available Output Devices
struct AEOS_Voice_Chat_Service_C_Get_Available_Output_Devices_Params
{
public:
	TArray<class FString>                        Devices;                                           // 0x0(0x10)(Parm, OutParm)
	TArray<class FString>                        Results;                                           // 0x10(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_278A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVoiceChatDeviceInfoBP>        CallFunc_GetAvailableOutputDeviceInfos_ReturnValue; // 0x30(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_278B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVoiceChatDeviceInfoBP                CallFunc_Array_Get_Item;                           // 0x48(0x20)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_278C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8C (0x8C - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Get Available Input Devices
struct AEOS_Voice_Chat_Service_C_Get_Available_Input_Devices_Params
{
public:
	TArray<class FString>                        Devices;                                           // 0x0(0x10)(Parm, OutParm)
	TArray<class FString>                        Results;                                           // 0x10(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_278D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVoiceChatDeviceInfoBP>        CallFunc_GetAvailableInputDeviceInfos_ReturnValue; // 0x30(0x10)(ReferenceParm)
	struct FVoiceChatDeviceInfoBP                CallFunc_Array_Get_Item;                           // 0x40(0x20)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_278E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.OnVoiceChatLoginComplete_57A16C70489EFA960C91F48E326DB441
struct AEOS_Voice_Chat_Service_C_OnVoiceChatLoginComplete_57A16C70489EFA960C91F48E326DB441_Params
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FVoiceChatResultBP                    Result;                                            // 0x10(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x40 (0x40 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.OnCallFailed_57A16C70489EFA960C91F48E326DB441
struct AEOS_Voice_Chat_Service_C_OnCallFailed_57A16C70489EFA960C91F48E326DB441_Params
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FVoiceChatResultBP                    Result;                                            // 0x10(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x40 (0x40 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.OnVoiceChatChannelJoinComplete_933CD2BA4E95D1B9C48B58AF1158DDBE
struct AEOS_Voice_Chat_Service_C_OnVoiceChatChannelJoinComplete_933CD2BA4E95D1B9C48B58AF1158DDBE_Params
{
public:
	class FString                                ChannelName;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FVoiceChatResultBP                    Result;                                            // 0x10(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x40 (0x40 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.OnCallFailed_933CD2BA4E95D1B9C48B58AF1158DDBE
struct AEOS_Voice_Chat_Service_C_OnCallFailed_933CD2BA4E95D1B9C48B58AF1158DDBE_Params
{
public:
	class FString                                ChannelName;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FVoiceChatResultBP                    Result;                                            // 0x10(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x40 (0x40 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.OnVoiceChatLogoutComplete_DA27C04540EF09EE774270ABBBB3CF51
struct AEOS_Voice_Chat_Service_C_OnVoiceChatLogoutComplete_DA27C04540EF09EE774270ABBBB3CF51_Params
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FVoiceChatResultBP                    Result;                                            // 0x10(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x40 (0x40 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.OnCallFailed_DA27C04540EF09EE774270ABBBB3CF51
struct AEOS_Voice_Chat_Service_C_OnCallFailed_DA27C04540EF09EE774270ABBBB3CF51_Params
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FVoiceChatResultBP                    Result;                                            // 0x10(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Voice Chat Channel Joined
struct AEOS_Voice_Chat_Service_C_Voice_Chat_Channel_Joined_Params
{
public:
	class FString                                ChannelName;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Voice Chat Channel Exited
struct AEOS_Voice_Chat_Service_C_Voice_Chat_Channel_Exited_Params
{
public:
	class FString                                ChannelName;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FVoiceChatResultBP                    Reason;                                            // 0x10(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x20 (0x20 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Voice Chat Player Added
struct AEOS_Voice_Chat_Service_C_Voice_Chat_Player_Added_Params
{
public:
	class FString                                ChannelName;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                PlayerName;                                        // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Voice Chat Player Removed
struct AEOS_Voice_Chat_Service_C_Voice_Chat_Player_Removed_Params
{
public:
	class FString                                ChannelName;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                PlayerName;                                        // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Voice Chat Player Mute Updated
struct AEOS_Voice_Chat_Service_C_Voice_Chat_Player_Mute_Updated_Params
{
public:
	class FString                                ChannelName;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                PlayerName;                                        // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         bIsMuted;                                          // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Voice Chat Player Talking Updated
struct AEOS_Voice_Chat_Service_C_Voice_Chat_Player_Talking_Updated_Params
{
public:
	class FString                                ChannelName;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                PlayerName;                                        // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         bIsTalking;                                        // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Join Voice Channel
struct AEOS_Voice_Chat_Service_C_Join_Voice_Channel_Params
{
public:
	class FString                                Channel_Name;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Channel_Credentials;                               // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Leave Voice Channel
struct AEOS_Voice_Chat_Service_C_Leave_Voice_Channel_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x62A (0x62A - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.ExecuteUbergraph_EOS_Voice_Chat_Service
struct AEOS_Voice_Chat_Service_C_ExecuteUbergraph_EOS_Voice_Chat_Service_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_278F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVoiceChatUserLogout*                  CallFunc_Logout_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2790[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x24(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x34(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x44(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_2791[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Playername_7;                   // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FVoiceChatResultBP                    K2Node_CustomEvent_Result_5;                       // 0x68(0x30)(None)
	class FString                                K2Node_CustomEvent_Playername_6;                   // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FVoiceChatResultBP                    K2Node_CustomEvent_Result_4;                       // 0xA8(0x30)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xD8(0x10)(ZeroConstructor, NoDestructor)
	struct FVoiceChatResultBP                    Temp_struct_Variable;                              // 0xE8(0x30)(None)
	class FString                                Temp_string_Variable;                              // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UOnlineIdentitySubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetUniquePlayerId_ReturnValue;            // 0x130(0x28)(HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue; // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x168(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_GetPlatformUserIdFromUniqueNetId_ReturnValue; // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2792[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_ChannelName_7;                  // 0x180(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FVoiceChatResultBP                    K2Node_CustomEvent_Result_3;                       // 0x190(0x30)(None)
	class FString                                K2Node_CustomEvent_ChannelName_6;                  // 0x1C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FVoiceChatResultBP                    K2Node_CustomEvent_Result_2;                       // 0x1D0(0x30)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x200(0x10)(ZeroConstructor, NoDestructor)
	struct FVoiceChatResultBP                    Temp_struct_Variable_1;                            // 0x210(0x30)(None)
	class FString                                Temp_string_Variable_1;                            // 0x240(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x250(0x10)(ZeroConstructor, NoDestructor)
	class FString                                K2Node_CustomEvent_Playername_5;                   // 0x260(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FVoiceChatResultBP                    K2Node_CustomEvent_Result_1;                       // 0x270(0x30)(None)
	class FString                                K2Node_CustomEvent_Playername_4;                   // 0x2A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FVoiceChatResultBP                    K2Node_CustomEvent_Result;                         // 0x2B0(0x30)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x2E0(0x10)(ZeroConstructor, NoDestructor)
	struct FVoiceChatResultBP                    Temp_struct_Variable_2;                            // 0x2F0(0x30)(None)
	class FString                                Temp_string_Variable_2;                            // 0x320(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x330(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x340(0x10)(ZeroConstructor, NoDestructor)
	class FString                                K2Node_CustomEvent_ChannelName_5;                  // 0x350(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ChannelName_4;                  // 0x360(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FVoiceChatResultBP                    K2Node_CustomEvent_Reason;                         // 0x370(0x30)(None)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x3A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x3B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x3C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ChannelName_3;                  // 0x3D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Playername_3;                   // 0x3E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x3F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x400(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x410(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x420(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x430(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ChannelName_2;                  // 0x440(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Playername_2;                   // 0x450(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x460(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ChannelName_1;                  // 0x470(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Playername_1;                   // 0x480(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bIsMuted;                       // 0x490(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2793[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_8;              // 0x498(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue;            // 0x4A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_9;              // 0x4B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_10;             // 0x4C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_11;             // 0x4D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ChannelName;                    // 0x4E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Playername;                     // 0x4F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bIsTalking;                     // 0x508(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2794[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_12;             // 0x510(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_1;          // 0x520(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_13;             // 0x530(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_14;             // 0x540(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_15;             // 0x550(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_16;             // 0x560(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_17;             // 0x570(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_18;             // 0x580(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x590(0x10)(ZeroConstructor, NoDestructor)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_19;             // 0x5A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x5B0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x5C0(0x10)(ZeroConstructor, NoDestructor)
	class FString                                K2Node_CustomEvent_Channel_Name;                   // 0x5D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Channel_Credentials;            // 0x5E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UVoiceChatUserLogin*                   CallFunc_Login_ReturnValue;                        // 0x5F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2795[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVoiceChatUserJoinChannel*             CallFunc_JoinChannel_ReturnValue;                  // 0x600(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_GameInstance_C*                   CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance; // 0x608(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x610(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2796[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOnlineVoiceChatSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x618(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVoiceChatUser*                        CallFunc_CreateUser_ReturnValue;                   // 0x620(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x628(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Success;                        // 0x629(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Voice Login Complete__DelegateSignature
struct AEOS_Voice_Chat_Service_C_Voice_Login_Complete__DelegateSignature_Params
{
public:
	bool                                         Succsessful;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


