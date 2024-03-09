#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VehicleSwivelCannon.BP_VehicleSwivelCannon_C
// (Actor, Pawn)

class UClass* ABP_VehicleSwivelCannon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VehicleSwivelCannon_C");

	return Clss;
}


// BP_VehicleSwivelCannon_C BP_VehicleSwivelCannon.Default__BP_VehicleSwivelCannon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_VehicleSwivelCannon_C* ABP_VehicleSwivelCannon_C::GetDefaultObj()
{
	static class ABP_VehicleSwivelCannon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_VehicleSwivelCannon_C*>(ABP_VehicleSwivelCannon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VehicleSwivelCannon.BP_VehicleSwivelCannon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_VehicleSwivelCannon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleSwivelCannon_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleSwivelCannon.BP_VehicleSwivelCannon_C.ExecuteUbergraph_BP_VehicleSwivelCannon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VehicleSwivelCannon_C::ExecuteUbergraph_BP_VehicleSwivelCannon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleSwivelCannon_C", "ExecuteUbergraph_BP_VehicleSwivelCannon");

	Params::ABP_VehicleSwivelCannon_C_ExecuteUbergraph_BP_VehicleSwivelCannon_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


