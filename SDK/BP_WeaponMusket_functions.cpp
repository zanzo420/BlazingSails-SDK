#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponMusket.BP_WeaponMusket_C
// (Actor)

class UClass* ABP_WeaponMusket_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponMusket_C");

	return Clss;
}


// BP_WeaponMusket_C BP_WeaponMusket.Default__BP_WeaponMusket_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponMusket_C* ABP_WeaponMusket_C::GetDefaultObj()
{
	static class ABP_WeaponMusket_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponMusket_C*>(ABP_WeaponMusket_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeaponMusket.BP_WeaponMusket_C.ReloadEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             CharacterRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponMusket_C::ReloadEvent(class ABP_Character_C* CharacterRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponMusket_C", "ReloadEvent");

	Params::ABP_WeaponMusket_C_ReloadEvent_Params Parms{};

	Parms.CharacterRef = CharacterRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponMusket.BP_WeaponMusket_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponMusket_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponMusket_C", "ReceiveTick");

	Params::ABP_WeaponMusket_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponMusket.BP_WeaponMusket_C.ExecuteUbergraph_BP_WeaponMusket
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_Event_CharacterRef                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponMusket_C::ExecuteUbergraph_BP_WeaponMusket(int32 EntryPoint, class ABP_Character_C* K2Node_Event_CharacterRef, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponMusket_C", "ExecuteUbergraph_BP_WeaponMusket");

	Params::ABP_WeaponMusket_C_ExecuteUbergraph_BP_WeaponMusket_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_CharacterRef = K2Node_Event_CharacterRef;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


