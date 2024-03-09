#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EOS_FriendReference.EOS_FriendReference_C
// (None)

class UClass* UEOS_FriendReference_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOS_FriendReference_C");

	return Clss;
}


// EOS_FriendReference_C EOS_FriendReference.Default__EOS_FriendReference_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEOS_FriendReference_C* UEOS_FriendReference_C::GetDefaultObj()
{
	static class UEOS_FriendReference_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOS_FriendReference_C*>(UEOS_FriendReference_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EOS_FriendReference.EOS_FriendReference_C.Get Platform
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Platform_Name                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUserAttribute_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetUserAttribute_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)

void UEOS_FriendReference_C::Get_Platform(class FString* Platform_Name, bool CallFunc_GetUserAttribute_Found, const class FString& CallFunc_GetUserAttribute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_FriendReference_C", "Get Platform");

	Params::UEOS_FriendReference_C_Get_Platform_Params Parms{};

	Parms.CallFunc_GetUserAttribute_Found = CallFunc_GetUserAttribute_Found;
	Parms.CallFunc_GetUserAttribute_ReturnValue = CallFunc_GetUserAttribute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Platform_Name != nullptr)
		*Platform_Name = std::move(Parms.Platform_Name);

}


// Function EOS_FriendReference.EOS_FriendReference_C.Get Unique Net Id
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUserId_ReturnValue                                   (HasGetValueTypeHash)

struct FUniqueNetIdRepl UEOS_FriendReference_C::Get_Unique_Net_Id(const struct FUniqueNetIdRepl& CallFunc_GetUserId_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_FriendReference_C", "Get Unique Net Id");

	Params::UEOS_FriendReference_C_Get_Unique_Net_Id_Params Parms{};

	Parms.CallFunc_GetUserId_ReturnValue = CallFunc_GetUserId_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EOS_FriendReference.EOS_FriendReference_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEOS_FriendReference_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_FriendReference_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EOS_FriendReference.EOS_FriendReference_C.ExecuteUbergraph_EOS_FriendReference
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Platform_Platform_Name                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUserAttribute_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetUserAttribute_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)

void UEOS_FriendReference_C::ExecuteUbergraph_EOS_FriendReference(int32 EntryPoint, const class FString& CallFunc_Get_Platform_Platform_Name, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_GetUserAttribute_Found, const class FString& CallFunc_GetUserAttribute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOS_FriendReference_C", "ExecuteUbergraph_EOS_FriendReference");

	Params::UEOS_FriendReference_C_ExecuteUbergraph_EOS_FriendReference_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Get_Platform_Platform_Name = CallFunc_Get_Platform_Platform_Name;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetUserAttribute_Found = CallFunc_GetUserAttribute_Found;
	Parms.CallFunc_GetUserAttribute_ReturnValue = CallFunc_GetUserAttribute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


