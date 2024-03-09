#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SmallWheel.BP_SmallWheel_C
// (Actor)

class UClass* ABP_SmallWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SmallWheel_C");

	return Clss;
}


// BP_SmallWheel_C BP_SmallWheel.Default__BP_SmallWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SmallWheel_C* ABP_SmallWheel_C::GetDefaultObj()
{
	static class ABP_SmallWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SmallWheel_C*>(ABP_SmallWheel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SmallWheel.BP_SmallWheel_C.SetRotationSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              RotationSpeed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SmallWheel_C::SetRotationSpeed(float RotationSpeed, const struct FRotator& CallFunc_MakeRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SmallWheel_C", "SetRotationSpeed");

	Params::ABP_SmallWheel_C_SetRotationSpeed_Params Parms{};

	Parms.RotationSpeed = RotationSpeed;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


