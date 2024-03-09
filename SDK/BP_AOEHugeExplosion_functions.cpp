#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AOEHugeExplosion.BP_AOEHugeExplosion_C
// (Actor)

class UClass* ABP_AOEHugeExplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AOEHugeExplosion_C");

	return Clss;
}


// BP_AOEHugeExplosion_C BP_AOEHugeExplosion.Default__BP_AOEHugeExplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AOEHugeExplosion_C* ABP_AOEHugeExplosion_C::GetDefaultObj()
{
	static class ABP_AOEHugeExplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AOEHugeExplosion_C*>(ABP_AOEHugeExplosion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AOEHugeExplosion.BP_AOEHugeExplosion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_AOEHugeExplosion_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AOEHugeExplosion_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AOEHugeExplosion.BP_AOEHugeExplosion_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AOEHugeExplosion_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AOEHugeExplosion_C", "ReceiveActorBeginOverlap");

	Params::ABP_AOEHugeExplosion_C_ReceiveActorBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AOEHugeExplosion.BP_AOEHugeExplosion_C.ExecuteUbergraph_BP_AOEHugeExplosion
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AOEHugeExplosion_C::ExecuteUbergraph_BP_AOEHugeExplosion(int32 EntryPoint, class AActor* K2Node_Event_OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AOEHugeExplosion_C", "ExecuteUbergraph_BP_AOEHugeExplosion");

	Params::ABP_AOEHugeExplosion_C_ExecuteUbergraph_BP_AOEHugeExplosion_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


