#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupWeaponBase.BP_PickupWeaponBase_C
// (Actor)

class UClass* ABP_PickupWeaponBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupWeaponBase_C");

	return Clss;
}


// BP_PickupWeaponBase_C BP_PickupWeaponBase.Default__BP_PickupWeaponBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupWeaponBase_C* ABP_PickupWeaponBase_C::GetDefaultObj()
{
	static class ABP_PickupWeaponBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupWeaponBase_C*>(ABP_PickupWeaponBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupWeaponBase.BP_PickupWeaponBase_C.OnRep_Real Interacting Character Ref
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupWeaponBase_C::OnRep_Real_Interacting_Character_Ref()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupWeaponBase_C", "OnRep_Real Interacting Character Ref");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupWeaponBase.BP_PickupWeaponBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupWeaponBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupWeaponBase_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupWeaponBase.BP_PickupWeaponBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PickupWeaponBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupWeaponBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupWeaponBase.BP_PickupWeaponBase_C.TakePickup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupWeaponBase_C::TakePickup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupWeaponBase_C", "TakePickup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupWeaponBase.BP_PickupWeaponBase_C.TakePickupLocal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupWeaponBase_C::TakePickupLocal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupWeaponBase_C", "TakePickupLocal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupWeaponBase.BP_PickupWeaponBase_C.Refresh materials
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupWeaponBase_C::Refresh_materials()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupWeaponBase_C", "Refresh materials");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupWeaponBase.BP_PickupWeaponBase_C.S_Force Interactive Character Ref
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             Character_Ref                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupWeaponBase_C::S_Force_Interactive_Character_Ref(class ABP_Character_C* Character_Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupWeaponBase_C", "S_Force Interactive Character Ref");

	Params::ABP_PickupWeaponBase_C_S_Force_Interactive_Character_Ref_Params Parms{};

	Parms.Character_Ref = Character_Ref;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PickupWeaponBase.BP_PickupWeaponBase_C.ExecuteUbergraph_BP_PickupWeaponBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckIfDifferentWeapon_DifferentWeapon                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckIfDifferentWeapon_DifferentWeapon_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Character_C*             K2Node_CustomEvent_Character_Ref                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupWeaponBase_C::ExecuteUbergraph_BP_PickupWeaponBase(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, bool CallFunc_CheckIfDifferentWeapon_DifferentWeapon, bool CallFunc_CheckIfDifferentWeapon_DifferentWeapon_1, bool K2Node_SwitchEnum_CmpSuccess, class ABP_Character_C* K2Node_CustomEvent_Character_Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupWeaponBase_C", "ExecuteUbergraph_BP_PickupWeaponBase");

	Params::ABP_PickupWeaponBase_C_ExecuteUbergraph_BP_PickupWeaponBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_CheckIfDifferentWeapon_DifferentWeapon = CallFunc_CheckIfDifferentWeapon_DifferentWeapon;
	Parms.CallFunc_CheckIfDifferentWeapon_DifferentWeapon_1 = CallFunc_CheckIfDifferentWeapon_DifferentWeapon_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_Character_Ref = K2Node_CustomEvent_Character_Ref;

	UObject::ProcessEvent(Func, &Parms);

}

}


