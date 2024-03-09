#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionStartGameFromClient.BP_ActionStartGameFromClient_C
// (Actor)

class UClass* ABP_ActionStartGameFromClient_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionStartGameFromClient_C");

	return Clss;
}


// BP_ActionStartGameFromClient_C BP_ActionStartGameFromClient.Default__BP_ActionStartGameFromClient_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActionStartGameFromClient_C* ABP_ActionStartGameFromClient_C::GetDefaultObj()
{
	static class ABP_ActionStartGameFromClient_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActionStartGameFromClient_C*>(ABP_ActionStartGameFromClient_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionStartGameFromClient.BP_ActionStartGameFromClient_C.StartAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionStartGameFromClient_C::StartAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionStartGameFromClient_C", "StartAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionStartGameFromClient.BP_ActionStartGameFromClient_C.ExecuteUbergraph_BP_ActionStartGameFromClient
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_GameMode_C*           CallFunc_CurrentGameMode_As_Alpha_Game_Mode                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionStartGameFromClient_C::ExecuteUbergraph_BP_ActionStartGameFromClient(int32 EntryPoint, class AAlpha_GameMode_C* CallFunc_CurrentGameMode_As_Alpha_Game_Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionStartGameFromClient_C", "ExecuteUbergraph_BP_ActionStartGameFromClient");

	Params::ABP_ActionStartGameFromClient_C_ExecuteUbergraph_BP_ActionStartGameFromClient_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CurrentGameMode_As_Alpha_Game_Mode = CallFunc_CurrentGameMode_As_Alpha_Game_Mode;

	UObject::ProcessEvent(Func, &Parms);

}

}


