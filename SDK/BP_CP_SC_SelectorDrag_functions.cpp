#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CP_SC_SelectorDrag.BP_CP_SC_SelectorDrag_C
// (None)

class UClass* UBP_CP_SC_SelectorDrag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CP_SC_SelectorDrag_C");

	return Clss;
}


// BP_CP_SC_SelectorDrag_C BP_CP_SC_SelectorDrag.Default__BP_CP_SC_SelectorDrag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CP_SC_SelectorDrag_C* UBP_CP_SC_SelectorDrag_C::GetDefaultObj()
{
	static class UBP_CP_SC_SelectorDrag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CP_SC_SelectorDrag_C*>(UBP_CP_SC_SelectorDrag_C::StaticClass()->DefaultObject);

	return Default;
}

}


