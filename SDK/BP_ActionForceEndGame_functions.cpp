#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionForceEndGame.BP_ActionForceEndGame_C
// (Actor)

class UClass* ABP_ActionForceEndGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionForceEndGame_C");

	return Clss;
}


// BP_ActionForceEndGame_C BP_ActionForceEndGame.Default__BP_ActionForceEndGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActionForceEndGame_C* ABP_ActionForceEndGame_C::GetDefaultObj()
{
	static class ABP_ActionForceEndGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActionForceEndGame_C*>(ABP_ActionForceEndGame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionForceEndGame.BP_ActionForceEndGame_C.StartAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionForceEndGame_C::StartAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionForceEndGame_C", "StartAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionForceEndGame.BP_ActionForceEndGame_C.ExecuteUbergraph_BP_ActionForceEndGame
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_GameMode_C*           CallFunc_CurrentGameMode_As_Alpha_Game_Mode                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionForceEndGame_C::ExecuteUbergraph_BP_ActionForceEndGame(int32 EntryPoint, class AAlpha_GameMode_C* CallFunc_CurrentGameMode_As_Alpha_Game_Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionForceEndGame_C", "ExecuteUbergraph_BP_ActionForceEndGame");

	Params::ABP_ActionForceEndGame_C_ExecuteUbergraph_BP_ActionForceEndGame_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CurrentGameMode_As_Alpha_Game_Mode = CallFunc_CurrentGameMode_As_Alpha_Game_Mode;

	UObject::ProcessEvent(Func, &Parms);

}

}


