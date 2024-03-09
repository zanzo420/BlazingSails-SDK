#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C
// (Actor)

class UClass* ABP_DualLeftWeaponBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DualLeftWeaponBase_C");

	return Clss;
}


// BP_DualLeftWeaponBase_C BP_DualLeftWeaponBase.Default__BP_DualLeftWeaponBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DualLeftWeaponBase_C* ABP_DualLeftWeaponBase_C::GetDefaultObj()
{
	static class ABP_DualLeftWeaponBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DualLeftWeaponBase_C*>(ABP_DualLeftWeaponBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.OnRep_Holstered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DualLeftWeaponBase_C::OnRep_Holstered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DualLeftWeaponBase_C", "OnRep_Holstered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.Effects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CharacterRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DualLeftWeaponBase_C::Effects(const struct FVector& Direction, class ABP_Character_C* CharacterRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DualLeftWeaponBase_C", "Effects");

	Params::ABP_DualLeftWeaponBase_C_Effects_Params Parms{};

	Parms.Direction = Direction;
	Parms.CharacterRef = CharacterRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.S_Effects
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DualLeftWeaponBase_C::S_Effects(const struct FVector& Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DualLeftWeaponBase_C", "S_Effects");

	Params::ABP_DualLeftWeaponBase_C_S_Effects_Params Parms{};

	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.MC_Effects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DualLeftWeaponBase_C::MC_Effects(const struct FVector& Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DualLeftWeaponBase_C", "MC_Effects");

	Params::ABP_DualLeftWeaponBase_C_MC_Effects_Params Parms{};

	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DualLeftWeaponBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DualLeftWeaponBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.HideUnhide
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DualLeftWeaponBase_C::HideUnhide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DualLeftWeaponBase_C", "HideUnhide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.ExecuteUbergraph_BP_DualLeftWeaponBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Direction_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_CustomEvent_CharacterRef                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_CustomEvent_Direction_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Direction                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DualLeftWeaponBase_C::ExecuteUbergraph_BP_DualLeftWeaponBase(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& K2Node_CustomEvent_Direction_2, class ABP_Character_C* K2Node_CustomEvent_CharacterRef, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& K2Node_CustomEvent_Direction_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, const struct FVector& K2Node_CustomEvent_Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DualLeftWeaponBase_C", "ExecuteUbergraph_BP_DualLeftWeaponBase");

	Params::ABP_DualLeftWeaponBase_C_ExecuteUbergraph_BP_DualLeftWeaponBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_CustomEvent_Direction_2 = K2Node_CustomEvent_Direction_2;
	Parms.K2Node_CustomEvent_CharacterRef = K2Node_CustomEvent_CharacterRef;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUpVector_ReturnValue = CallFunc_GetUpVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.K2Node_CustomEvent_Direction_1 = K2Node_CustomEvent_Direction_1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_1 = CallFunc_SpawnEmitterAttached_ReturnValue_1;
	Parms.K2Node_CustomEvent_Direction = K2Node_CustomEvent_Direction;

	UObject::ProcessEvent(Func, &Parms);

}

}


