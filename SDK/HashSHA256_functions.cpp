#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HashSHA256.HashSHA256BPLibrary
// (None)

class UClass* UHashSHA256BPLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HashSHA256BPLibrary");

	return Clss;
}


// HashSHA256BPLibrary HashSHA256.Default__HashSHA256BPLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UHashSHA256BPLibrary* UHashSHA256BPLibrary::GetDefaultObj()
{
	static class UHashSHA256BPLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UHashSHA256BPLibrary*>(UHashSHA256BPLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function HashSHA256.HashSHA256BPLibrary.GetHash
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSHA256Hash                 Sha256                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UHashSHA256BPLibrary::GetHash(struct FSHA256Hash& Sha256)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HashSHA256BPLibrary", "GetHash");

	Params::UHashSHA256BPLibrary_GetHash_Params Parms{};

	Parms.Sha256 = Sha256;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HashSHA256.HashSHA256BPLibrary.FromString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSHA256Hash                 Sha256                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Str                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHashSHA256BPLibrary::FromString(struct FSHA256Hash& Sha256, const class FString& Str)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HashSHA256BPLibrary", "FromString");

	Params::UHashSHA256BPLibrary_FromString_Params Parms{};

	Parms.Sha256 = Sha256;
	Parms.Str = Str;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HashSHA256.HashSHA256BPLibrary.FromFile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSHA256Hash                 Sha256                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHashSHA256BPLibrary::FromFile(struct FSHA256Hash& Sha256, const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HashSHA256BPLibrary", "FromFile");

	Params::UHashSHA256BPLibrary_FromFile_Params Parms{};

	Parms.Sha256 = Sha256;
	Parms.Filename = Filename;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HashSHA256.HashSHA256BPLibrary.FromArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSHA256Hash                 Sha256                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<uint8>                      Arr                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UHashSHA256BPLibrary::FromArray(struct FSHA256Hash& Sha256, TArray<uint8>& Arr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HashSHA256BPLibrary", "FromArray");

	Params::UHashSHA256BPLibrary_FromArray_Params Parms{};

	Parms.Sha256 = Sha256;
	Parms.Arr = Arr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


