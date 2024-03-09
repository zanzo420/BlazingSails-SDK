#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponMultiCrossbow.BP_WeaponMultiCrossbow_C
// (Actor)

class UClass* ABP_WeaponMultiCrossbow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponMultiCrossbow_C");

	return Clss;
}


// BP_WeaponMultiCrossbow_C BP_WeaponMultiCrossbow.Default__BP_WeaponMultiCrossbow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponMultiCrossbow_C* ABP_WeaponMultiCrossbow_C::GetDefaultObj()
{
	static class ABP_WeaponMultiCrossbow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponMultiCrossbow_C*>(ABP_WeaponMultiCrossbow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeaponMultiCrossbow.BP_WeaponMultiCrossbow_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponMultiCrossbow_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponMultiCrossbow_C", "ReceiveTick");

	Params::ABP_WeaponMultiCrossbow_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponMultiCrossbow.BP_WeaponMultiCrossbow_C.PrimaryFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CameraLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FullPrecision                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               WasSprinting                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponMultiCrossbow_C::PrimaryFire(const struct FVector& CameraLocation, const struct FVector& Direction, bool FullPrecision, bool WasSprinting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponMultiCrossbow_C", "PrimaryFire");

	Params::ABP_WeaponMultiCrossbow_C_PrimaryFire_Params Parms{};

	Parms.CameraLocation = CameraLocation;
	Parms.Direction = Direction;
	Parms.FullPrecision = FullPrecision;
	Parms.WasSprinting = WasSprinting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponMultiCrossbow.BP_WeaponMultiCrossbow_C.LoadedState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponMultiCrossbow_C::LoadedState(bool Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponMultiCrossbow_C", "LoadedState");

	Params::ABP_WeaponMultiCrossbow_C_LoadedState_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponMultiCrossbow.BP_WeaponMultiCrossbow_C.ExecuteUbergraph_BP_WeaponMultiCrossbow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_CameraLocation                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Direction                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_FullPrecision                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_WasSprinting                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Loaded                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponMultiCrossbow_C::ExecuteUbergraph_BP_WeaponMultiCrossbow(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_Event_DeltaSeconds, const struct FVector& K2Node_Event_CameraLocation, const struct FVector& K2Node_Event_Direction, bool K2Node_Event_FullPrecision, bool K2Node_Event_WasSprinting, bool K2Node_Event_Loaded, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_SetStaticMesh_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_SetStaticMesh_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponMultiCrossbow_C", "ExecuteUbergraph_BP_WeaponMultiCrossbow");

	Params::ABP_WeaponMultiCrossbow_C_ExecuteUbergraph_BP_WeaponMultiCrossbow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_CameraLocation = K2Node_Event_CameraLocation;
	Parms.K2Node_Event_Direction = K2Node_Event_Direction;
	Parms.K2Node_Event_FullPrecision = K2Node_Event_FullPrecision;
	Parms.K2Node_Event_WasSprinting = K2Node_Event_WasSprinting;
	Parms.K2Node_Event_Loaded = K2Node_Event_Loaded;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue_2 = CallFunc_SetStaticMesh_ReturnValue_2;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue_3 = CallFunc_SetStaticMesh_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


