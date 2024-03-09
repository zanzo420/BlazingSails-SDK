#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MainMenuGameMode.BP_MainMenuGameMode_C
// (Actor)

class UClass* ABP_MainMenuGameMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MainMenuGameMode_C");

	return Clss;
}


// BP_MainMenuGameMode_C BP_MainMenuGameMode.Default__BP_MainMenuGameMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MainMenuGameMode_C* ABP_MainMenuGameMode_C::GetDefaultObj()
{
	static class ABP_MainMenuGameMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MainMenuGameMode_C*>(ABP_MainMenuGameMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MainMenuGameMode_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenuGameMode_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ExecuteUbergraph_BP_MainMenuGameMode
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainMenuGameMode_C::ExecuteUbergraph_BP_MainMenuGameMode(int32 EntryPoint, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenuGameMode_C", "ExecuteUbergraph_BP_MainMenuGameMode");

	Params::ABP_MainMenuGameMode_C_ExecuteUbergraph_BP_MainMenuGameMode_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance;

	UObject::ProcessEvent(Func, &Parms);

}

}


