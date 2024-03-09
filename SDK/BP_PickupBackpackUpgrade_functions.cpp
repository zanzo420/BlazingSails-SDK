#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupBackpackUpgrade.BP_PickupBackpackUpgrade_C
// (Actor)

class UClass* ABP_PickupBackpackUpgrade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupBackpackUpgrade_C");

	return Clss;
}


// BP_PickupBackpackUpgrade_C BP_PickupBackpackUpgrade.Default__BP_PickupBackpackUpgrade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickupBackpackUpgrade_C* ABP_PickupBackpackUpgrade_C::GetDefaultObj()
{
	static class ABP_PickupBackpackUpgrade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickupBackpackUpgrade_C*>(ABP_PickupBackpackUpgrade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupBackpackUpgrade.BP_PickupBackpackUpgrade_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             LocalCharacterRef                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PickupBackpackUpgrade_C::Activate(class ABP_Character_C* LocalCharacterRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupBackpackUpgrade_C", "Activate");

	Params::ABP_PickupBackpackUpgrade_C_Activate_Params Parms{};

	Parms.LocalCharacterRef = LocalCharacterRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PickupBackpackUpgrade.BP_PickupBackpackUpgrade_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PickupBackpackUpgrade_C::S_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupBackpackUpgrade_C", "S_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PickupBackpackUpgrade.BP_PickupBackpackUpgrade_C.ExecuteUbergraph_BP_PickupBackpackUpgrade
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_GameState_C*             K2Node_DynamicCast_AsBP_Game_State                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Character_C*             K2Node_Event_LocalCharacterRef                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpgradeInventory_Upgraded                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PickupBackpackUpgrade_C::ExecuteUbergraph_BP_PickupBackpackUpgrade(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_IsClosed_Variable, class ABP_Character_C* K2Node_Event_LocalCharacterRef, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_UpgradeInventory_Upgraded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupBackpackUpgrade_C", "ExecuteUbergraph_BP_PickupBackpackUpgrade");

	Params::ABP_PickupBackpackUpgrade_C_ExecuteUbergraph_BP_PickupBackpackUpgrade_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_DynamicCast_AsBP_Game_State = K2Node_DynamicCast_AsBP_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_LocalCharacterRef = K2Node_Event_LocalCharacterRef;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_UpgradeInventory_Upgraded = CallFunc_UpgradeInventory_Upgraded;

	UObject::ProcessEvent(Func, &Parms);

}

}


