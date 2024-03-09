#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LV_SanderGlobalLightMainMenu_Day.LV_SanderGlobalLightMainMenu_Day_C
// (Actor)

class UClass* ALV_SanderGlobalLightMainMenu_Day_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LV_SanderGlobalLightMainMenu_Day_C");

	return Clss;
}


// LV_SanderGlobalLightMainMenu_Day_C LV_SanderGlobalLightMainMenu_Day.Default__LV_SanderGlobalLightMainMenu_Day_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALV_SanderGlobalLightMainMenu_Day_C* ALV_SanderGlobalLightMainMenu_Day_C::GetDefaultObj()
{
	static class ALV_SanderGlobalLightMainMenu_Day_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALV_SanderGlobalLightMainMenu_Day_C*>(ALV_SanderGlobalLightMainMenu_Day_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LV_SanderGlobalLightMainMenu_Day.LV_SanderGlobalLightMainMenu_Day_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALV_SanderGlobalLightMainMenu_Day_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LV_SanderGlobalLightMainMenu_Day_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LV_SanderGlobalLightMainMenu_Day.LV_SanderGlobalLightMainMenu_Day_C.ExecuteUbergraph_LV_SanderGlobalLightMainMenu_Day
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GameInstance_C*          K2Node_DynamicCast_AsBP_Game_Instance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALV_SanderGlobalLightMainMenu_Day_C::ExecuteUbergraph_LV_SanderGlobalLightMainMenu_Day(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_GameInstance_C* K2Node_DynamicCast_AsBP_Game_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LV_SanderGlobalLightMainMenu_Day_C", "ExecuteUbergraph_LV_SanderGlobalLightMainMenu_Day");

	Params::ALV_SanderGlobalLightMainMenu_Day_C_ExecuteUbergraph_LV_SanderGlobalLightMainMenu_Day_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_Instance = K2Node_DynamicCast_AsBP_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


