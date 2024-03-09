#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MainMenu_GameInstance.BP_MainMenu_GameInstance_C
// (None)

class UClass* UBP_MainMenu_GameInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MainMenu_GameInstance_C");

	return Clss;
}


// BP_MainMenu_GameInstance_C BP_MainMenu_GameInstance.Default__BP_MainMenu_GameInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MainMenu_GameInstance_C* UBP_MainMenu_GameInstance_C::GetDefaultObj()
{
	static class UBP_MainMenu_GameInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MainMenu_GameInstance_C*>(UBP_MainMenu_GameInstance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MainMenu_GameInstance.BP_MainMenu_GameInstance_C.ExecuteUbergraph_BP_MainMenu_GameInstance
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MainMenu_GameInstance_C::ExecuteUbergraph_BP_MainMenu_GameInstance(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_GameInstance_C", "ExecuteUbergraph_BP_MainMenu_GameInstance");

	Params::UBP_MainMenu_GameInstance_C_ExecuteUbergraph_BP_MainMenu_GameInstance_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


