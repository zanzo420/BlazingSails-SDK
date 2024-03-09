#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionChangeMaxPreGame.BP_ActionChangeMaxPreGame_C
// (Actor)

class UClass* ABP_ActionChangeMaxPreGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionChangeMaxPreGame_C");

	return Clss;
}


// BP_ActionChangeMaxPreGame_C BP_ActionChangeMaxPreGame.Default__BP_ActionChangeMaxPreGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActionChangeMaxPreGame_C* ABP_ActionChangeMaxPreGame_C::GetDefaultObj()
{
	static class ABP_ActionChangeMaxPreGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActionChangeMaxPreGame_C*>(ABP_ActionChangeMaxPreGame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionChangeMaxPreGame.BP_ActionChangeMaxPreGame_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionChangeMaxPreGame_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionChangeMaxPreGame_C", "ReceiveTick");

	Params::ABP_ActionChangeMaxPreGame_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionChangeMaxPreGame.BP_ActionChangeMaxPreGame_C.ExecuteUbergraph_BP_ActionChangeMaxPreGame
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionChangeMaxPreGame_C::ExecuteUbergraph_BP_ActionChangeMaxPreGame(int32 EntryPoint, float K2Node_Event_DeltaSeconds, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionChangeMaxPreGame_C", "ExecuteUbergraph_BP_ActionChangeMaxPreGame");

	Params::ABP_ActionChangeMaxPreGame_C_ExecuteUbergraph_BP_ActionChangeMaxPreGame_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


