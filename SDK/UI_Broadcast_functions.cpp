#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Broadcast.UI_Broadcast_C
// (None)

class UClass* UUI_Broadcast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Broadcast_C");

	return Clss;
}


// UI_Broadcast_C UI_Broadcast.Default__UI_Broadcast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Broadcast_C* UUI_Broadcast_C::GetDefaultObj()
{
	static class UUI_Broadcast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Broadcast_C*>(UUI_Broadcast_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Broadcast.UI_Broadcast_C.SetMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               NotificationSound                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Broadcast_C::SetMessage(class FText Message, bool NotificationSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Broadcast_C", "SetMessage");

	Params::UUI_Broadcast_C_SetMessage_Params Parms{};

	Parms.Message = Message;
	Parms.NotificationSound = NotificationSound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Broadcast.UI_Broadcast_C.ExecuteUbergraph_UI_Broadcast
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Message                                       (None)
// bool                               K2Node_CustomEvent_NotificationSound                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UUI_Broadcast_C::ExecuteUbergraph_UI_Broadcast(int32 EntryPoint, class FText K2Node_CustomEvent_Message, bool K2Node_CustomEvent_NotificationSound, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Broadcast_C", "ExecuteUbergraph_UI_Broadcast");

	Params::UUI_Broadcast_C_ExecuteUbergraph_UI_Broadcast_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Message = K2Node_CustomEvent_Message;
	Parms.K2Node_CustomEvent_NotificationSound = K2Node_CustomEvent_NotificationSound;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


