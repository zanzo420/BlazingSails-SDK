#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BombvesselDamagePoints.BP_BombvesselDamagePoints_C
// (Actor)

class UClass* ABP_BombvesselDamagePoints_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BombvesselDamagePoints_C");

	return Clss;
}


// BP_BombvesselDamagePoints_C BP_BombvesselDamagePoints.Default__BP_BombvesselDamagePoints_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BombvesselDamagePoints_C* ABP_BombvesselDamagePoints_C::GetDefaultObj()
{
	static class ABP_BombvesselDamagePoints_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BombvesselDamagePoints_C*>(ABP_BombvesselDamagePoints_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BombvesselDamagePoints.BP_BombvesselDamagePoints_C.DestroyUnwantedDamagePoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*        DamagePointRef                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BombvesselDamagePoints_C::DestroyUnwantedDamagePoint(class UChildActorComponent* DamagePointRef, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BombvesselDamagePoints_C", "DestroyUnwantedDamagePoint");

	Params::ABP_BombvesselDamagePoints_C_DestroyUnwantedDamagePoint_Params Parms{};

	Parms.DamagePointRef = DamagePointRef;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BombvesselDamagePoints.BP_BombvesselDamagePoints_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BombvesselDamagePoints_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BombvesselDamagePoints_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BombvesselDamagePoints.BP_BombvesselDamagePoints_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BombvesselDamagePoints_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BombvesselDamagePoints_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BombvesselDamagePoints.BP_BombvesselDamagePoints_C.PrepPoints
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BombvesselDamagePoints_C::PrepPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BombvesselDamagePoints_C", "PrepPoints");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BombvesselDamagePoints.BP_BombvesselDamagePoints_C.ExecuteUbergraph_BP_BombvesselDamagePoints
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BombvesselDamagePoints_C::ExecuteUbergraph_BP_BombvesselDamagePoints(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BombvesselDamagePoints_C", "ExecuteUbergraph_BP_BombvesselDamagePoints");

	Params::ABP_BombvesselDamagePoints_C_ExecuteUbergraph_BP_BombvesselDamagePoints_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


