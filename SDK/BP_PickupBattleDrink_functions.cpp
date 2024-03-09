#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupBattleDrink.BP_PickupBattleDrink_C
// (Actor)

class UClass* ABP_PickupBattleDrink_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupBattleDrink_C");

	return Clss;
}


// BP_PickupBattleDrink_C BP_PickupBattleDrink.Default__BP_PickupBattleDrink_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupBattleDrink_C* ABP_PickupBattleDrink_C::GetDefaultObj()
{
	static class ABP_PickupBattleDrink_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupBattleDrink_C*>(ABP_PickupBattleDrink_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupBattleDrink.BP_PickupBattleDrink_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PickupBattleDrink_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupBattleDrink_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupBattleDrink.BP_PickupBattleDrink_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupBattleDrink_C::S_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupBattleDrink_C", "S_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupBattleDrink.BP_PickupBattleDrink_C.ExecuteUbergraph_BP_PickupBattleDrink
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupBattleDrink_C::ExecuteUbergraph_BP_PickupBattleDrink(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupBattleDrink_C", "ExecuteUbergraph_BP_PickupBattleDrink");

	Params::ABP_PickupBattleDrink_C_ExecuteUbergraph_BP_PickupBattleDrink_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


