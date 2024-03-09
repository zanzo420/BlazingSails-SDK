#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MainPP.BP_MainPP_C
// (Actor)

class UClass* ABP_MainPP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MainPP_C");

	return Clss;
}


// BP_MainPP_C BP_MainPP.Default__BP_MainPP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MainPP_C* ABP_MainPP_C::GetDefaultObj()
{
	static class ABP_MainPP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MainPP_C*>(ABP_MainPP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MainPP.BP_MainPP_C.Daze__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_MainPP_C::Daze__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainPP_C", "Daze__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainPP.BP_MainPP_C.Daze__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_MainPP_C::Daze__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainPP_C", "Daze__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainPP.BP_MainPP_C.AimDOF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MainPP_C::AimDOF(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainPP_C", "AimDOF");

	Params::ABP_MainPP_C_AimDOF_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainPP.BP_MainPP_C.SetDOFFocusRange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Distance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainPP_C::SetDOFFocusRange(float Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainPP_C", "SetDOFFocusRange");

	Params::ABP_MainPP_C_SetDOFFocusRange_Params Parms{};

	Parms.Distance = Distance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainPP.BP_MainPP_C.SetScopePP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseDOF                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MainPP_C::SetScopePP(bool Enable, bool UseDOF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainPP_C", "SetScopePP");

	Params::ABP_MainPP_C_SetScopePP_Params Parms{};

	Parms.Enable = Enable;
	Parms.UseDOF = UseDOF;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainPP.BP_MainPP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MainPP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainPP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainPP.BP_MainPP_C.DazedEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MainPP_C::DazedEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainPP_C", "DazedEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainPP.BP_MainPP_C.ExecuteUbergraph_BP_MainPP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendable          K2Node_MakeStruct_WeightedBlendable                              (NoDestructor)
// TArray<struct FWeightedBlendable>  K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FWeightedBlendables         K2Node_MakeStruct_WeightedBlendables                             (None)
// bool                               K2Node_CustomEvent_Enable_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Distance                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Enable                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_UseDOF                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainPP_C::ExecuteUbergraph_BP_MainPP(int32 EntryPoint, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables, bool K2Node_CustomEvent_Enable_1, float K2Node_CustomEvent_Distance, float CallFunc_Subtract_FloatFloat_ReturnValue, bool K2Node_CustomEvent_Enable, bool K2Node_CustomEvent_UseDOF, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainPP_C", "ExecuteUbergraph_BP_MainPP");

	Params::ABP_MainPP_C_ExecuteUbergraph_BP_MainPP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_WeightedBlendable = K2Node_MakeStruct_WeightedBlendable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_WeightedBlendables = K2Node_MakeStruct_WeightedBlendables;
	Parms.K2Node_CustomEvent_Enable_1 = K2Node_CustomEvent_Enable_1;
	Parms.K2Node_CustomEvent_Distance = K2Node_CustomEvent_Distance;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_Enable = K2Node_CustomEvent_Enable;
	Parms.K2Node_CustomEvent_UseDOF = K2Node_CustomEvent_UseDOF;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


