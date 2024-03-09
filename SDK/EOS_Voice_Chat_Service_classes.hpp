#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x268 - 0x220)
// BlueprintGeneratedClass EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C
class AEOS_Voice_Chat_Service_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVoiceChatUser*                        Voice_User;                                        // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            Joined_Channels_Changed;                           // 0x238(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Participants_Changed;                              // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Voice_Login_Complete;                              // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class AEOS_Voice_Chat_Service_C* GetDefaultObj();

	void Set_Transmit_Mode(uint8 Transmit_Mode, bool K2Node_SwitchEnum_CmpSuccess, TArray<class FString>& CallFunc_GetChannels_ReturnValue, const class FString& CallFunc_Array_Get_Item);
	void Set_Output_Volume(float Volume);
	void Set_Output_Muted(bool Muted);
	void Set_Input_Volume(float Volume);
	void Set_Input_Muted(bool Muted);
	void Get_Transmit_Mode(uint8* Transmit_Mode, enum class EVoiceChatTransmitMode_ Temp_byte_Variable, uint8 Temp_byte_Variable_1, uint8 Temp_byte_Variable_2, uint8 Temp_byte_Variable_3, enum class EVoiceChatTransmitMode_ CallFunc_GetTransmitMode_ReturnValue, uint8 K2Node_Select_Default);
	void Get_Output_Volume(float* Volume, float CallFunc_GetAudioOutputVolume_ReturnValue);
	void Get_Output_Muted(bool* Muted, bool CallFunc_GetAudioOutputDeviceMuted_ReturnValue);
	void Get_Input_Volume(float* Volume, float CallFunc_GetAudioInputVolume_ReturnValue);
	void Get_Input_Muted(bool* Muted, bool CallFunc_GetAudioInputDeviceMuted_ReturnValue);
	void Get_Players_In_Channel(class UEOS_VoiceChannel_Referemce_C* Channel, TArray<class UEOS_Voice_Chat_Participant_Reference_C*>* Participants, const TArray<class UEOS_Voice_Chat_Participant_Reference_C*>& Results, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UEOS_Voice_Chat_Participant_Reference_C* CallFunc_SpawnObject_ReturnValue, TArray<class FString>& CallFunc_GetPlayersInChannel_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Get_Joined_Channels(TArray<class UEOS_VoiceChannel_Referemce_C*>* Channels, const TArray<class UEOS_VoiceChannel_Referemce_C*>& Results, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UEOS_VoiceChannel_Referemce_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<class FString>& CallFunc_GetChannels_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Is_Connecting_(bool* Connecting, class UOnlineVoiceChatSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsConnecting_ReturnValue);
	void Is_Connected_(bool* Connected, class UOnlineVoiceChatSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsConnected_ReturnValue);
	void Get_Logged_In_Player_Name(class FString* Player_Name, const class FString& CallFunc_GetLoggedInPlayerName_ReturnValue);
	void Is_Logged_In_(bool* Logged_In, bool CallFunc_IsLoggedIn_ReturnValue);
	void Set_Output_Device(const class FString& Device, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue);
	void Set_Input_Device(const class FString& Device, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue);
	void Get_Current_Output_Device(class FString* Device, const struct FVoiceChatDeviceInfoBP& CallFunc_GetOutputDeviceInfo_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void Get_Current_Input_Device(class FString* Device, const struct FVoiceChatDeviceInfoBP& CallFunc_GetInputDeviceInfo_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void Get_Available_Output_Devices(TArray<class FString>* Devices, const TArray<class FString>& Results, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FVoiceChatDeviceInfoBP>& CallFunc_GetAvailableOutputDeviceInfos_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVoiceChatDeviceInfoBP& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue);
	void Get_Available_Input_Devices(TArray<class FString>* Devices, const TArray<class FString>& Results, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FVoiceChatDeviceInfoBP>& CallFunc_GetAvailableInputDeviceInfos_ReturnValue, const struct FVoiceChatDeviceInfoBP& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue);
	void OnVoiceChatLoginComplete_57A16C70489EFA960C91F48E326DB441(const class FString& PlayerName, const struct FVoiceChatResultBP& Result);
	void OnCallFailed_57A16C70489EFA960C91F48E326DB441(const class FString& PlayerName, const struct FVoiceChatResultBP& Result);
	void OnVoiceChatChannelJoinComplete_933CD2BA4E95D1B9C48B58AF1158DDBE(const class FString& ChannelName, const struct FVoiceChatResultBP& Result);
	void OnCallFailed_933CD2BA4E95D1B9C48B58AF1158DDBE(const class FString& ChannelName, const struct FVoiceChatResultBP& Result);
	void OnVoiceChatLogoutComplete_DA27C04540EF09EE774270ABBBB3CF51(const class FString& PlayerName, const struct FVoiceChatResultBP& Result);
	void OnCallFailed_DA27C04540EF09EE774270ABBBB3CF51(const class FString& PlayerName, const struct FVoiceChatResultBP& Result);
	void ReceiveBeginPlay();
	void Audio_Devices_Changed();
	void Voice_Chat_Channel_Joined(const class FString& ChannelName);
	void Voice_Chat_Channel_Exited(const class FString& ChannelName, const struct FVoiceChatResultBP& Reason);
	void Voice_Chat_Player_Added(const class FString& ChannelName, const class FString& PlayerName);
	void Voice_Chat_Player_Removed(const class FString& ChannelName, const class FString& PlayerName);
	void Voice_Chat_Player_Mute_Updated(const class FString& ChannelName, const class FString& PlayerName, bool bIsMuted);
	void Voice_Chat_Player_Talking_Updated(const class FString& ChannelName, const class FString& PlayerName, bool bIsTalking);
	void Voice_Login();
	void Join_Voice_Channel(const class FString& Channel_Name, const class FString& Channel_Credentials);
	void Leave_Voice_Channel(bool Success);
	void ExecuteUbergraph_EOS_Voice_Chat_Service(int32 EntryPoint, class UVoiceChatUserLogout* CallFunc_Logout_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const class FString& K2Node_CustomEvent_Playername_7, const struct FVoiceChatResultBP& K2Node_CustomEvent_Result_5, const class FString& K2Node_CustomEvent_Playername_6, const struct FVoiceChatResultBP& K2Node_CustomEvent_Result_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FVoiceChatResultBP& Temp_struct_Variable, const class FString& Temp_string_Variable, class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniquePlayerId_ReturnValue, const class FString& CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, int32 CallFunc_GetPlatformUserIdFromUniqueNetId_ReturnValue, const class FString& K2Node_CustomEvent_ChannelName_7, const struct FVoiceChatResultBP& K2Node_CustomEvent_Result_3, const class FString& K2Node_CustomEvent_ChannelName_6, const struct FVoiceChatResultBP& K2Node_CustomEvent_Result_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FVoiceChatResultBP& Temp_struct_Variable_1, const class FString& Temp_string_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const class FString& K2Node_CustomEvent_Playername_5, const struct FVoiceChatResultBP& K2Node_CustomEvent_Result_1, const class FString& K2Node_CustomEvent_Playername_4, const struct FVoiceChatResultBP& K2Node_CustomEvent_Result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FVoiceChatResultBP& Temp_struct_Variable_2, const class FString& Temp_string_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, const class FString& K2Node_CustomEvent_ChannelName_5, const class FString& K2Node_CustomEvent_ChannelName_4, const struct FVoiceChatResultBP& K2Node_CustomEvent_Reason, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& K2Node_CustomEvent_ChannelName_3, const class FString& K2Node_CustomEvent_Playername_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& K2Node_CustomEvent_ChannelName_2, const class FString& K2Node_CustomEvent_Playername_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& K2Node_CustomEvent_ChannelName_1, const class FString& K2Node_CustomEvent_Playername_1, bool K2Node_CustomEvent_bIsMuted, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& K2Node_CustomEvent_ChannelName, const class FString& K2Node_CustomEvent_Playername, bool K2Node_CustomEvent_bIsTalking, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, const class FString& CallFunc_Concat_StrStr_ReturnValue_16, const class FString& CallFunc_Concat_StrStr_ReturnValue_17, const class FString& CallFunc_Concat_StrStr_ReturnValue_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, const class FString& K2Node_CustomEvent_Channel_Name, const class FString& K2Node_CustomEvent_Channel_Credentials, class UVoiceChatUserLogin* CallFunc_Login_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UVoiceChatUserJoinChannel* CallFunc_JoinChannel_ReturnValue, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, bool CallFunc_IsValid_ReturnValue_2, class UOnlineVoiceChatSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UVoiceChatUser* CallFunc_CreateUser_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_CustomEvent_Success);
	void Voice_Login_Complete__DelegateSignature(bool Succsessful);
	void Participants_Changed__DelegateSignature();
	void Joined_Channels_Changed__DelegateSignature();
};

}


