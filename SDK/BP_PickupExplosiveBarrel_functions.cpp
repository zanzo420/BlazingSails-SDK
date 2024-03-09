#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C
// (Actor)

class UClass* ABP_PickupExplosiveBarrel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupExplosiveBarrel_C");

	return Clss;
}


// BP_PickupExplosiveBarrel_C BP_PickupExplosiveBarrel.Default__BP_PickupExplosiveBarrel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupExplosiveBarrel_C* ABP_PickupExplosiveBarrel_C::GetDefaultObj()
{
	static class ABP_PickupExplosiveBarrel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupExplosiveBarrel_C*>(ABP_PickupExplosiveBarrel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PickupExplosiveBarrel_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupExplosiveBarrel_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupExplosiveBarrel_C::S_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupExplosiveBarrel_C", "S_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.Explode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Controller_C*            ControllerRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DetonationDelay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupExplosiveBarrel_C::Explode(class ABP_Controller_C* ControllerRef, float DetonationDelay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupExplosiveBarrel_C", "Explode");

	Params::ABP_PickupExplosiveBarrel_C_Explode_Params Parms{};

	Parms.ControllerRef = ControllerRef;
	Parms.DetonationDelay = DetonationDelay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.MC_Effects
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupExplosiveBarrel_C::MC_Effects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupExplosiveBarrel_C", "MC_Effects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.S_Explode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupExplosiveBarrel_C::S_Explode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupExplosiveBarrel_C", "S_Explode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.ExecuteUbergraph_BP_PickupExplosiveBarrel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Controller_C*            K2Node_CustomEvent_ControllerRef                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_DetonationDelay                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AOEHugeExplosion_C*      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupExplosiveBarrel_C::ExecuteUbergraph_BP_PickupExplosiveBarrel(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class ABP_Controller_C* K2Node_CustomEvent_ControllerRef, float K2Node_CustomEvent_DetonationDelay, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FVector& Temp_struct_Variable, class ABP_AOEHugeExplosion_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupExplosiveBarrel_C", "ExecuteUbergraph_BP_PickupExplosiveBarrel");

	Params::ABP_PickupExplosiveBarrel_C_ExecuteUbergraph_BP_PickupExplosiveBarrel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CustomEvent_ControllerRef = K2Node_CustomEvent_ControllerRef;
	Parms.K2Node_CustomEvent_DetonationDelay = K2Node_CustomEvent_DetonationDelay;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


