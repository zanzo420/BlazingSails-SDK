#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponBazooka.BP_WeaponBazooka_C
// (Actor)

class UClass* ABP_WeaponBazooka_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponBazooka_C");

	return Clss;
}


// BP_WeaponBazooka_C BP_WeaponBazooka.Default__BP_WeaponBazooka_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponBazooka_C* ABP_WeaponBazooka_C::GetDefaultObj()
{
	static class ABP_WeaponBazooka_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponBazooka_C*>(ABP_WeaponBazooka_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeaponBazooka.BP_WeaponBazooka_C.ReloadEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             CharacterRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponBazooka_C::ReloadEvent(class ABP_Character_C* CharacterRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponBazooka_C", "ReloadEvent");

	Params::ABP_WeaponBazooka_C_ReloadEvent_Params Parms{};

	Parms.CharacterRef = CharacterRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponBazooka.BP_WeaponBazooka_C.HolsteredEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponBazooka_C::HolsteredEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponBazooka_C", "HolsteredEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponBazooka.BP_WeaponBazooka_C.ExecuteUbergraph_BP_WeaponBazooka
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_Event_CharacterRef                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_WeaponBazooka_C::ExecuteUbergraph_BP_WeaponBazooka(int32 EntryPoint, class ABP_Character_C* K2Node_Event_CharacterRef, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponBazooka_C", "ExecuteUbergraph_BP_WeaponBazooka");

	Params::ABP_WeaponBazooka_C_ExecuteUbergraph_BP_WeaponBazooka_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_CharacterRef = K2Node_Event_CharacterRef;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


