#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Practice_Damage_Base.BP_Practice_Damage_Base_C
// (Actor)

class UClass* ABP_Practice_Damage_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Practice_Damage_Base_C");

	return Clss;
}


// BP_Practice_Damage_Base_C BP_Practice_Damage_Base.Default__BP_Practice_Damage_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Practice_Damage_Base_C* ABP_Practice_Damage_Base_C::GetDefaultObj()
{
	static class ABP_Practice_Damage_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Practice_Damage_Base_C*>(ABP_Practice_Damage_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Practice_Damage_Base.BP_Practice_Damage_Base_C.HitDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HeadShot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Damage_Amount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FinalDamage                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Controller_C*            K2Node_DynamicCast_AsBP_Controller                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Practice_Damage_Base_C::HitDamage(bool HeadShot, int32 Damage_Amount, float FinalDamage, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Practice_Damage_Base_C", "HitDamage");

	Params::ABP_Practice_Damage_Base_C_HitDamage_Params Parms{};

	Parms.HeadShot = HeadShot;
	Parms.Damage_Amount = Damage_Amount;
	Parms.FinalDamage = FinalDamage;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Controller = K2Node_DynamicCast_AsBP_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Practice_Damage_Base.BP_Practice_Damage_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Practice_Damage_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Practice_Damage_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Practice_Damage_Base.BP_Practice_Damage_Base_C.ExecuteUbergraph_BP_Practice_Damage_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Practice_Damage_Base_C::ExecuteUbergraph_BP_Practice_Damage_Base(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Practice_Damage_Base_C", "ExecuteUbergraph_BP_Practice_Damage_Base");

	Params::ABP_Practice_Damage_Base_C_ExecuteUbergraph_BP_Practice_Damage_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Practice_Damage_Base.BP_Practice_Damage_Base_C.On Did Damage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Head_Shot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Damage_Amount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Practice_Damage_Base_C*  Damage_Origin                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Practice_Damage_Base_C::On_Did_Damage__DelegateSignature(bool Head_Shot, int32 Damage_Amount, class ABP_Practice_Damage_Base_C* Damage_Origin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Practice_Damage_Base_C", "On Did Damage__DelegateSignature");

	Params::ABP_Practice_Damage_Base_C_On_Did_Damage__DelegateSignature_Params Parms{};

	Parms.Head_Shot = Head_Shot;
	Parms.Damage_Amount = Damage_Amount;
	Parms.Damage_Origin = Damage_Origin;

	UObject::ProcessEvent(Func, &Parms);

}

}


