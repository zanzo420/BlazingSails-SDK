#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_AnchorDropped.CS_AnchorDropped_C
// (None)

class UClass* UCS_AnchorDropped_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_AnchorDropped_C");

	return Clss;
}


// CS_AnchorDropped_C CS_AnchorDropped.Default__CS_AnchorDropped_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_AnchorDropped_C* UCS_AnchorDropped_C::GetDefaultObj()
{
	static class UCS_AnchorDropped_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_AnchorDropped_C*>(UCS_AnchorDropped_C::StaticClass()->DefaultObject);

	return Default;
}

}


