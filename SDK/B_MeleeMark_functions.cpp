#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_MeleeMark.B_MeleeMark_C
// (Actor)

class UClass* AB_MeleeMark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_MeleeMark_C");

	return Clss;
}


// B_MeleeMark_C B_MeleeMark.Default__B_MeleeMark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_MeleeMark_C* AB_MeleeMark_C::GetDefaultObj()
{
	static class AB_MeleeMark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_MeleeMark_C*>(AB_MeleeMark_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_MeleeMark.B_MeleeMark_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_MeleeMark_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MeleeMark_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MeleeMark.B_MeleeMark_C.ExecuteUbergraph_B_MeleeMark
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_MeleeMark_C::ExecuteUbergraph_B_MeleeMark(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MeleeMark_C", "ExecuteUbergraph_B_MeleeMark");

	Params::AB_MeleeMark_C_ExecuteUbergraph_B_MeleeMark_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


