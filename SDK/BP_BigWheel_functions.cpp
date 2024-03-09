#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BigWheel.BP_BigWheel_C
// (Actor)

class UClass* ABP_BigWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BigWheel_C");

	return Clss;
}


// BP_BigWheel_C BP_BigWheel.Default__BP_BigWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BigWheel_C* ABP_BigWheel_C::GetDefaultObj()
{
	static class ABP_BigWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BigWheel_C*>(ABP_BigWheel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BigWheel.BP_BigWheel_C.SetRotationSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              RotationSpeed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BigWheel_C::SetRotationSpeed(float RotationSpeed, const struct FRotator& CallFunc_MakeRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BigWheel_C", "SetRotationSpeed");

	Params::ABP_BigWheel_C_SetRotationSpeed_Params Parms{};

	Parms.RotationSpeed = RotationSpeed;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


