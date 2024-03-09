#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Conquest_Player_State.Conquest_Player_State_C
// (Actor)

class UClass* AConquest_Player_State_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Conquest_Player_State_C");

	return Clss;
}


// Conquest_Player_State_C Conquest_Player_State.Default__Conquest_Player_State_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AConquest_Player_State_C* AConquest_Player_State_C::GetDefaultObj()
{
	static class AConquest_Player_State_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AConquest_Player_State_C*>(AConquest_Player_State_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Conquest_Player_State.Conquest_Player_State_C.S_Set Loadout
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Loadout                 Loadout                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AConquest_Player_State_C::S_Set_Loadout(const struct FST_Loadout& Loadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Conquest_Player_State_C", "S_Set Loadout");

	Params::AConquest_Player_State_C_S_Set_Loadout_Params Parms{};

	Parms.Loadout = Loadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Conquest_Player_State.Conquest_Player_State_C.ExecuteUbergraph_Conquest_Player_State
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Loadout                 K2Node_CustomEvent_Loadout                                       (HasGetValueTypeHash)

void AConquest_Player_State_C::ExecuteUbergraph_Conquest_Player_State(int32 EntryPoint, const struct FST_Loadout& K2Node_CustomEvent_Loadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Conquest_Player_State_C", "ExecuteUbergraph_Conquest_Player_State");

	Params::AConquest_Player_State_C_ExecuteUbergraph_Conquest_Player_State_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loadout = K2Node_CustomEvent_Loadout;

	UObject::ProcessEvent(Func, &Parms);

}

}


