#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CaravelDamagePoints.BP_CaravelDamagePoints_C
// (Actor)

class UClass* ABP_CaravelDamagePoints_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CaravelDamagePoints_C");

	return Clss;
}


// BP_CaravelDamagePoints_C BP_CaravelDamagePoints.Default__BP_CaravelDamagePoints_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CaravelDamagePoints_C* ABP_CaravelDamagePoints_C::GetDefaultObj()
{
	static class ABP_CaravelDamagePoints_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CaravelDamagePoints_C*>(ABP_CaravelDamagePoints_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CaravelDamagePoints.BP_CaravelDamagePoints_C.DestroyUnwantedDamagePoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*        DamagePointRef                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CaravelDamagePoints_C::DestroyUnwantedDamagePoint(class UChildActorComponent* DamagePointRef, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaravelDamagePoints_C", "DestroyUnwantedDamagePoint");

	Params::ABP_CaravelDamagePoints_C_DestroyUnwantedDamagePoint_Params Parms{};

	Parms.DamagePointRef = DamagePointRef;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CaravelDamagePoints.BP_CaravelDamagePoints_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CaravelDamagePoints_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaravelDamagePoints_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CaravelDamagePoints.BP_CaravelDamagePoints_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CaravelDamagePoints_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaravelDamagePoints_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CaravelDamagePoints.BP_CaravelDamagePoints_C.PrepPoints
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CaravelDamagePoints_C::PrepPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaravelDamagePoints_C", "PrepPoints");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CaravelDamagePoints.BP_CaravelDamagePoints_C.ExecuteUbergraph_BP_CaravelDamagePoints
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CaravelDamagePoints_C::ExecuteUbergraph_BP_CaravelDamagePoints(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaravelDamagePoints_C", "ExecuteUbergraph_BP_CaravelDamagePoints");

	Params::ABP_CaravelDamagePoints_C_ExecuteUbergraph_BP_CaravelDamagePoints_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


