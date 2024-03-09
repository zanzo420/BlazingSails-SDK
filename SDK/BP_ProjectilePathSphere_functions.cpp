#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectilePathSphere.BP_ProjectilePathSphere_C
// (Actor)

class UClass* ABP_ProjectilePathSphere_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectilePathSphere_C");

	return Clss;
}


// BP_ProjectilePathSphere_C BP_ProjectilePathSphere.Default__BP_ProjectilePathSphere_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectilePathSphere_C* ABP_ProjectilePathSphere_C::GetDefaultObj()
{
	static class ABP_ProjectilePathSphere_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectilePathSphere_C*>(ABP_ProjectilePathSphere_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ProjectilePathSphere.BP_ProjectilePathSphere_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ProjectilePathSphere_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectilePathSphere_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectilePathSphere.BP_ProjectilePathSphere_C.ExecuteUbergraph_BP_ProjectilePathSphere
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectilePathSphere_C::ExecuteUbergraph_BP_ProjectilePathSphere(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectilePathSphere_C", "ExecuteUbergraph_BP_ProjectilePathSphere");

	Params::ABP_ProjectilePathSphere_C_ExecuteUbergraph_BP_ProjectilePathSphere_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


