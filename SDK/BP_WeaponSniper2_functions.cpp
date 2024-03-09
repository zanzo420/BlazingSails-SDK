#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponSniper2.BP_WeaponSniper2_C
// (Actor)

class UClass* ABP_WeaponSniper2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponSniper2_C");

	return Clss;
}


// BP_WeaponSniper2_C BP_WeaponSniper2.Default__BP_WeaponSniper2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WeaponSniper2_C* ABP_WeaponSniper2_C::GetDefaultObj()
{
	static class ABP_WeaponSniper2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WeaponSniper2_C*>(ABP_WeaponSniper2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeaponSniper2.BP_WeaponSniper2_C.SecondaryFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CameraLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponSniper2_C::SecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponSniper2_C", "SecondaryFire");

	Params::ABP_WeaponSniper2_C_SecondaryFire_Params Parms{};

	Parms.CameraLocation = CameraLocation;
	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponSniper2.BP_WeaponSniper2_C.HolsteredEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WeaponSniper2_C::HolsteredEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponSniper2_C", "HolsteredEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponSniper2.BP_WeaponSniper2_C.StopSecondaryFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CameraLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponSniper2_C::StopSecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponSniper2_C", "StopSecondaryFire");

	Params::ABP_WeaponSniper2_C_StopSecondaryFire_Params Parms{};

	Parms.CameraLocation = CameraLocation;
	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponSniper2.BP_WeaponSniper2_C.ExecuteUbergraph_BP_WeaponSniper2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_CameraLocation_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Direction_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_CameraLocation                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Direction                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponSniper2_C::ExecuteUbergraph_BP_WeaponSniper2(int32 EntryPoint, const struct FVector& K2Node_Event_CameraLocation_1, const struct FVector& K2Node_Event_Direction_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& K2Node_Event_CameraLocation, const struct FVector& K2Node_Event_Direction, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponSniper2_C", "ExecuteUbergraph_BP_WeaponSniper2");

	Params::ABP_WeaponSniper2_C_ExecuteUbergraph_BP_WeaponSniper2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_CameraLocation_1 = K2Node_Event_CameraLocation_1;
	Parms.K2Node_Event_Direction_1 = K2Node_Event_Direction_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_Event_CameraLocation = K2Node_Event_CameraLocation;
	Parms.K2Node_Event_Direction = K2Node_Event_Direction;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}

}


