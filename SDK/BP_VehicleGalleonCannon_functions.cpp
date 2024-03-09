#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VehicleGalleonCannon.BP_VehicleGalleonCannon_C
// (Actor, Pawn)

class UClass* ABP_VehicleGalleonCannon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VehicleGalleonCannon_C");

	return Clss;
}


// BP_VehicleGalleonCannon_C BP_VehicleGalleonCannon.Default__BP_VehicleGalleonCannon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_VehicleGalleonCannon_C* ABP_VehicleGalleonCannon_C::GetDefaultObj()
{
	static class ABP_VehicleGalleonCannon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_VehicleGalleonCannon_C*>(ABP_VehicleGalleonCannon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VehicleGalleonCannon.BP_VehicleGalleonCannon_C.CoolDown__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_VehicleGalleonCannon_C::CoolDown__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleGalleonCannon_C", "CoolDown__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleGalleonCannon.BP_VehicleGalleonCannon_C.CoolDown__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_VehicleGalleonCannon_C::CoolDown__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleGalleonCannon_C", "CoolDown__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleGalleonCannon.BP_VehicleGalleonCannon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_VehicleGalleonCannon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleGalleonCannon_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleGalleonCannon.BP_VehicleGalleonCannon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VehicleGalleonCannon_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleGalleonCannon_C", "ReceiveTick");

	Params::ABP_VehicleGalleonCannon_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VehicleGalleonCannon.BP_VehicleGalleonCannon_C.S_Fire
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     StartLocation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TeamID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CannonAmmo            AmmoType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     AddedVelocity                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FleetID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DroprateMultiplier                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VehicleGalleonCannon_C::S_Fire(const struct FVector& StartLocation, const struct FVector& Direction, int32 TeamID, enum class E_CannonAmmo AmmoType, const struct FVector& AddedVelocity, int32 FleetID, float DroprateMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleGalleonCannon_C", "S_Fire");

	Params::ABP_VehicleGalleonCannon_C_S_Fire_Params Parms{};

	Parms.StartLocation = StartLocation;
	Parms.Direction = Direction;
	Parms.TeamID = TeamID;
	Parms.AmmoType = AmmoType;
	Parms.AddedVelocity = AddedVelocity;
	Parms.FleetID = FleetID;
	Parms.DroprateMultiplier = DroprateMultiplier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VehicleGalleonCannon.BP_VehicleGalleonCannon_C.OverHeatEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_VehicleGalleonCannon_C::OverHeatEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleGalleonCannon_C", "OverHeatEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleGalleonCannon.BP_VehicleGalleonCannon_C.ExecuteUbergraph_BP_VehicleGalleonCannon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_StartLocation                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Direction                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_TeamID                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CannonAmmo            K2Node_Event_AmmoType                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_AddedVelocity                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_FleetID                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DropRateMultiplier                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_VehicleGalleonCannon_C::ExecuteUbergraph_BP_VehicleGalleonCannon(int32 EntryPoint, float K2Node_Event_DeltaSeconds, const struct FVector& K2Node_Event_StartLocation, const struct FVector& K2Node_Event_Direction, int32 K2Node_Event_TeamID, enum class E_CannonAmmo K2Node_Event_AmmoType, const struct FVector& K2Node_Event_AddedVelocity, int32 K2Node_Event_FleetID, float K2Node_Event_DropRateMultiplier, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FRotator& CallFunc_RInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FRotator& CallFunc_RInterpTo_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleGalleonCannon_C", "ExecuteUbergraph_BP_VehicleGalleonCannon");

	Params::ABP_VehicleGalleonCannon_C_ExecuteUbergraph_BP_VehicleGalleonCannon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_StartLocation = K2Node_Event_StartLocation;
	Parms.K2Node_Event_Direction = K2Node_Event_Direction;
	Parms.K2Node_Event_TeamID = K2Node_Event_TeamID;
	Parms.K2Node_Event_AmmoType = K2Node_Event_AmmoType;
	Parms.K2Node_Event_AddedVelocity = K2Node_Event_AddedVelocity;
	Parms.K2Node_Event_FleetID = K2Node_Event_FleetID;
	Parms.K2Node_Event_DropRateMultiplier = K2Node_Event_DropRateMultiplier;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_RInterpTo_ReturnValue = CallFunc_RInterpTo_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_RInterpTo_ReturnValue_1 = CallFunc_RInterpTo_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeRotation_SweepHitResult_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


