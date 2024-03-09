#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponDragonPistol.BP_WeaponDragonPistol_C
// (Actor)

class UClass* ABP_WeaponDragonPistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponDragonPistol_C");

	return Clss;
}


// BP_WeaponDragonPistol_C BP_WeaponDragonPistol.Default__BP_WeaponDragonPistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponDragonPistol_C* ABP_WeaponDragonPistol_C::GetDefaultObj()
{
	static class ABP_WeaponDragonPistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponDragonPistol_C*>(ABP_WeaponDragonPistol_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeaponDragonPistol.BP_WeaponDragonPistol_C.ReloadEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             CharacterRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponDragonPistol_C::ReloadEvent(class ABP_Character_C* CharacterRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponDragonPistol_C", "ReloadEvent");

	Params::ABP_WeaponDragonPistol_C_ReloadEvent_Params Parms{};

	Parms.CharacterRef = CharacterRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponDragonPistol.BP_WeaponDragonPistol_C.HolsteredEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponDragonPistol_C::HolsteredEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponDragonPistol_C", "HolsteredEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponDragonPistol.BP_WeaponDragonPistol_C.ExecuteUbergraph_BP_WeaponDragonPistol
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_Event_CharacterRef                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_WeaponDragonPistol_C::ExecuteUbergraph_BP_WeaponDragonPistol(int32 EntryPoint, class ABP_Character_C* K2Node_Event_CharacterRef, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponDragonPistol_C", "ExecuteUbergraph_BP_WeaponDragonPistol");

	Params::ABP_WeaponDragonPistol_C_ExecuteUbergraph_BP_WeaponDragonPistol_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_CharacterRef = K2Node_Event_CharacterRef;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


