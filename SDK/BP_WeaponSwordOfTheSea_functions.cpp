#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponSwordOfTheSea.BP_WeaponSwordOfTheSea_C
// (Actor)

class UClass* ABP_WeaponSwordOfTheSea_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponSwordOfTheSea_C");

	return Clss;
}


// BP_WeaponSwordOfTheSea_C BP_WeaponSwordOfTheSea.Default__BP_WeaponSwordOfTheSea_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponSwordOfTheSea_C* ABP_WeaponSwordOfTheSea_C::GetDefaultObj()
{
	static class ABP_WeaponSwordOfTheSea_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponSwordOfTheSea_C*>(ABP_WeaponSwordOfTheSea_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeaponSwordOfTheSea.BP_WeaponSwordOfTheSea_C.PlayerHitEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponSwordOfTheSea_C::PlayerHitEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponSwordOfTheSea_C", "PlayerHitEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponSwordOfTheSea.BP_WeaponSwordOfTheSea_C.ExecuteUbergraph_BP_WeaponSwordOfTheSea
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponSwordOfTheSea_C::ExecuteUbergraph_BP_WeaponSwordOfTheSea(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponSwordOfTheSea_C", "ExecuteUbergraph_BP_WeaponSwordOfTheSea");

	Params::ABP_WeaponSwordOfTheSea_C_ExecuteUbergraph_BP_WeaponSwordOfTheSea_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


