#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileCannonball.BP_ProjectileCannonball_C
// (Actor)

class UClass* ABP_ProjectileCannonball_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileCannonball_C");

	return Clss;
}


// BP_ProjectileCannonball_C BP_ProjectileCannonball.Default__BP_ProjectileCannonball_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileCannonball_C* ABP_ProjectileCannonball_C::GetDefaultObj()
{
	static class ABP_ProjectileCannonball_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileCannonball_C*>(ABP_ProjectileCannonball_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ProjectileCannonball.BP_ProjectileCannonball_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ProjectileCannonball_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileCannonball_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileCannonball.BP_ProjectileCannonball_C.ExecuteUbergraph_BP_ProjectileCannonball
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileCannonball_C::ExecuteUbergraph_BP_ProjectileCannonball(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileCannonball_C", "ExecuteUbergraph_BP_ProjectileCannonball");

	Params::ABP_ProjectileCannonball_C_ExecuteUbergraph_BP_ProjectileCannonball_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


