#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GalleonDamagePoints.BP_GalleonDamagePoints_C
// (Actor)

class UClass* ABP_GalleonDamagePoints_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GalleonDamagePoints_C");

	return Clss;
}


// BP_GalleonDamagePoints_C BP_GalleonDamagePoints.Default__BP_GalleonDamagePoints_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GalleonDamagePoints_C* ABP_GalleonDamagePoints_C::GetDefaultObj()
{
	static class ABP_GalleonDamagePoints_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GalleonDamagePoints_C*>(ABP_GalleonDamagePoints_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GalleonDamagePoints.BP_GalleonDamagePoints_C.DestroyUnwantedDamagePoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*        DamagePointRef                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GalleonDamagePoints_C::DestroyUnwantedDamagePoint(class UChildActorComponent* DamagePointRef, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GalleonDamagePoints_C", "DestroyUnwantedDamagePoint");

	Params::ABP_GalleonDamagePoints_C_DestroyUnwantedDamagePoint_Params Parms{};

	Parms.DamagePointRef = DamagePointRef;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GalleonDamagePoints.BP_GalleonDamagePoints_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GalleonDamagePoints_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GalleonDamagePoints_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GalleonDamagePoints.BP_GalleonDamagePoints_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_GalleonDamagePoints_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GalleonDamagePoints_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GalleonDamagePoints.BP_GalleonDamagePoints_C.PrepPoints
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GalleonDamagePoints_C::PrepPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GalleonDamagePoints_C", "PrepPoints");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GalleonDamagePoints.BP_GalleonDamagePoints_C.ExecuteUbergraph_BP_GalleonDamagePoints
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GalleonDamagePoints_C::ExecuteUbergraph_BP_GalleonDamagePoints(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GalleonDamagePoints_C", "ExecuteUbergraph_BP_GalleonDamagePoints");

	Params::ABP_GalleonDamagePoints_C_ExecuteUbergraph_BP_GalleonDamagePoints_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


