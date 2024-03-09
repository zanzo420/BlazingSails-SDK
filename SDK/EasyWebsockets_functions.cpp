#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EasyWebsockets.WebSocket
// (None)

class UClass* UWebSocket::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebSocket");

	return Clss;
}


// WebSocket EasyWebsockets.Default__WebSocket
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebSocket* UWebSocket::GetDefaultObj()
{
	static class UWebSocket* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebSocket*>(UWebSocket::StaticClass()->DefaultObject);

	return Default;
}


// Function EasyWebsockets.WebSocket.SendMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSocket::SendMessage(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSocket", "SendMessage");

	Params::UWebSocket_SendMessage_Params Parms{};

	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EasyWebsockets.WebSocket.OnWebSocketMessageSent_Internal
// (Final, Native, Private)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSocket::OnWebSocketMessageSent_Internal(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSocket", "OnWebSocketMessageSent_Internal");

	Params::UWebSocket_OnWebSocketMessageSent_Internal_Params Parms{};

	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EasyWebsockets.WebSocket.OnWebSocketMessageReceived_Internal
// (Final, Native, Private)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSocket::OnWebSocketMessageReceived_Internal(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSocket", "OnWebSocketMessageReceived_Internal");

	Params::UWebSocket_OnWebSocketMessageReceived_Internal_Params Parms{};

	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EasyWebsockets.WebSocket.OnWebSocketConnectionError_Internal
// (Final, Native, Private)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSocket::OnWebSocketConnectionError_Internal(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSocket", "OnWebSocketConnectionError_Internal");

	Params::UWebSocket_OnWebSocketConnectionError_Internal_Params Parms{};

	Parms.Error = Error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EasyWebsockets.WebSocket.OnWebSocketConnected_Internal
// (Final, Native, Private)
// Parameters:

void UWebSocket::OnWebSocketConnected_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSocket", "OnWebSocketConnected_Internal");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function EasyWebsockets.WebSocket.OnWebSocketClosed_Internal
// (Final, Native, Private)
// Parameters:
// int32                              StatusCode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Reason                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasClean                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSocket::OnWebSocketClosed_Internal(int32 StatusCode, const class FString& Reason, bool bWasClean)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSocket", "OnWebSocketClosed_Internal");

	Params::UWebSocket_OnWebSocketClosed_Internal_Params Parms{};

	Parms.StatusCode = StatusCode;
	Parms.Reason = Reason;
	Parms.bWasClean = bWasClean;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EasyWebsockets.WebSocket.IsConnected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWebSocket::IsConnected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSocket", "IsConnected");

	Params::UWebSocket_IsConnected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EasyWebsockets.WebSocket.Connect
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWebSocket::Connect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSocket", "Connect");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function EasyWebsockets.WebSocket.Close
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              StatusCode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Reason                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSocket::Close(int32 StatusCode, const class FString& Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSocket", "Close");

	Params::UWebSocket_Close_Params Parms{};

	Parms.StatusCode = StatusCode;
	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class EasyWebsockets.WebSocketFunctionLibrary
// (None)

class UClass* UWebSocketFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebSocketFunctionLibrary");

	return Clss;
}


// WebSocketFunctionLibrary EasyWebsockets.Default__WebSocketFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebSocketFunctionLibrary* UWebSocketFunctionLibrary::GetDefaultObj()
{
	static class UWebSocketFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebSocketFunctionLibrary*>(UWebSocketFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function EasyWebsockets.WebSocketFunctionLibrary.CreateWebSocketWithHeaders
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ServerUrl                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, class FString> UpgradeHeaders                                                   (Parm, NativeAccessSpecifierPublic)
// class FString                      ServerProtocol                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWebSocket*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWebSocket* UWebSocketFunctionLibrary::CreateWebSocketWithHeaders(const class FString& ServerUrl, TMap<class FString, class FString> UpgradeHeaders, const class FString& ServerProtocol)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSocketFunctionLibrary", "CreateWebSocketWithHeaders");

	Params::UWebSocketFunctionLibrary_CreateWebSocketWithHeaders_Params Parms{};

	Parms.ServerUrl = ServerUrl;
	Parms.UpgradeHeaders = UpgradeHeaders;
	Parms.ServerProtocol = ServerProtocol;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EasyWebsockets.WebSocketFunctionLibrary.CreateWebSocket
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ServerUrl                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ServerProtocol                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWebSocket*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWebSocket* UWebSocketFunctionLibrary::CreateWebSocket(const class FString& ServerUrl, const class FString& ServerProtocol)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSocketFunctionLibrary", "CreateWebSocket");

	Params::UWebSocketFunctionLibrary_CreateWebSocket_Params Parms{};

	Parms.ServerUrl = ServerUrl;
	Parms.ServerProtocol = ServerProtocol;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


