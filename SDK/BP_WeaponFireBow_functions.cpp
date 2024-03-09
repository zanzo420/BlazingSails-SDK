#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponFireBow.BP_WeaponFireBow_C
// (Actor)

class UClass* ABP_WeaponFireBow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponFireBow_C");

	return Clss;
}


// BP_WeaponFireBow_C BP_WeaponFireBow.Default__BP_WeaponFireBow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponFireBow_C* ABP_WeaponFireBow_C::GetDefaultObj()
{
	static class ABP_WeaponFireBow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponFireBow_C*>(ABP_WeaponFireBow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeaponFireBow.BP_WeaponFireBow_C.LoadedState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponFireBow_C::LoadedState(bool Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponFireBow_C", "LoadedState");

	Params::ABP_WeaponFireBow_C_LoadedState_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponFireBow.BP_WeaponFireBow_C.ExecuteUbergraph_BP_WeaponFireBow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Loaded                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponFireBow_C::ExecuteUbergraph_BP_WeaponFireBow(int32 EntryPoint, bool K2Node_Event_Loaded, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponFireBow_C", "ExecuteUbergraph_BP_WeaponFireBow");

	Params::ABP_WeaponFireBow_C_ExecuteUbergraph_BP_WeaponFireBow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Loaded = K2Node_Event_Loaded;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


