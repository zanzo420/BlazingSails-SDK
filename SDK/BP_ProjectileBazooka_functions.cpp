#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileBazooka.BP_ProjectileBazooka_C
// (Actor)

class UClass* ABP_ProjectileBazooka_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileBazooka_C");

	return Clss;
}


// BP_ProjectileBazooka_C BP_ProjectileBazooka.Default__BP_ProjectileBazooka_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileBazooka_C* ABP_ProjectileBazooka_C::GetDefaultObj()
{
	static class ABP_ProjectileBazooka_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileBazooka_C*>(ABP_ProjectileBazooka_C::StaticClass()->DefaultObject);

	return Default;
}

}


