#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionSetNewServerName.BP_ActionSetNewServerName_C
// (Actor)

class UClass* ABP_ActionSetNewServerName_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionSetNewServerName_C");

	return Clss;
}


// BP_ActionSetNewServerName_C BP_ActionSetNewServerName.Default__BP_ActionSetNewServerName_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActionSetNewServerName_C* ABP_ActionSetNewServerName_C::GetDefaultObj()
{
	static class ABP_ActionSetNewServerName_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActionSetNewServerName_C*>(ABP_ActionSetNewServerName_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionSetNewServerName.BP_ActionSetNewServerName_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionSetNewServerName_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSetNewServerName_C", "ReceiveTick");

	Params::ABP_ActionSetNewServerName_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionSetNewServerName.BP_ActionSetNewServerName_C.ExecuteUbergraph_BP_ActionSetNewServerName
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void ABP_ActionSetNewServerName_C::ExecuteUbergraph_BP_ActionSetNewServerName(int32 EntryPoint, float K2Node_Event_DeltaSeconds, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSetNewServerName_C", "ExecuteUbergraph_BP_ActionSetNewServerName");

	Params::ABP_ActionSetNewServerName_C_ExecuteUbergraph_BP_ActionSetNewServerName_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


