#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponBow.BP_WeaponBow_C
// (Actor)

class UClass* ABP_WeaponBow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponBow_C");

	return Clss;
}


// BP_WeaponBow_C BP_WeaponBow.Default__BP_WeaponBow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponBow_C* ABP_WeaponBow_C::GetDefaultObj()
{
	static class ABP_WeaponBow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponBow_C*>(ABP_WeaponBow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeaponBow.BP_WeaponBow_C.LoadedState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponBow_C::LoadedState(bool Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponBow_C", "LoadedState");

	Params::ABP_WeaponBow_C_LoadedState_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponBow.BP_WeaponBow_C.ExecuteUbergraph_BP_WeaponBow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Loaded                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponBow_C::ExecuteUbergraph_BP_WeaponBow(int32 EntryPoint, bool K2Node_Event_Loaded, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponBow_C", "ExecuteUbergraph_BP_WeaponBow");

	Params::ABP_WeaponBow_C_ExecuteUbergraph_BP_WeaponBow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Loaded = K2Node_Event_Loaded;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


