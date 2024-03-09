#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DuoShipDamagePoints.BP_DuoShipDamagePoints_C
// (Actor)

class UClass* ABP_DuoShipDamagePoints_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DuoShipDamagePoints_C");

	return Clss;
}


// BP_DuoShipDamagePoints_C BP_DuoShipDamagePoints.Default__BP_DuoShipDamagePoints_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DuoShipDamagePoints_C* ABP_DuoShipDamagePoints_C::GetDefaultObj()
{
	static class ABP_DuoShipDamagePoints_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DuoShipDamagePoints_C*>(ABP_DuoShipDamagePoints_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DuoShipDamagePoints.BP_DuoShipDamagePoints_C.DestroyUnwantedDamagePoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*        DamagePointRef                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DuoShipDamagePoints_C::DestroyUnwantedDamagePoint(class UChildActorComponent* DamagePointRef, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DuoShipDamagePoints_C", "DestroyUnwantedDamagePoint");

	Params::ABP_DuoShipDamagePoints_C_DestroyUnwantedDamagePoint_Params Parms{};

	Parms.DamagePointRef = DamagePointRef;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DuoShipDamagePoints.BP_DuoShipDamagePoints_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DuoShipDamagePoints_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DuoShipDamagePoints_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DuoShipDamagePoints.BP_DuoShipDamagePoints_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DuoShipDamagePoints_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DuoShipDamagePoints_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DuoShipDamagePoints.BP_DuoShipDamagePoints_C.PrepPoints
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DuoShipDamagePoints_C::PrepPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DuoShipDamagePoints_C", "PrepPoints");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DuoShipDamagePoints.BP_DuoShipDamagePoints_C.ExecuteUbergraph_BP_DuoShipDamagePoints
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DuoShipDamagePoints_C::ExecuteUbergraph_BP_DuoShipDamagePoints(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DuoShipDamagePoints_C", "ExecuteUbergraph_BP_DuoShipDamagePoints");

	Params::ABP_DuoShipDamagePoints_C_ExecuteUbergraph_BP_DuoShipDamagePoints_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


