#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponDoubleBarrel.BP_WeaponDoubleBarrel_C
// (Actor)

class UClass* ABP_WeaponDoubleBarrel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponDoubleBarrel_C");

	return Clss;
}


// BP_WeaponDoubleBarrel_C BP_WeaponDoubleBarrel.Default__BP_WeaponDoubleBarrel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponDoubleBarrel_C* ABP_WeaponDoubleBarrel_C::GetDefaultObj()
{
	static class ABP_WeaponDoubleBarrel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponDoubleBarrel_C*>(ABP_WeaponDoubleBarrel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeaponDoubleBarrel.BP_WeaponDoubleBarrel_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponDoubleBarrel_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponDoubleBarrel_C", "ReceiveTick");

	Params::ABP_WeaponDoubleBarrel_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponDoubleBarrel.BP_WeaponDoubleBarrel_C.ExecuteUbergraph_BP_WeaponDoubleBarrel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponDoubleBarrel_C::ExecuteUbergraph_BP_WeaponDoubleBarrel(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponDoubleBarrel_C", "ExecuteUbergraph_BP_WeaponDoubleBarrel");

	Params::ABP_WeaponDoubleBarrel_C_ExecuteUbergraph_BP_WeaponDoubleBarrel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


