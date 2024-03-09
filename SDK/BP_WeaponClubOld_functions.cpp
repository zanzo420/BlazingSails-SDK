#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponClubOld.BP_WeaponClubOld_C
// (Actor)

class UClass* ABP_WeaponClubOld_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponClubOld_C");

	return Clss;
}


// BP_WeaponClubOld_C BP_WeaponClubOld.Default__BP_WeaponClubOld_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponClubOld_C* ABP_WeaponClubOld_C::GetDefaultObj()
{
	static class ABP_WeaponClubOld_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponClubOld_C*>(ABP_WeaponClubOld_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeaponClubOld.BP_WeaponClubOld_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_WeaponClubOld_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponClubOld_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponClubOld.BP_WeaponClubOld_C.ExecuteUbergraph_BP_WeaponClubOld
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponClubOld_C::ExecuteUbergraph_BP_WeaponClubOld(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponClubOld_C", "ExecuteUbergraph_BP_WeaponClubOld");

	Params::ABP_WeaponClubOld_C_ExecuteUbergraph_BP_WeaponClubOld_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


