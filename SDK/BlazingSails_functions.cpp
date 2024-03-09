#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class BlazingSails.CppFunctionLibrary
// (None)

class UClass* UCppFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CppFunctionLibrary");

	return Clss;
}


// CppFunctionLibrary BlazingSails.Default__CppFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UCppFunctionLibrary* UCppFunctionLibrary::GetDefaultObj()
{
	static class UCppFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UCppFunctionLibrary*>(UCppFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function BlazingSails.CppFunctionLibrary.SetRenderInDepthPass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         Component                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bValue                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCppFunctionLibrary::SetRenderInDepthPass(class UPrimitiveComponent* Component, bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CppFunctionLibrary", "SetRenderInDepthPass");

	Params::UCppFunctionLibrary_SetRenderInDepthPass_Params Parms{};

	Parms.Component = Component;
	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlazingSails.CppFunctionLibrary.GetAppVersion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UCppFunctionLibrary::GetAppVersion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CppFunctionLibrary", "GetAppVersion");

	Params::UCppFunctionLibrary_GetAppVersion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class BlazingSails.CustomController
// (Actor, PlayerController)

class UClass* ACustomController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomController");

	return Clss;
}


// CustomController BlazingSails.Default__CustomController
// (Public, ClassDefaultObject, ArchetypeObject)

class ACustomController* ACustomController::GetDefaultObj()
{
	static class ACustomController* Default = nullptr;

	if (!Default)
		Default = static_cast<ACustomController*>(ACustomController::StaticClass()->DefaultObject);

	return Default;
}


// Class BlazingSails.HardwareInfoUtility
// (None)

class UClass* UHardwareInfoUtility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HardwareInfoUtility");

	return Clss;
}


// HardwareInfoUtility BlazingSails.Default__HardwareInfoUtility
// (Public, ClassDefaultObject, ArchetypeObject)

class UHardwareInfoUtility* UHardwareInfoUtility::GetDefaultObj()
{
	static class UHardwareInfoUtility* Default = nullptr;

	if (!Default)
		Default = static_cast<UHardwareInfoUtility*>(UHardwareInfoUtility::StaticClass()->DefaultObject);

	return Default;
}


// Function BlazingSails.HardwareInfoUtility.WriteToRegistry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHardwareInfoUtility::WriteToRegistry(const class FString& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HardwareInfoUtility", "WriteToRegistry");

	Params::UHardwareInfoUtility_WriteToRegistry_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlazingSails.HardwareInfoUtility.ReadFromRegistry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UHardwareInfoUtility::ReadFromRegistry(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HardwareInfoUtility", "ReadFromRegistry");

	Params::UHardwareInfoUtility_ReadFromRegistry_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlazingSails.HardwareInfoUtility.GetDeviceId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UHardwareInfoUtility::GetDeviceId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HardwareInfoUtility", "GetDeviceId");

	Params::UHardwareInfoUtility_GetDeviceId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class BlazingSails.OfferChecker
// (None)

class UClass* UOfferChecker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OfferChecker");

	return Clss;
}


// OfferChecker BlazingSails.Default__OfferChecker
// (Public, ClassDefaultObject, ArchetypeObject)

class UOfferChecker* UOfferChecker::GetDefaultObj()
{
	static class UOfferChecker* Default = nullptr;

	if (!Default)
		Default = static_cast<UOfferChecker*>(UOfferChecker::StaticClass()->DefaultObject);

	return Default;
}


// Function BlazingSails.OfferChecker.ReadOwnershipData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UOfferChecker::ReadOwnershipData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OfferChecker", "ReadOwnershipData");

	Params::UOfferChecker_ReadOwnershipData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BlazingSails.OfferChecker.QueryOwnershipFromString
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      EpicAccountId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              OfferIds                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UOfferChecker::QueryOwnershipFromString(const class FString& EpicAccountId, TArray<class FString>& OfferIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OfferChecker", "QueryOwnershipFromString");

	Params::UOfferChecker_QueryOwnershipFromString_Params Parms{};

	Parms.EpicAccountId = EpicAccountId;
	Parms.OfferIds = OfferIds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlazingSails.OfferChecker.HasOwnershipData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOfferChecker::HasOwnershipData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OfferChecker", "HasOwnershipData");

	Params::UOfferChecker_HasOwnershipData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


