#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionSpectatorCam.BP_ActionSpectatorCam_C
// (Actor)

class UClass* ABP_ActionSpectatorCam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionSpectatorCam_C");

	return Clss;
}


// BP_ActionSpectatorCam_C BP_ActionSpectatorCam.Default__BP_ActionSpectatorCam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActionSpectatorCam_C* ABP_ActionSpectatorCam_C::GetDefaultObj()
{
	static class ABP_ActionSpectatorCam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActionSpectatorCam_C*>(ABP_ActionSpectatorCam_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionSpectatorCam.BP_ActionSpectatorCam_C.StartAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionSpectatorCam_C::StartAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSpectatorCam_C", "StartAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionSpectatorCam.BP_ActionSpectatorCam_C.ExecuteUbergraph_BP_ActionSpectatorCam
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionSpectatorCam_C::ExecuteUbergraph_BP_ActionSpectatorCam(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSpectatorCam_C", "ExecuteUbergraph_BP_ActionSpectatorCam");

	Params::ABP_ActionSpectatorCam_C_ExecuteUbergraph_BP_ActionSpectatorCam_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


