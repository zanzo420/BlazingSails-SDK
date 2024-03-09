#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponDualQuadFlintlock.BP_WeaponDualQuadFlintlock_C
// (Actor)

class UClass* ABP_WeaponDualQuadFlintlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponDualQuadFlintlock_C");

	return Clss;
}


// BP_WeaponDualQuadFlintlock_C BP_WeaponDualQuadFlintlock.Default__BP_WeaponDualQuadFlintlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponDualQuadFlintlock_C* ABP_WeaponDualQuadFlintlock_C::GetDefaultObj()
{
	static class ABP_WeaponDualQuadFlintlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponDualQuadFlintlock_C*>(ABP_WeaponDualQuadFlintlock_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeaponDualQuadFlintlock.BP_WeaponDualQuadFlintlock_C.HolsteredEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponDualQuadFlintlock_C::HolsteredEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponDualQuadFlintlock_C", "HolsteredEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponDualQuadFlintlock.BP_WeaponDualQuadFlintlock_C.SecondaryFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CameraLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponDualQuadFlintlock_C::SecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponDualQuadFlintlock_C", "SecondaryFire");

	Params::ABP_WeaponDualQuadFlintlock_C_SecondaryFire_Params Parms{};

	Parms.CameraLocation = CameraLocation;
	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponDualQuadFlintlock.BP_WeaponDualQuadFlintlock_C.ReloadEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             CharacterRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponDualQuadFlintlock_C::ReloadEvent(class ABP_Character_C* CharacterRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponDualQuadFlintlock_C", "ReloadEvent");

	Params::ABP_WeaponDualQuadFlintlock_C_ReloadEvent_Params Parms{};

	Parms.CharacterRef = CharacterRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponDualQuadFlintlock.BP_WeaponDualQuadFlintlock_C.StopSecondaryFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CameraLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponDualQuadFlintlock_C::StopSecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponDualQuadFlintlock_C", "StopSecondaryFire");

	Params::ABP_WeaponDualQuadFlintlock_C_StopSecondaryFire_Params Parms{};

	Parms.CameraLocation = CameraLocation;
	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponDualQuadFlintlock.BP_WeaponDualQuadFlintlock_C.ExecuteUbergraph_BP_WeaponDualQuadFlintlock
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_CameraLocation_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Direction_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_Event_CharacterRef                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_CameraLocation                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Direction                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponDualQuadFlintlock_C::ExecuteUbergraph_BP_WeaponDualQuadFlintlock(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& K2Node_Event_CameraLocation_1, const struct FVector& K2Node_Event_Direction_1, int32 CallFunc_Min_ReturnValue, class ABP_Character_C* K2Node_Event_CharacterRef, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& K2Node_Event_CameraLocation, const struct FVector& K2Node_Event_Direction, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponDualQuadFlintlock_C", "ExecuteUbergraph_BP_WeaponDualQuadFlintlock");

	Params::ABP_WeaponDualQuadFlintlock_C_ExecuteUbergraph_BP_WeaponDualQuadFlintlock_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_Event_CameraLocation_1 = K2Node_Event_CameraLocation_1;
	Parms.K2Node_Event_Direction_1 = K2Node_Event_Direction_1;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.K2Node_Event_CharacterRef = K2Node_Event_CharacterRef;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_Event_CameraLocation = K2Node_Event_CameraLocation;
	Parms.K2Node_Event_Direction = K2Node_Event_Direction;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


