#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GunGame_Alpha_GameState.GunGame_Alpha_GameState_C
// (Actor)

class UClass* AGunGame_Alpha_GameState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GunGame_Alpha_GameState_C");

	return Clss;
}


// GunGame_Alpha_GameState_C GunGame_Alpha_GameState.Default__GunGame_Alpha_GameState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGunGame_Alpha_GameState_C* AGunGame_Alpha_GameState_C::GetDefaultObj()
{
	static class AGunGame_Alpha_GameState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGunGame_Alpha_GameState_C*>(AGunGame_Alpha_GameState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GunGame_Alpha_GameState.GunGame_Alpha_GameState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGunGame_Alpha_GameState_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GunGame_Alpha_GameState_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GunGame_Alpha_GameState.GunGame_Alpha_GameState_C.ExecuteUbergraph_GunGame_Alpha_GameState
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          CallFunc_Current_Game_BP_Instance_AsBP_Game_Instance             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGunGame_Alpha_GameState_C::ExecuteUbergraph_GunGame_Alpha_GameState(int32 EntryPoint, class UBP_GameInstance_C* CallFunc_Current_Game_BP_Instance_AsBP_Game_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GunGame_Alpha_GameState_C", "ExecuteUbergraph_GunGame_Alpha_GameState");

	Params::AGunGame_Alpha_GameState_C_ExecuteUbergraph_GunGame_Alpha_GameState_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Current_Game_BP_Instance_AsBP_Game_Instance = CallFunc_Current_Game_BP_Instance_AsBP_Game_Instance;

	UObject::ProcessEvent(Func, &Parms);

}

}


