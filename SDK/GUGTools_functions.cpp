#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GUGTools.GenericBFL
// (None)

class UClass* UGenericBFL::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericBFL");

	return Clss;
}


// GenericBFL GUGTools.Default__GenericBFL
// (Public, ClassDefaultObject, ArchetypeObject)

class UGenericBFL* UGenericBFL::GetDefaultObj()
{
	static class UGenericBFL* Default = nullptr;

	if (!Default)
		Default = static_cast<UGenericBFL*>(UGenericBFL::StaticClass()->DefaultObject);

	return Default;
}


// Function GUGTools.GenericBFL.GUG_GetEnvironmentVariable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UGenericBFL::GUG_GetEnvironmentVariable(const class FString& VariableName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericBFL", "GUG_GetEnvironmentVariable");

	Params::UGenericBFL_GUG_GetEnvironmentVariable_Params Parms{};

	Parms.VariableName = VariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GUGTools.GenericBFL.GUG_GetDayOfWeek
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime                   InDateTime                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 UGenericBFL::GUG_GetDayOfWeek(struct FDateTime& InDateTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericBFL", "GUG_GetDayOfWeek");

	Params::UGenericBFL_GUG_GetDayOfWeek_Params Parms{};

	Parms.InDateTime = InDateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GUGTools.GenericBFL.GUG_GetCollisionFaceIndexLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMesh*                 StaticMesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FaceIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UGenericBFL::GUG_GetCollisionFaceIndexLocation(class AActor* InActor, class UStaticMesh* StaticMesh, int32 FaceIndex, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericBFL", "GUG_GetCollisionFaceIndexLocation");

	Params::UGenericBFL_GUG_GetCollisionFaceIndexLocation_Params Parms{};

	Parms.InActor = InActor;
	Parms.StaticMesh = StaticMesh;
	Parms.FaceIndex = FaceIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}


// Function GUGTools.GenericBFL.GUG_ExecConsoleCommandOnWorld
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      InWorld                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Cmd                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGenericBFL::GUG_ExecConsoleCommandOnWorld(class UWorld* InWorld, const class FString& Cmd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericBFL", "GUG_ExecConsoleCommandOnWorld");

	Params::UGenericBFL_GUG_ExecConsoleCommandOnWorld_Params Parms{};

	Parms.InWorld = InWorld;
	Parms.Cmd = Cmd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GUGTools.GenericBFL.GUG_ExecConsoleCommandOnActorWorld
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Cmd                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGenericBFL::GUG_ExecConsoleCommandOnActorWorld(class AActor* InActor, const class FString& Cmd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericBFL", "GUG_ExecConsoleCommandOnActorWorld");

	Params::UGenericBFL_GUG_ExecConsoleCommandOnActorWorld_Params Parms{};

	Parms.InActor = InActor;
	Parms.Cmd = Cmd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GUGTools.GenericBFL.GUG_ExecConsoleCommand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Cmd                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGenericBFL::GUG_ExecConsoleCommand(const class FString& Cmd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericBFL", "GUG_ExecConsoleCommand");

	Params::UGenericBFL_GUG_ExecConsoleCommand_Params Parms{};

	Parms.Cmd = Cmd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


