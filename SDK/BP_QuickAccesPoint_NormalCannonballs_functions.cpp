#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_QuickAccesPoint_NormalCannonballs.BP_QuickAccesPoint_NormalCannonballs_C
// (Actor)

class UClass* ABP_QuickAccesPoint_NormalCannonballs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_QuickAccesPoint_NormalCannonballs_C");

	return Clss;
}


// BP_QuickAccesPoint_NormalCannonballs_C BP_QuickAccesPoint_NormalCannonballs.Default__BP_QuickAccesPoint_NormalCannonballs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_QuickAccesPoint_NormalCannonballs_C* ABP_QuickAccesPoint_NormalCannonballs_C::GetDefaultObj()
{
	static class ABP_QuickAccesPoint_NormalCannonballs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_QuickAccesPoint_NormalCannonballs_C*>(ABP_QuickAccesPoint_NormalCannonballs_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_QuickAccesPoint_NormalCannonballs.BP_QuickAccesPoint_NormalCannonballs_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_QuickAccesPoint_NormalCannonballs_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuickAccesPoint_NormalCannonballs_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_QuickAccesPoint_NormalCannonballs.BP_QuickAccesPoint_NormalCannonballs_C.GiveResources
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_QuickAccesPoint_NormalCannonballs_C::GiveResources()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuickAccesPoint_NormalCannonballs_C", "GiveResources");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_QuickAccesPoint_NormalCannonballs.BP_QuickAccesPoint_NormalCannonballs_C.AmountRepEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_QuickAccesPoint_NormalCannonballs_C::AmountRepEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuickAccesPoint_NormalCannonballs_C", "AmountRepEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_QuickAccesPoint_NormalCannonballs.BP_QuickAccesPoint_NormalCannonballs_C.ExecuteUbergraph_BP_QuickAccesPoint_NormalCannonballs
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_QuickAccessAmount_C*     K2Node_DynamicCast_AsUI_Quick_Access_Amount                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_QuickAccesPoint_NormalCannonballs_C::ExecuteUbergraph_BP_QuickAccesPoint_NormalCannonballs(int32 EntryPoint, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUI_QuickAccessAmount_C* K2Node_DynamicCast_AsUI_Quick_Access_Amount, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuickAccesPoint_NormalCannonballs_C", "ExecuteUbergraph_BP_QuickAccesPoint_NormalCannonballs");

	Params::ABP_QuickAccesPoint_NormalCannonballs_C_ExecuteUbergraph_BP_QuickAccesPoint_NormalCannonballs_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Quick_Access_Amount = K2Node_DynamicCast_AsUI_Quick_Access_Amount;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


