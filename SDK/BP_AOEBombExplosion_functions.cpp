#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AOEBombExplosion.BP_AOEBombExplosion_C
// (Actor)

class UClass* ABP_AOEBombExplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AOEBombExplosion_C");

	return Clss;
}


// BP_AOEBombExplosion_C BP_AOEBombExplosion.Default__BP_AOEBombExplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AOEBombExplosion_C* ABP_AOEBombExplosion_C::GetDefaultObj()
{
	static class ABP_AOEBombExplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AOEBombExplosion_C*>(ABP_AOEBombExplosion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AOEBombExplosion.BP_AOEBombExplosion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_AOEBombExplosion_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AOEBombExplosion_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AOEBombExplosion.BP_AOEBombExplosion_C.ExecuteUbergraph_BP_AOEBombExplosion
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AOEBombExplosion_C::ExecuteUbergraph_BP_AOEBombExplosion(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AOEBombExplosion_C", "ExecuteUbergraph_BP_AOEBombExplosion");

	Params::ABP_AOEBombExplosion_C_ExecuteUbergraph_BP_AOEBombExplosion_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


