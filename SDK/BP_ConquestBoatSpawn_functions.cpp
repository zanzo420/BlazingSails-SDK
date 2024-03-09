#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ConquestBoatSpawn.BP_ConquestBoatSpawn_C
// (Actor)

class UClass* ABP_ConquestBoatSpawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ConquestBoatSpawn_C");

	return Clss;
}


// BP_ConquestBoatSpawn_C BP_ConquestBoatSpawn.Default__BP_ConquestBoatSpawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ConquestBoatSpawn_C* ABP_ConquestBoatSpawn_C::GetDefaultObj()
{
	static class ABP_ConquestBoatSpawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ConquestBoatSpawn_C*>(ABP_ConquestBoatSpawn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ConquestBoatSpawn.BP_ConquestBoatSpawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ConquestBoatSpawn_C::UserConstructionScript(bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConquestBoatSpawn_C", "UserConstructionScript");

	Params::ABP_ConquestBoatSpawn_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


