#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_KrakenBreathing.CS_KrakenBreathing_C
// (None)

class UClass* UCS_KrakenBreathing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_KrakenBreathing_C");

	return Clss;
}


// CS_KrakenBreathing_C CS_KrakenBreathing.Default__CS_KrakenBreathing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_KrakenBreathing_C* UCS_KrakenBreathing_C::GetDefaultObj()
{
	static class UCS_KrakenBreathing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_KrakenBreathing_C*>(UCS_KrakenBreathing_C::StaticClass()->DefaultObject);

	return Default;
}

}


