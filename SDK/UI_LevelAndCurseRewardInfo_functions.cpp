#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_LevelAndCurseRewardInfo.UI_LevelAndCurseRewardInfo_C
// (None)

class UClass* UUI_LevelAndCurseRewardInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_LevelAndCurseRewardInfo_C");

	return Clss;
}


// UI_LevelAndCurseRewardInfo_C UI_LevelAndCurseRewardInfo.Default__UI_LevelAndCurseRewardInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_LevelAndCurseRewardInfo_C* UUI_LevelAndCurseRewardInfo_C::GetDefaultObj()
{
	static class UUI_LevelAndCurseRewardInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_LevelAndCurseRewardInfo_C*>(UUI_LevelAndCurseRewardInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_LevelAndCurseRewardInfo.UI_LevelAndCurseRewardInfo_C.GetBrushColor_1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UUI_LevelAndCurseRewardInfo_C::GetBrushColor_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LevelAndCurseRewardInfo_C", "GetBrushColor_1");

	Params::UUI_LevelAndCurseRewardInfo_C_GetBrushColor_1_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_LevelAndCurseRewardInfo.UI_LevelAndCurseRewardInfo_C.GetBrushColor_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetItemRarityInfo_Color                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemRarityInfo_RarityName                            (None)
// class USoundBase*                  CallFunc_GetItemRarityInfo_UnlockSound                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UUI_LevelAndCurseRewardInfo_C::GetBrushColor_0(const struct FLinearColor& CallFunc_GetItemRarityInfo_Color, class FText CallFunc_GetItemRarityInfo_RarityName, class USoundBase* CallFunc_GetItemRarityInfo_UnlockSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LevelAndCurseRewardInfo_C", "GetBrushColor_0");

	Params::UUI_LevelAndCurseRewardInfo_C_GetBrushColor_0_Params Parms{};

	Parms.CallFunc_GetItemRarityInfo_Color = CallFunc_GetItemRarityInfo_Color;
	Parms.CallFunc_GetItemRarityInfo_RarityName = CallFunc_GetItemRarityInfo_RarityName;
	Parms.CallFunc_GetItemRarityInfo_UnlockSound = CallFunc_GetItemRarityInfo_UnlockSound;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_LevelAndCurseRewardInfo.UI_LevelAndCurseRewardInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_LevelAndCurseRewardInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LevelAndCurseRewardInfo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_LevelAndCurseRewardInfo.UI_LevelAndCurseRewardInfo_C.ExecuteUbergraph_UI_LevelAndCurseRewardInfo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_LevelAndCurseRewardInfo_C::ExecuteUbergraph_UI_LevelAndCurseRewardInfo(int32 EntryPoint, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LevelAndCurseRewardInfo_C", "ExecuteUbergraph_UI_LevelAndCurseRewardInfo");

	Params::UUI_LevelAndCurseRewardInfo_C_ExecuteUbergraph_UI_LevelAndCurseRewardInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


