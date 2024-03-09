#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ConquestLoadoutSelectionWeapon_New.UI_ConquestLoadoutSelectionWeapon_New_C
// (None)

class UClass* UUI_ConquestLoadoutSelectionWeapon_New_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ConquestLoadoutSelectionWeapon_New_C");

	return Clss;
}


// UI_ConquestLoadoutSelectionWeapon_New_C UI_ConquestLoadoutSelectionWeapon_New.Default__UI_ConquestLoadoutSelectionWeapon_New_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ConquestLoadoutSelectionWeapon_New_C* UUI_ConquestLoadoutSelectionWeapon_New_C::GetDefaultObj()
{
	static class UUI_ConquestLoadoutSelectionWeapon_New_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ConquestLoadoutSelectionWeapon_New_C*>(UUI_ConquestLoadoutSelectionWeapon_New_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ConquestLoadoutSelectionWeapon_New.UI_ConquestLoadoutSelectionWeapon_New_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ConquestLoadoutSelectionWeapon_New_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConquestLoadoutSelectionWeapon_New_C", "PreConstruct");

	Params::UUI_ConquestLoadoutSelectionWeapon_New_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ConquestLoadoutSelectionWeapon_New.UI_ConquestLoadoutSelectionWeapon_New_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ConquestLoadoutSelectionWeapon_New_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConquestLoadoutSelectionWeapon_New_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ConquestLoadoutSelectionWeapon_New.UI_ConquestLoadoutSelectionWeapon_New_C.Refresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ConquestLoadoutSelectionWeapon_New_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConquestLoadoutSelectionWeapon_New_C", "Refresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ConquestLoadoutSelectionWeapon_New.UI_ConquestLoadoutSelectionWeapon_New_C.ExecuteUbergraph_UI_ConquestLoadoutSelectionWeapon_New
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Weapon_Data             CallFunc_GetWeaponInfo_Out_Row                                   (HasGetValueTypeHash)
// bool                               CallFunc_GetWeaponInfo_Found                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ConquestLoadoutSelectionWeapon_New_C::ExecuteUbergraph_UI_ConquestLoadoutSelectionWeapon_New(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FST_Weapon_Data& CallFunc_GetWeaponInfo_Out_Row, bool CallFunc_GetWeaponInfo_Found)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ConquestLoadoutSelectionWeapon_New_C", "ExecuteUbergraph_UI_ConquestLoadoutSelectionWeapon_New");

	Params::UUI_ConquestLoadoutSelectionWeapon_New_C_ExecuteUbergraph_UI_ConquestLoadoutSelectionWeapon_New_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetWeaponInfo_Out_Row = CallFunc_GetWeaponInfo_Out_Row;
	Parms.CallFunc_GetWeaponInfo_Found = CallFunc_GetWeaponInfo_Found;

	UObject::ProcessEvent(Func, &Parms);

}

}


