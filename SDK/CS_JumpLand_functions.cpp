#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_JumpLand.CS_JumpLand_C
// (None)

class UClass* UCS_JumpLand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_JumpLand_C");

	return Clss;
}


// CS_JumpLand_C CS_JumpLand.Default__CS_JumpLand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_JumpLand_C* UCS_JumpLand_C::GetDefaultObj()
{
	static class UCS_JumpLand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_JumpLand_C*>(UCS_JumpLand_C::StaticClass()->DefaultObject);

	return Default;
}

}


