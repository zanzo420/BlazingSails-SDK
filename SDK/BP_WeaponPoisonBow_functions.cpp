#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponPoisonBow.BP_WeaponPoisonBow_C
// (Actor)

class UClass* ABP_WeaponPoisonBow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponPoisonBow_C");

	return Clss;
}


// BP_WeaponPoisonBow_C BP_WeaponPoisonBow.Default__BP_WeaponPoisonBow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponPoisonBow_C* ABP_WeaponPoisonBow_C::GetDefaultObj()
{
	static class ABP_WeaponPoisonBow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponPoisonBow_C*>(ABP_WeaponPoisonBow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeaponPoisonBow.BP_WeaponPoisonBow_C.LoadedState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponPoisonBow_C::LoadedState(bool Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponPoisonBow_C", "LoadedState");

	Params::ABP_WeaponPoisonBow_C_LoadedState_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponPoisonBow.BP_WeaponPoisonBow_C.ExecuteUbergraph_BP_WeaponPoisonBow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Loaded                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponPoisonBow_C::ExecuteUbergraph_BP_WeaponPoisonBow(int32 EntryPoint, bool K2Node_Event_Loaded, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponPoisonBow_C", "ExecuteUbergraph_BP_WeaponPoisonBow");

	Params::ABP_WeaponPoisonBow_C_ExecuteUbergraph_BP_WeaponPoisonBow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Loaded = K2Node_Event_Loaded;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


