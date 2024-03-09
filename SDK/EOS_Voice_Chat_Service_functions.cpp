#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C
// (Actor)

class UClass* AEOS_Voice_Chat_Service_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOS_Voice_Chat_Service_C");

	return Clss;
}


// EOS_Voice_Chat_Service_C EOS_Voice_Chat_Service.Default__EOS_Voice_Chat_Service_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEOS_Voice_Chat_Service_C* AEOS_Voice_Chat_Service_C::GetDefaultObj()
{
	static class AEOS_Voice_Chat_Service_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEOS_Voice_Chat_Service_C*>(AEOS_Voice_Chat_Service_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Set Transmit Mode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              Transmit_Mode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_GetChannels_ReturnValue                                 (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)

void AEOS_Voice_Chat_Service_C::Set_Transmit_Mode(uint8 Transmit_Mode, bool K2Node_SwitchEnum_CmpSuccess, TArray<class FString>& CallFunc_GetChannels_ReturnValue, const class FString& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Set Transmit Mode");

	Params::AEOS_Voice_Chat_Service_C_Set_Transmit_Mode_Params Parms{};

	Parms.Transmit_Mode = Transmit_Mode;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetChannels_ReturnValue = CallFunc_GetChannels_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Set Output Volume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEOS_Voice_Chat_Service_C::Set_Output_Volume(float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Set Output Volume");

	Params::AEOS_Voice_Chat_Service_C_Set_Output_Volume_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Set Output Muted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Muted                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_Voice_Chat_Service_C::Set_Output_Muted(bool Muted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Set Output Muted");

	Params::AEOS_Voice_Chat_Service_C_Set_Output_Muted_Params Parms{};

	Parms.Muted = Muted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Set Input Volume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEOS_Voice_Chat_Service_C::Set_Input_Volume(float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Set Input Volume");

	Params::AEOS_Voice_Chat_Service_C_Set_Input_Volume_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Set Input Muted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Muted                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_Voice_Chat_Service_C::Set_Input_Muted(bool Muted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Set Input Muted");

	Params::AEOS_Voice_Chat_Service_C_Set_Input_Muted_Params Parms{};

	Parms.Muted = Muted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Get Transmit Mode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// uint8                              Transmit_Mode                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatTransmitMode_ Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceChatTransmitMode_ CallFunc_GetTransmitMode_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEOS_Voice_Chat_Service_C::Get_Transmit_Mode(uint8* Transmit_Mode, enum class EVoiceChatTransmitMode_ Temp_byte_Variable, uint8 Temp_byte_Variable_1, uint8 Temp_byte_Variable_2, uint8 Temp_byte_Variable_3, enum class EVoiceChatTransmitMode_ CallFunc_GetTransmitMode_ReturnValue, uint8 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Get Transmit Mode");

	Params::AEOS_Voice_Chat_Service_C_Get_Transmit_Mode_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetTransmitMode_ReturnValue = CallFunc_GetTransmitMode_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Transmit_Mode != nullptr)
		*Transmit_Mode = Parms.Transmit_Mode;

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Get Output Volume
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Volume                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioOutputVolume_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEOS_Voice_Chat_Service_C::Get_Output_Volume(float* Volume, float CallFunc_GetAudioOutputVolume_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Get Output Volume");

	Params::AEOS_Voice_Chat_Service_C_Get_Output_Volume_Params Parms{};

	Parms.CallFunc_GetAudioOutputVolume_ReturnValue = CallFunc_GetAudioOutputVolume_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Volume != nullptr)
		*Volume = Parms.Volume;

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Get Output Muted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Muted                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetAudioOutputDeviceMuted_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_Voice_Chat_Service_C::Get_Output_Muted(bool* Muted, bool CallFunc_GetAudioOutputDeviceMuted_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Get Output Muted");

	Params::AEOS_Voice_Chat_Service_C_Get_Output_Muted_Params Parms{};

	Parms.CallFunc_GetAudioOutputDeviceMuted_ReturnValue = CallFunc_GetAudioOutputDeviceMuted_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Muted != nullptr)
		*Muted = Parms.Muted;

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Get Input Volume
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Volume                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioInputVolume_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEOS_Voice_Chat_Service_C::Get_Input_Volume(float* Volume, float CallFunc_GetAudioInputVolume_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Get Input Volume");

	Params::AEOS_Voice_Chat_Service_C_Get_Input_Volume_Params Parms{};

	Parms.CallFunc_GetAudioInputVolume_ReturnValue = CallFunc_GetAudioInputVolume_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Volume != nullptr)
		*Volume = Parms.Volume;

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Get Input Muted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Muted                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetAudioInputDeviceMuted_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_Voice_Chat_Service_C::Get_Input_Muted(bool* Muted, bool CallFunc_GetAudioInputDeviceMuted_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Get Input Muted");

	Params::AEOS_Voice_Chat_Service_C_Get_Input_Muted_Params Parms{};

	Parms.CallFunc_GetAudioInputDeviceMuted_ReturnValue = CallFunc_GetAudioInputDeviceMuted_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Muted != nullptr)
		*Muted = Parms.Muted;

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Get Players In Channel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOS_VoiceChannel_Referemce_C*Channel                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UEOS_Voice_Chat_Participant_Reference_C*>Participants                                                     (Parm, OutParm)
// TArray<class UEOS_Voice_Chat_Participant_Reference_C*>Results                                                          (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_Voice_Chat_Participant_Reference_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetPlayersInChannel_ReturnValue                         (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEOS_Voice_Chat_Service_C::Get_Players_In_Channel(class UEOS_VoiceChannel_Referemce_C* Channel, TArray<class UEOS_Voice_Chat_Participant_Reference_C*>* Participants, const TArray<class UEOS_Voice_Chat_Participant_Reference_C*>& Results, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UEOS_Voice_Chat_Participant_Reference_C* CallFunc_SpawnObject_ReturnValue, TArray<class FString>& CallFunc_GetPlayersInChannel_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Get Players In Channel");

	Params::AEOS_Voice_Chat_Service_C_Get_Players_In_Channel_Params Parms{};

	Parms.Channel = Channel;
	Parms.Results = Results;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetPlayersInChannel_ReturnValue = CallFunc_GetPlayersInChannel_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Participants != nullptr)
		*Participants = std::move(Parms.Participants);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Get Joined Channels
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UEOS_VoiceChannel_Referemce_C*>Channels                                                         (Parm, OutParm)
// TArray<class UEOS_VoiceChannel_Referemce_C*>Results                                                          (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_VoiceChannel_Referemce_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetChannels_ReturnValue                                 (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_Voice_Chat_Service_C::Get_Joined_Channels(TArray<class UEOS_VoiceChannel_Referemce_C*>* Channels, const TArray<class UEOS_VoiceChannel_Referemce_C*>& Results, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UEOS_VoiceChannel_Referemce_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<class FString>& CallFunc_GetChannels_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Get Joined Channels");

	Params::AEOS_Voice_Chat_Service_C_Get_Joined_Channels_Params Parms{};

	Parms.Results = Results;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetChannels_ReturnValue = CallFunc_GetChannels_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Channels != nullptr)
		*Channels = std::move(Parms.Channels);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Is Connecting?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Connecting                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlineVoiceChatSubsystem*   CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsConnecting_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_Voice_Chat_Service_C::Is_Connecting_(bool* Connecting, class UOnlineVoiceChatSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsConnecting_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Is Connecting?");

	Params::AEOS_Voice_Chat_Service_C_Is_Connecting__Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsConnecting_ReturnValue = CallFunc_IsConnecting_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Connecting != nullptr)
		*Connecting = Parms.Connecting;

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Is Connected?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Connected                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlineVoiceChatSubsystem*   CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsConnected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_Voice_Chat_Service_C::Is_Connected_(bool* Connected, class UOnlineVoiceChatSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsConnected_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Is Connected?");

	Params::AEOS_Voice_Chat_Service_C_Is_Connected__Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsConnected_ReturnValue = CallFunc_IsConnected_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Connected != nullptr)
		*Connected = Parms.Connected;

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Get Logged In Player Name
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Player_Name                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLoggedInPlayerName_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)

void AEOS_Voice_Chat_Service_C::Get_Logged_In_Player_Name(class FString* Player_Name, const class FString& CallFunc_GetLoggedInPlayerName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Get Logged In Player Name");

	Params::AEOS_Voice_Chat_Service_C_Get_Logged_In_Player_Name_Params Parms{};

	Parms.CallFunc_GetLoggedInPlayerName_ReturnValue = CallFunc_GetLoggedInPlayerName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Player_Name != nullptr)
		*Player_Name = std::move(Parms.Player_Name);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Is Logged In?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Logged_In                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLoggedIn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_Voice_Chat_Service_C::Is_Logged_In_(bool* Logged_In, bool CallFunc_IsLoggedIn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Is Logged In?");

	Params::AEOS_Voice_Chat_Service_C_Is_Logged_In__Params Parms{};

	Parms.CallFunc_IsLoggedIn_ReturnValue = CallFunc_IsLoggedIn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Logged_In != nullptr)
		*Logged_In = Parms.Logged_In;

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Set Output Device
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Device                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_Voice_Chat_Service_C::Set_Output_Device(const class FString& Device, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Set Output Device");

	Params::AEOS_Voice_Chat_Service_C_Set_Output_Device_Params Parms{};

	Parms.Device = Device;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Set Input Device
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Device                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_Voice_Chat_Service_C::Set_Input_Device(const class FString& Device, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Set Input Device");

	Params::AEOS_Voice_Chat_Service_C_Set_Input_Device_Params Parms{};

	Parms.Device = Device;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Get Current Output Device
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Device                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// struct FVoiceChatDeviceInfoBP      CallFunc_GetOutputDeviceInfo_ReturnValue                         (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void AEOS_Voice_Chat_Service_C::Get_Current_Output_Device(class FString* Device, const struct FVoiceChatDeviceInfoBP& CallFunc_GetOutputDeviceInfo_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Get Current Output Device");

	Params::AEOS_Voice_Chat_Service_C_Get_Current_Output_Device_Params Parms{};

	Parms.CallFunc_GetOutputDeviceInfo_ReturnValue = CallFunc_GetOutputDeviceInfo_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Device != nullptr)
		*Device = std::move(Parms.Device);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Get Current Input Device
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Device                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// struct FVoiceChatDeviceInfoBP      CallFunc_GetInputDeviceInfo_ReturnValue                          (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void AEOS_Voice_Chat_Service_C::Get_Current_Input_Device(class FString* Device, const struct FVoiceChatDeviceInfoBP& CallFunc_GetInputDeviceInfo_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Get Current Input Device");

	Params::AEOS_Voice_Chat_Service_C_Get_Current_Input_Device_Params Parms{};

	Parms.CallFunc_GetInputDeviceInfo_ReturnValue = CallFunc_GetInputDeviceInfo_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Device != nullptr)
		*Device = std::move(Parms.Device);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Get Available Output Devices
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Devices                                                          (Parm, OutParm)
// TArray<class FString>              Results                                                          (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVoiceChatDeviceInfoBP>CallFunc_GetAvailableOutputDeviceInfos_ReturnValue               (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVoiceChatDeviceInfoBP      CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEOS_Voice_Chat_Service_C::Get_Available_Output_Devices(TArray<class FString>* Devices, const TArray<class FString>& Results, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FVoiceChatDeviceInfoBP>& CallFunc_GetAvailableOutputDeviceInfos_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVoiceChatDeviceInfoBP& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Get Available Output Devices");

	Params::AEOS_Voice_Chat_Service_C_Get_Available_Output_Devices_Params Parms{};

	Parms.Results = Results;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAvailableOutputDeviceInfos_ReturnValue = CallFunc_GetAvailableOutputDeviceInfos_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Devices != nullptr)
		*Devices = std::move(Parms.Devices);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Get Available Input Devices
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Devices                                                          (Parm, OutParm)
// TArray<class FString>              Results                                                          (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVoiceChatDeviceInfoBP>CallFunc_GetAvailableInputDeviceInfos_ReturnValue                (ReferenceParm)
// struct FVoiceChatDeviceInfoBP      CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEOS_Voice_Chat_Service_C::Get_Available_Input_Devices(TArray<class FString>* Devices, const TArray<class FString>& Results, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FVoiceChatDeviceInfoBP>& CallFunc_GetAvailableInputDeviceInfos_ReturnValue, const struct FVoiceChatDeviceInfoBP& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Get Available Input Devices");

	Params::AEOS_Voice_Chat_Service_C_Get_Available_Input_Devices_Params Parms{};

	Parms.Results = Results;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAvailableInputDeviceInfos_ReturnValue = CallFunc_GetAvailableInputDeviceInfos_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Devices != nullptr)
		*Devices = std::move(Parms.Devices);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.OnVoiceChatLoginComplete_57A16C70489EFA960C91F48E326DB441
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FVoiceChatResultBP          Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void AEOS_Voice_Chat_Service_C::OnVoiceChatLoginComplete_57A16C70489EFA960C91F48E326DB441(const class FString& PlayerName, const struct FVoiceChatResultBP& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "OnVoiceChatLoginComplete_57A16C70489EFA960C91F48E326DB441");

	Params::AEOS_Voice_Chat_Service_C_OnVoiceChatLoginComplete_57A16C70489EFA960C91F48E326DB441_Params Parms{};

	Parms.PlayerName = PlayerName;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.OnCallFailed_57A16C70489EFA960C91F48E326DB441
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FVoiceChatResultBP          Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void AEOS_Voice_Chat_Service_C::OnCallFailed_57A16C70489EFA960C91F48E326DB441(const class FString& PlayerName, const struct FVoiceChatResultBP& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "OnCallFailed_57A16C70489EFA960C91F48E326DB441");

	Params::AEOS_Voice_Chat_Service_C_OnCallFailed_57A16C70489EFA960C91F48E326DB441_Params Parms{};

	Parms.PlayerName = PlayerName;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.OnVoiceChatChannelJoinComplete_933CD2BA4E95D1B9C48B58AF1158DDBE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ChannelName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FVoiceChatResultBP          Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void AEOS_Voice_Chat_Service_C::OnVoiceChatChannelJoinComplete_933CD2BA4E95D1B9C48B58AF1158DDBE(const class FString& ChannelName, const struct FVoiceChatResultBP& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "OnVoiceChatChannelJoinComplete_933CD2BA4E95D1B9C48B58AF1158DDBE");

	Params::AEOS_Voice_Chat_Service_C_OnVoiceChatChannelJoinComplete_933CD2BA4E95D1B9C48B58AF1158DDBE_Params Parms{};

	Parms.ChannelName = ChannelName;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.OnCallFailed_933CD2BA4E95D1B9C48B58AF1158DDBE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ChannelName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FVoiceChatResultBP          Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void AEOS_Voice_Chat_Service_C::OnCallFailed_933CD2BA4E95D1B9C48B58AF1158DDBE(const class FString& ChannelName, const struct FVoiceChatResultBP& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "OnCallFailed_933CD2BA4E95D1B9C48B58AF1158DDBE");

	Params::AEOS_Voice_Chat_Service_C_OnCallFailed_933CD2BA4E95D1B9C48B58AF1158DDBE_Params Parms{};

	Parms.ChannelName = ChannelName;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.OnVoiceChatLogoutComplete_DA27C04540EF09EE774270ABBBB3CF51
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FVoiceChatResultBP          Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void AEOS_Voice_Chat_Service_C::OnVoiceChatLogoutComplete_DA27C04540EF09EE774270ABBBB3CF51(const class FString& PlayerName, const struct FVoiceChatResultBP& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "OnVoiceChatLogoutComplete_DA27C04540EF09EE774270ABBBB3CF51");

	Params::AEOS_Voice_Chat_Service_C_OnVoiceChatLogoutComplete_DA27C04540EF09EE774270ABBBB3CF51_Params Parms{};

	Parms.PlayerName = PlayerName;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.OnCallFailed_DA27C04540EF09EE774270ABBBB3CF51
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FVoiceChatResultBP          Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void AEOS_Voice_Chat_Service_C::OnCallFailed_DA27C04540EF09EE774270ABBBB3CF51(const class FString& PlayerName, const struct FVoiceChatResultBP& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "OnCallFailed_DA27C04540EF09EE774270ABBBB3CF51");

	Params::AEOS_Voice_Chat_Service_C_OnCallFailed_DA27C04540EF09EE774270ABBBB3CF51_Params Parms{};

	Parms.PlayerName = PlayerName;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AEOS_Voice_Chat_Service_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Audio Devices Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEOS_Voice_Chat_Service_C::Audio_Devices_Changed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Audio Devices Changed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Voice Chat Channel Joined
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ChannelName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AEOS_Voice_Chat_Service_C::Voice_Chat_Channel_Joined(const class FString& ChannelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Voice Chat Channel Joined");

	Params::AEOS_Voice_Chat_Service_C_Voice_Chat_Channel_Joined_Params Parms{};

	Parms.ChannelName = ChannelName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Voice Chat Channel Exited
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ChannelName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FVoiceChatResultBP          Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void AEOS_Voice_Chat_Service_C::Voice_Chat_Channel_Exited(const class FString& ChannelName, const struct FVoiceChatResultBP& Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Voice Chat Channel Exited");

	Params::AEOS_Voice_Chat_Service_C_Voice_Chat_Channel_Exited_Params Parms{};

	Parms.ChannelName = ChannelName;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Voice Chat Player Added
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ChannelName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AEOS_Voice_Chat_Service_C::Voice_Chat_Player_Added(const class FString& ChannelName, const class FString& PlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Voice Chat Player Added");

	Params::AEOS_Voice_Chat_Service_C_Voice_Chat_Player_Added_Params Parms{};

	Parms.ChannelName = ChannelName;
	Parms.PlayerName = PlayerName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Voice Chat Player Removed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ChannelName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AEOS_Voice_Chat_Service_C::Voice_Chat_Player_Removed(const class FString& ChannelName, const class FString& PlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Voice Chat Player Removed");

	Params::AEOS_Voice_Chat_Service_C_Voice_Chat_Player_Removed_Params Parms{};

	Parms.ChannelName = ChannelName;
	Parms.PlayerName = PlayerName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Voice Chat Player Mute Updated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ChannelName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               bIsMuted                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_Voice_Chat_Service_C::Voice_Chat_Player_Mute_Updated(const class FString& ChannelName, const class FString& PlayerName, bool bIsMuted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Voice Chat Player Mute Updated");

	Params::AEOS_Voice_Chat_Service_C_Voice_Chat_Player_Mute_Updated_Params Parms{};

	Parms.ChannelName = ChannelName;
	Parms.PlayerName = PlayerName;
	Parms.bIsMuted = bIsMuted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Voice Chat Player Talking Updated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ChannelName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               bIsTalking                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_Voice_Chat_Service_C::Voice_Chat_Player_Talking_Updated(const class FString& ChannelName, const class FString& PlayerName, bool bIsTalking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Voice Chat Player Talking Updated");

	Params::AEOS_Voice_Chat_Service_C_Voice_Chat_Player_Talking_Updated_Params Parms{};

	Parms.ChannelName = ChannelName;
	Parms.PlayerName = PlayerName;
	Parms.bIsTalking = bIsTalking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Voice Login
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEOS_Voice_Chat_Service_C::Voice_Login()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Voice Login");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Join Voice Channel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Channel_Name                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Channel_Credentials                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AEOS_Voice_Chat_Service_C::Join_Voice_Channel(const class FString& Channel_Name, const class FString& Channel_Credentials)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Join Voice Channel");

	Params::AEOS_Voice_Chat_Service_C_Join_Voice_Channel_Params Parms{};

	Parms.Channel_Name = Channel_Name;
	Parms.Channel_Credentials = Channel_Credentials;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Leave Voice Channel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_Voice_Chat_Service_C::Leave_Voice_Channel(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Leave Voice Channel");

	Params::AEOS_Voice_Chat_Service_C_Leave_Voice_Channel_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.ExecuteUbergraph_EOS_Voice_Chat_Service
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVoiceChatUserLogout*        CallFunc_Logout_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_Playername_7                                  (ZeroConstructor, HasGetValueTypeHash)
// struct FVoiceChatResultBP          K2Node_CustomEvent_Result_5                                      (None)
// class FString                      K2Node_CustomEvent_Playername_6                                  (ZeroConstructor, HasGetValueTypeHash)
// struct FVoiceChatResultBP          K2Node_CustomEvent_Result_4                                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FVoiceChatResultBP          Temp_struct_Variable                                             (None)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class UOnlineIdentitySubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUniquePlayerId_ReturnValue                           (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_GetPlatformUserIdFromUniqueNetId_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ChannelName_7                                 (ZeroConstructor, HasGetValueTypeHash)
// struct FVoiceChatResultBP          K2Node_CustomEvent_Result_3                                      (None)
// class FString                      K2Node_CustomEvent_ChannelName_6                                 (ZeroConstructor, HasGetValueTypeHash)
// struct FVoiceChatResultBP          K2Node_CustomEvent_Result_2                                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// struct FVoiceChatResultBP          Temp_struct_Variable_1                                           (None)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_Playername_5                                  (ZeroConstructor, HasGetValueTypeHash)
// struct FVoiceChatResultBP          K2Node_CustomEvent_Result_1                                      (None)
// class FString                      K2Node_CustomEvent_Playername_4                                  (ZeroConstructor, HasGetValueTypeHash)
// struct FVoiceChatResultBP          K2Node_CustomEvent_Result                                        (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// struct FVoiceChatResultBP          Temp_struct_Variable_2                                           (None)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_ChannelName_5                                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ChannelName_4                                 (ZeroConstructor, HasGetValueTypeHash)
// struct FVoiceChatResultBP          K2Node_CustomEvent_Reason                                        (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ChannelName_3                                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Playername_3                                  (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ChannelName_2                                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Playername_2                                  (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ChannelName_1                                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Playername_1                                  (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsMuted                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ChannelName                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Playername                                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsTalking                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_14                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_15                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_16                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_17                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_18                            (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_19                            (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_Channel_Name                                  (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Channel_Credentials                           (ZeroConstructor, HasGetValueTypeHash)
// class UVoiceChatUserLogin*         CallFunc_Login_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVoiceChatUserJoinChannel*   CallFunc_JoinChannel_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnlineVoiceChatSubsystem*   CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVoiceChatUser*              CallFunc_CreateUser_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_Voice_Chat_Service_C::ExecuteUbergraph_EOS_Voice_Chat_Service(int32 EntryPoint, class UVoiceChatUserLogout* CallFunc_Logout_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const class FString& K2Node_CustomEvent_Playername_7, const struct FVoiceChatResultBP& K2Node_CustomEvent_Result_5, const class FString& K2Node_CustomEvent_Playername_6, const struct FVoiceChatResultBP& K2Node_CustomEvent_Result_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FVoiceChatResultBP& Temp_struct_Variable, const class FString& Temp_string_Variable, class UOnlineIdentitySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniquePlayerId_ReturnValue, const class FString& CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, int32 CallFunc_GetPlatformUserIdFromUniqueNetId_ReturnValue, const class FString& K2Node_CustomEvent_ChannelName_7, const struct FVoiceChatResultBP& K2Node_CustomEvent_Result_3, const class FString& K2Node_CustomEvent_ChannelName_6, const struct FVoiceChatResultBP& K2Node_CustomEvent_Result_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FVoiceChatResultBP& Temp_struct_Variable_1, const class FString& Temp_string_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const class FString& K2Node_CustomEvent_Playername_5, const struct FVoiceChatResultBP& K2Node_CustomEvent_Result_1, const class FString& K2Node_CustomEvent_Playername_4, const struct FVoiceChatResultBP& K2Node_CustomEvent_Result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FVoiceChatResultBP& Temp_struct_Variable_2, const class FString& Temp_string_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, const class FString& K2Node_CustomEvent_ChannelName_5, const class FString& K2Node_CustomEvent_ChannelName_4, const struct FVoiceChatResultBP& K2Node_CustomEvent_Reason, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& K2Node_CustomEvent_ChannelName_3, const class FString& K2Node_CustomEvent_Playername_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& K2Node_CustomEvent_ChannelName_2, const class FString& K2Node_CustomEvent_Playername_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& K2Node_CustomEvent_ChannelName_1, const class FString& K2Node_CustomEvent_Playername_1, bool K2Node_CustomEvent_bIsMuted, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& K2Node_CustomEvent_ChannelName, const class FString& K2Node_CustomEvent_Playername, bool K2Node_CustomEvent_bIsTalking, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, const class FString& CallFunc_Concat_StrStr_ReturnValue_16, const class FString& CallFunc_Concat_StrStr_ReturnValue_17, const class FString& CallFunc_Concat_StrStr_ReturnValue_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, const class FString& K2Node_CustomEvent_Channel_Name, const class FString& K2Node_CustomEvent_Channel_Credentials, class UVoiceChatUserLogin* CallFunc_Login_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UVoiceChatUserJoinChannel* CallFunc_JoinChannel_ReturnValue, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, bool CallFunc_IsValid_ReturnValue_2, class UOnlineVoiceChatSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UVoiceChatUser* CallFunc_CreateUser_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_CustomEvent_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "ExecuteUbergraph_EOS_Voice_Chat_Service");

	Params::AEOS_Voice_Chat_Service_C_ExecuteUbergraph_EOS_Voice_Chat_Service_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Logout_ReturnValue = CallFunc_Logout_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_Playername_7 = K2Node_CustomEvent_Playername_7;
	Parms.K2Node_CustomEvent_Result_5 = K2Node_CustomEvent_Result_5;
	Parms.K2Node_CustomEvent_Playername_6 = K2Node_CustomEvent_Playername_6;
	Parms.K2Node_CustomEvent_Result_4 = K2Node_CustomEvent_Result_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetUniquePlayerId_ReturnValue = CallFunc_GetUniquePlayerId_ReturnValue;
	Parms.CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue = CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetPlatformUserIdFromUniqueNetId_ReturnValue = CallFunc_GetPlatformUserIdFromUniqueNetId_ReturnValue;
	Parms.K2Node_CustomEvent_ChannelName_7 = K2Node_CustomEvent_ChannelName_7;
	Parms.K2Node_CustomEvent_Result_3 = K2Node_CustomEvent_Result_3;
	Parms.K2Node_CustomEvent_ChannelName_6 = K2Node_CustomEvent_ChannelName_6;
	Parms.K2Node_CustomEvent_Result_2 = K2Node_CustomEvent_Result_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_Playername_5 = K2Node_CustomEvent_Playername_5;
	Parms.K2Node_CustomEvent_Result_1 = K2Node_CustomEvent_Result_1;
	Parms.K2Node_CustomEvent_Playername_4 = K2Node_CustomEvent_Playername_4;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CustomEvent_ChannelName_5 = K2Node_CustomEvent_ChannelName_5;
	Parms.K2Node_CustomEvent_ChannelName_4 = K2Node_CustomEvent_ChannelName_4;
	Parms.K2Node_CustomEvent_Reason = K2Node_CustomEvent_Reason;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_CustomEvent_ChannelName_3 = K2Node_CustomEvent_ChannelName_3;
	Parms.K2Node_CustomEvent_Playername_3 = K2Node_CustomEvent_Playername_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.K2Node_CustomEvent_ChannelName_2 = K2Node_CustomEvent_ChannelName_2;
	Parms.K2Node_CustomEvent_Playername_2 = K2Node_CustomEvent_Playername_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.K2Node_CustomEvent_ChannelName_1 = K2Node_CustomEvent_ChannelName_1;
	Parms.K2Node_CustomEvent_Playername_1 = K2Node_CustomEvent_Playername_1;
	Parms.K2Node_CustomEvent_bIsMuted = K2Node_CustomEvent_bIsMuted;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.K2Node_CustomEvent_ChannelName = K2Node_CustomEvent_ChannelName;
	Parms.K2Node_CustomEvent_Playername = K2Node_CustomEvent_Playername;
	Parms.K2Node_CustomEvent_bIsTalking = K2Node_CustomEvent_bIsTalking;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.CallFunc_Concat_StrStr_ReturnValue_14 = CallFunc_Concat_StrStr_ReturnValue_14;
	Parms.CallFunc_Concat_StrStr_ReturnValue_15 = CallFunc_Concat_StrStr_ReturnValue_15;
	Parms.CallFunc_Concat_StrStr_ReturnValue_16 = CallFunc_Concat_StrStr_ReturnValue_16;
	Parms.CallFunc_Concat_StrStr_ReturnValue_17 = CallFunc_Concat_StrStr_ReturnValue_17;
	Parms.CallFunc_Concat_StrStr_ReturnValue_18 = CallFunc_Concat_StrStr_ReturnValue_18;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.CallFunc_Concat_StrStr_ReturnValue_19 = CallFunc_Concat_StrStr_ReturnValue_19;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CustomEvent_Channel_Name = K2Node_CustomEvent_Channel_Name;
	Parms.K2Node_CustomEvent_Channel_Credentials = K2Node_CustomEvent_Channel_Credentials;
	Parms.CallFunc_Login_ReturnValue = CallFunc_Login_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_JoinChannel_ReturnValue = CallFunc_JoinChannel_ReturnValue;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_CreateUser_ReturnValue = CallFunc_CreateUser_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Voice Login Complete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Succsessful                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEOS_Voice_Chat_Service_C::Voice_Login_Complete__DelegateSignature(bool Succsessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Voice Login Complete__DelegateSignature");

	Params::AEOS_Voice_Chat_Service_C_Voice_Login_Complete__DelegateSignature_Params Parms{};

	Parms.Succsessful = Succsessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Participants Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEOS_Voice_Chat_Service_C::Participants_Changed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Participants Changed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_Voice_Chat_Service.EOS_Voice_Chat_Service_C.Joined Channels Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEOS_Voice_Chat_Service_C::Joined_Channels_Changed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_Voice_Chat_Service_C", "Joined Channels Changed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


