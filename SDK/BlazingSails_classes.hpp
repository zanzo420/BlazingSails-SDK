#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class BlazingSails.CppFunctionLibrary
class UCppFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCppFunctionLibrary* GetDefaultObj();

	void SetRenderInDepthPass(class UPrimitiveComponent* Component, bool bValue);
	class FString GetAppVersion();
};

// 0x0 (0x570 - 0x570)
// Class BlazingSails.CustomController
class ACustomController : public APlayerController
{
public:

	static class UClass* StaticClass();
	static class ACustomController* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class BlazingSails.HardwareInfoUtility
class UHardwareInfoUtility : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UHardwareInfoUtility* GetDefaultObj();

	bool WriteToRegistry(const class FString& Key, const class FString& Value);
	class FString ReadFromRegistry(const class FString& Key);
	class FString GetDeviceId();
};

// 0x58 (0x108 - 0xB0)
// Class BlazingSails.OfferChecker
class UOfferChecker : public UActorComponent
{
public:
	uint8                                        Pad_1D16[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOfferChecker* GetDefaultObj();

	TArray<class FString> ReadOwnershipData();
	void QueryOwnershipFromString(const class FString& EpicAccountId, TArray<class FString>& OfferIds);
	bool HasOwnershipData();
};

}


