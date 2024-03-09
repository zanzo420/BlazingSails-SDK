#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ContainerPlayerDeathChest.BP_ContainerPlayerDeathChest_C
// (Actor)

class UClass* ABP_ContainerPlayerDeathChest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ContainerPlayerDeathChest_C");

	return Clss;
}


// BP_ContainerPlayerDeathChest_C BP_ContainerPlayerDeathChest.Default__BP_ContainerPlayerDeathChest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ContainerPlayerDeathChest_C* ABP_ContainerPlayerDeathChest_C::GetDefaultObj()
{
	static class ABP_ContainerPlayerDeathChest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ContainerPlayerDeathChest_C*>(ABP_ContainerPlayerDeathChest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ContainerPlayerDeathChest.BP_ContainerPlayerDeathChest_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ContainerPlayerDeathChest_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContainerPlayerDeathChest_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ContainerPlayerDeathChest.BP_ContainerPlayerDeathChest_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ContainerPlayerDeathChest_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContainerPlayerDeathChest_C", "ReceiveTick");

	Params::ABP_ContainerPlayerDeathChest_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ContainerPlayerDeathChest.BP_ContainerPlayerDeathChest_C.Destroy Self
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ContainerPlayerDeathChest_C::Destroy_Self()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContainerPlayerDeathChest_C", "Destroy Self");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ContainerPlayerDeathChest.BP_ContainerPlayerDeathChest_C.ExecuteUbergraph_BP_ContainerPlayerDeathChest
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_GameMode_C*           K2Node_DynamicCast_AsAlpha_Game_Mode                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ContainerPlayerDeathChest_C::ExecuteUbergraph_BP_ContainerPlayerDeathChest(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AAlpha_GameMode_C* K2Node_DynamicCast_AsAlpha_Game_Mode, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContainerPlayerDeathChest_C", "ExecuteUbergraph_BP_ContainerPlayerDeathChest");

	Params::ABP_ContainerPlayerDeathChest_C_ExecuteUbergraph_BP_ContainerPlayerDeathChest_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsAlpha_Game_Mode = K2Node_DynamicCast_AsAlpha_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


