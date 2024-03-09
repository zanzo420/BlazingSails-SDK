#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionPaintSpray.BP_ActionPaintSpray_C
// (Actor)

class UClass* ABP_ActionPaintSpray_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionPaintSpray_C");

	return Clss;
}


// BP_ActionPaintSpray_C BP_ActionPaintSpray.Default__BP_ActionPaintSpray_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActionPaintSpray_C* ABP_ActionPaintSpray_C::GetDefaultObj()
{
	static class ABP_ActionPaintSpray_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActionPaintSpray_C*>(ABP_ActionPaintSpray_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionPaintSpray.BP_ActionPaintSpray_C.StartAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActionPaintSpray_C::StartAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPaintSpray_C", "StartAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionPaintSpray.BP_ActionPaintSpray_C.ExecuteUbergraph_BP_ActionPaintSpray
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActionPaintSpray_C::ExecuteUbergraph_BP_ActionPaintSpray(int32 EntryPoint, const struct FVector& CallFunc_GetForwardVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPaintSpray_C", "ExecuteUbergraph_BP_ActionPaintSpray");

	Params::ABP_ActionPaintSpray_C_ExecuteUbergraph_BP_ActionPaintSpray_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


