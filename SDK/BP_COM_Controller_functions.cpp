#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_COM_Controller.BP_COM_Controller_C
// (Actor, PlayerController)

class UClass* ABP_COM_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_COM_Controller_C");

	return Clss;
}


// BP_COM_Controller_C BP_COM_Controller.Default__BP_COM_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_COM_Controller_C* ABP_COM_Controller_C::GetDefaultObj()
{
	static class ABP_COM_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_COM_Controller_C*>(ABP_COM_Controller_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_COM_Controller.BP_COM_Controller_C.COM_Get Unique Net ID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            Unique_Net_ID                                                    (Parm, OutParm, HasGetValueTypeHash)

void ABP_COM_Controller_C::COM_Get_Unique_Net_ID(struct FUniqueNetIdRepl* Unique_Net_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_COM_Controller_C", "COM_Get Unique Net ID");

	Params::ABP_COM_Controller_C_COM_Get_Unique_Net_ID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Unique_Net_ID != nullptr)
		*Unique_Net_ID = std::move(Parms.Unique_Net_ID);

}

}


