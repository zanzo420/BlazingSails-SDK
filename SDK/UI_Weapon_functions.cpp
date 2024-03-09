#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Weapon.UI_Weapon_C
// (None)

class UClass* UUI_Weapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Weapon_C");

	return Clss;
}


// UI_Weapon_C UI_Weapon.Default__UI_Weapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Weapon_C* UUI_Weapon_C::GetDefaultObj()
{
	static class UUI_Weapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Weapon_C*>(UUI_Weapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Weapon.UI_Weapon_C.SetReloadingVisbility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_WeaponRangedBase_C*      K2Node_DynamicCast_AsBP_Weapon_Ranged_Base                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_Weapon_C::SetReloadingVisbility(bool CallFunc_IsValid_ReturnValue, class ABP_WeaponRangedBase_C* K2Node_DynamicCast_AsBP_Weapon_Ranged_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Weapon_C", "SetReloadingVisbility");

	Params::UUI_Weapon_C_SetReloadingVisbility_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Ranged_Base = K2Node_DynamicCast_AsBP_Weapon_Ranged_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Weapon.UI_Weapon_C.SetReloadingPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_WeaponRangedBase_C*      K2Node_DynamicCast_AsBP_Weapon_Ranged_Base                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUI_Weapon_C::SetReloadingPercent(class ABP_WeaponRangedBase_C* K2Node_DynamicCast_AsBP_Weapon_Ranged_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Weapon_C", "SetReloadingPercent");

	Params::UUI_Weapon_C_SetReloadingPercent_Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_Weapon_Ranged_Base = K2Node_DynamicCast_AsBP_Weapon_Ranged_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


