#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cloud_5_MainMenu.Cloud_5_MainMenu_C
// (Actor)

class UClass* ACloud_5_MainMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cloud_5_MainMenu_C");

	return Clss;
}


// Cloud_5_MainMenu_C Cloud_5_MainMenu.Default__Cloud_5_MainMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACloud_5_MainMenu_C* ACloud_5_MainMenu_C::GetDefaultObj()
{
	static class ACloud_5_MainMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACloud_5_MainMenu_C*>(ACloud_5_MainMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cloud_5_MainMenu.Cloud_5_MainMenu_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACloud_5_MainMenu_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cloud_5_MainMenu_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cloud_5_MainMenu.Cloud_5_MainMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACloud_5_MainMenu_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cloud_5_MainMenu_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cloud_5_MainMenu.Cloud_5_MainMenu_C.ExecuteUbergraph_Cloud_5_MainMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACloud_5_MainMenu_C::ExecuteUbergraph_Cloud_5_MainMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cloud_5_MainMenu_C", "ExecuteUbergraph_Cloud_5_MainMenu");

	Params::ACloud_5_MainMenu_C_ExecuteUbergraph_Cloud_5_MainMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


