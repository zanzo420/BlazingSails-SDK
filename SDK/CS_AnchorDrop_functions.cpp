#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_AnchorDrop.CS_AnchorDrop_C
// (None)

class UClass* UCS_AnchorDrop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_AnchorDrop_C");

	return Clss;
}


// CS_AnchorDrop_C CS_AnchorDrop.Default__CS_AnchorDrop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_AnchorDrop_C* UCS_AnchorDrop_C::GetDefaultObj()
{
	static class UCS_AnchorDrop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_AnchorDrop_C*>(UCS_AnchorDrop_C::StaticClass()->DefaultObject);

	return Default;
}

}


