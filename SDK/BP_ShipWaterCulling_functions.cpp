#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ShipWaterCulling.BP_ShipWaterCulling_C
// (Actor)

class UClass* ABP_ShipWaterCulling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ShipWaterCulling_C");

	return Clss;
}


// BP_ShipWaterCulling_C BP_ShipWaterCulling.Default__BP_ShipWaterCulling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ShipWaterCulling_C* ABP_ShipWaterCulling_C::GetDefaultObj()
{
	static class ABP_ShipWaterCulling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ShipWaterCulling_C*>(ABP_ShipWaterCulling_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ShipWaterCulling.BP_ShipWaterCulling_C.ShowCulling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ShipWaterCulling_C::ShowCulling(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ShipWaterCulling_C", "ShowCulling");

	Params::ABP_ShipWaterCulling_C_ShowCulling_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ShipWaterCulling.BP_ShipWaterCulling_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ShipWaterCulling_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ShipWaterCulling_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ShipWaterCulling.BP_ShipWaterCulling_C.ExecuteUbergraph_BP_ShipWaterCulling
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Show                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ShipWaterCulling_C::ExecuteUbergraph_BP_ShipWaterCulling(int32 EntryPoint, bool K2Node_CustomEvent_Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ShipWaterCulling_C", "ExecuteUbergraph_BP_ShipWaterCulling");

	Params::ABP_ShipWaterCulling_C_ExecuteUbergraph_BP_ShipWaterCulling_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Show = K2Node_CustomEvent_Show;

	UObject::ProcessEvent(Func, &Parms);

}

}


