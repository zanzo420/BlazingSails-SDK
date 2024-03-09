#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Practice_Target.BP_Practice_Target_C
// (Actor)

class UClass* ABP_Practice_Target_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Practice_Target_C");

	return Clss;
}


// BP_Practice_Target_C BP_Practice_Target.Default__BP_Practice_Target_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Practice_Target_C* ABP_Practice_Target_C::GetDefaultObj()
{
	static class ABP_Practice_Target_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Practice_Target_C*>(ABP_Practice_Target_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Practice_Target.BP_Practice_Target_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Practice_Target_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Practice_Target_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


