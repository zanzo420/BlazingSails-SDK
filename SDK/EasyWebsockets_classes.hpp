#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x88 - 0x28)
// Class EasyWebsockets.WebSocket
class UWebSocket : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnWebSocketConnected;                              // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnWebSocketConnectionError;                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnWebSocketClosed;                                 // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnWebSocketMessageReceived;                        // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnWebSocketMessageSent;                            // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_ECE[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWebSocket* GetDefaultObj();

	void SendMessage(const class FString& Message);
	void OnWebSocketMessageSent_Internal(const class FString& Message);
	void OnWebSocketMessageReceived_Internal(const class FString& Message);
	void OnWebSocketConnectionError_Internal(const class FString& Error);
	void OnWebSocketConnected_Internal();
	void OnWebSocketClosed_Internal(int32 StatusCode, const class FString& Reason, bool bWasClean);
	bool IsConnected();
	void Connect();
	void Close(int32 StatusCode, const class FString& Reason);
};

// 0x0 (0x28 - 0x28)
// Class EasyWebsockets.WebSocketFunctionLibrary
class UWebSocketFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UWebSocketFunctionLibrary* GetDefaultObj();

	class UWebSocket* CreateWebSocketWithHeaders(const class FString& ServerUrl, TMap<class FString, class FString> UpgradeHeaders, const class FString& ServerProtocol);
	class UWebSocket* CreateWebSocket(const class FString& ServerUrl, const class FString& ServerProtocol);
};

}


