#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AOEBowBarrelExplosion.BP_AOEBowBarrelExplosion_C
// (Actor)

class UClass* ABP_AOEBowBarrelExplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AOEBowBarrelExplosion_C");

	return Clss;
}


// BP_AOEBowBarrelExplosion_C BP_AOEBowBarrelExplosion.Default__BP_AOEBowBarrelExplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AOEBowBarrelExplosion_C* ABP_AOEBowBarrelExplosion_C::GetDefaultObj()
{
	static class ABP_AOEBowBarrelExplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AOEBowBarrelExplosion_C*>(ABP_AOEBowBarrelExplosion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AOEBowBarrelExplosion.BP_AOEBowBarrelExplosion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_AOEBowBarrelExplosion_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AOEBowBarrelExplosion_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AOEBowBarrelExplosion.BP_AOEBowBarrelExplosion_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AOEBowBarrelExplosion_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AOEBowBarrelExplosion_C", "ReceiveActorBeginOverlap");

	Params::ABP_AOEBowBarrelExplosion_C_ReceiveActorBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AOEBowBarrelExplosion.BP_AOEBowBarrelExplosion_C.ExecuteUbergraph_BP_AOEBowBarrelExplosion
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AOEBowBarrelExplosion_C::ExecuteUbergraph_BP_AOEBowBarrelExplosion(int32 EntryPoint, class AActor* K2Node_Event_OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AOEBowBarrelExplosion_C", "ExecuteUbergraph_BP_AOEBowBarrelExplosion");

	Params::ABP_AOEBowBarrelExplosion_C_ExecuteUbergraph_BP_AOEBowBarrelExplosion_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


