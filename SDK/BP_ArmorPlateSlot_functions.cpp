#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ArmorPlateSlot.BP_ArmorPlateSlot_C
// (Actor)

class UClass* ABP_ArmorPlateSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ArmorPlateSlot_C");

	return Clss;
}


// BP_ArmorPlateSlot_C BP_ArmorPlateSlot.Default__BP_ArmorPlateSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ArmorPlateSlot_C* ABP_ArmorPlateSlot_C::GetDefaultObj()
{
	static class ABP_ArmorPlateSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ArmorPlateSlot_C*>(ABP_ArmorPlateSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ArmorPlateSlot.BP_ArmorPlateSlot_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ArmorPlateSlot_C::SetActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ArmorPlateSlot_C", "SetActive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ArmorPlateSlot.BP_ArmorPlateSlot_C.damage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ArmorPlateSlot_C::Damage(int32 DamageAmount, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ArmorPlateSlot_C", "damage");

	Params::ABP_ArmorPlateSlot_C_Damage_Params Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ArmorPlateSlot.BP_ArmorPlateSlot_C.OnRep_Active
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ArmorPlateSlot_C::OnRep_Active()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ArmorPlateSlot_C", "OnRep_Active");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ArmorPlateSlot.BP_ArmorPlateSlot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ArmorPlateSlot_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ArmorPlateSlot_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ArmorPlateSlot.BP_ArmorPlateSlot_C.Highlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ArmorPlateSlot_C::Highlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ArmorPlateSlot_C", "Highlight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ArmorPlateSlot.BP_ArmorPlateSlot_C.NoHighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ArmorPlateSlot_C::NoHighlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ArmorPlateSlot_C", "NoHighlight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ArmorPlateSlot.BP_ArmorPlateSlot_C.ExecuteUbergraph_BP_ArmorPlateSlot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ArmorPlateSlot_C::ExecuteUbergraph_BP_ArmorPlateSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ArmorPlateSlot_C", "ExecuteUbergraph_BP_ArmorPlateSlot");

	Params::ABP_ArmorPlateSlot_C_ExecuteUbergraph_BP_ArmorPlateSlot_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


