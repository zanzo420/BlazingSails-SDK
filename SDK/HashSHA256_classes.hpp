#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class HashSHA256.HashSHA256BPLibrary
class UHashSHA256BPLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UHashSHA256BPLibrary* GetDefaultObj();

	class FString GetHash(struct FSHA256Hash& Sha256);
	void FromString(struct FSHA256Hash& Sha256, const class FString& Str);
	void FromFile(struct FSHA256Hash& Sha256, const class FString& Filename);
	void FromArray(struct FSHA256Hash& Sha256, TArray<uint8>& Arr);
};

}


