#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_COM_GameInstance.BP_COM_GameInstance_C
// (None)

class UClass* UBP_COM_GameInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_COM_GameInstance_C");

	return Clss;
}


// BP_COM_GameInstance_C BP_COM_GameInstance.Default__BP_COM_GameInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_COM_GameInstance_C* UBP_COM_GameInstance_C::GetDefaultObj()
{
	static class UBP_COM_GameInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_COM_GameInstance_C*>(UBP_COM_GameInstance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_COM_GameInstance.BP_COM_GameInstance_C.COM_Get Beacon Client Player State
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:

void UBP_COM_GameInstance_C::COM_Get_Beacon_Client_Player_State()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_COM_GameInstance_C", "COM_Get Beacon Client Player State");



	UObject::ProcessEvent(Func, nullptr);

}

}


