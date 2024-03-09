#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_JunkDamagePoints.BP_JunkDamagePoints_C
// (Actor)

class UClass* ABP_JunkDamagePoints_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_JunkDamagePoints_C");

	return Clss;
}


// BP_JunkDamagePoints_C BP_JunkDamagePoints.Default__BP_JunkDamagePoints_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_JunkDamagePoints_C* ABP_JunkDamagePoints_C::GetDefaultObj()
{
	static class ABP_JunkDamagePoints_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_JunkDamagePoints_C*>(ABP_JunkDamagePoints_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_JunkDamagePoints.BP_JunkDamagePoints_C.DestroyUnwantedDamagePoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*        DamagePointRef                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_JunkDamagePoints_C::DestroyUnwantedDamagePoint(class UChildActorComponent* DamagePointRef, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_JunkDamagePoints_C", "DestroyUnwantedDamagePoint");

	Params::ABP_JunkDamagePoints_C_DestroyUnwantedDamagePoint_Params Parms{};

	Parms.DamagePointRef = DamagePointRef;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_JunkDamagePoints.BP_JunkDamagePoints_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_JunkDamagePoints_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_JunkDamagePoints_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_JunkDamagePoints.BP_JunkDamagePoints_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_JunkDamagePoints_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_JunkDamagePoints_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_JunkDamagePoints.BP_JunkDamagePoints_C.PrepPoints
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_JunkDamagePoints_C::PrepPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_JunkDamagePoints_C", "PrepPoints");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_JunkDamagePoints.BP_JunkDamagePoints_C.ExecuteUbergraph_BP_JunkDamagePoints
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_JunkDamagePoints_C::ExecuteUbergraph_BP_JunkDamagePoints(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_JunkDamagePoints_C", "ExecuteUbergraph_BP_JunkDamagePoints");

	Params::ABP_JunkDamagePoints_C_ExecuteUbergraph_BP_JunkDamagePoints_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


