#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponFlintlock.BP_WeaponFlintlock_C
// (Actor)

class UClass* ABP_WeaponFlintlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponFlintlock_C");

	return Clss;
}


// BP_WeaponFlintlock_C BP_WeaponFlintlock.Default__BP_WeaponFlintlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponFlintlock_C* ABP_WeaponFlintlock_C::GetDefaultObj()
{
	static class ABP_WeaponFlintlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponFlintlock_C*>(ABP_WeaponFlintlock_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeaponFlintlock.BP_WeaponFlintlock_C.ReloadEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             CharacterRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponFlintlock_C::ReloadEvent(class ABP_Character_C* CharacterRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponFlintlock_C", "ReloadEvent");

	Params::ABP_WeaponFlintlock_C_ReloadEvent_Params Parms{};

	Parms.CharacterRef = CharacterRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponFlintlock.BP_WeaponFlintlock_C.HolsteredEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponFlintlock_C::HolsteredEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponFlintlock_C", "HolsteredEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponFlintlock.BP_WeaponFlintlock_C.ExecuteUbergraph_BP_WeaponFlintlock
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_Event_CharacterRef                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_WeaponFlintlock_C::ExecuteUbergraph_BP_WeaponFlintlock(int32 EntryPoint, class ABP_Character_C* K2Node_Event_CharacterRef, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponFlintlock_C", "ExecuteUbergraph_BP_WeaponFlintlock");

	Params::ABP_WeaponFlintlock_C_ExecuteUbergraph_BP_WeaponFlintlock_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_CharacterRef = K2Node_Event_CharacterRef;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


