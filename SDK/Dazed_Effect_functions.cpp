#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Dazed_Effect.Dazed_Effect_C
// (Actor)

class UClass* ADazed_Effect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dazed_Effect_C");

	return Clss;
}


// Dazed_Effect_C Dazed_Effect.Default__Dazed_Effect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADazed_Effect_C* ADazed_Effect_C::GetDefaultObj()
{
	static class ADazed_Effect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADazed_Effect_C*>(ADazed_Effect_C::StaticClass()->DefaultObject);

	return Default;
}

}


