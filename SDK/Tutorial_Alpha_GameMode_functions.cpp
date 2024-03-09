#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tutorial_Alpha_GameMode.Tutorial_Alpha_GameMode_C
// (Actor)

class UClass* ATutorial_Alpha_GameMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tutorial_Alpha_GameMode_C");

	return Clss;
}


// Tutorial_Alpha_GameMode_C Tutorial_Alpha_GameMode.Default__Tutorial_Alpha_GameMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATutorial_Alpha_GameMode_C* ATutorial_Alpha_GameMode_C::GetDefaultObj()
{
	static class ATutorial_Alpha_GameMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATutorial_Alpha_GameMode_C*>(ATutorial_Alpha_GameMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Tutorial_Alpha_GameMode.Tutorial_Alpha_GameMode_C.CharacterSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_PlayerController_C*   Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATutorial_Alpha_GameMode_C::CharacterSpawned(class APawn* Character, class AAlpha_PlayerController_C* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tutorial_Alpha_GameMode_C", "CharacterSpawned");

	Params::ATutorial_Alpha_GameMode_C_CharacterSpawned_Params Parms{};

	Parms.Character = Character;
	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tutorial_Alpha_GameMode.Tutorial_Alpha_GameMode_C.Game Started
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATutorial_Alpha_GameMode_C::Game_Started()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tutorial_Alpha_GameMode_C", "Game Started");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tutorial_Alpha_GameMode.Tutorial_Alpha_GameMode_C.ExecuteUbergraph_Tutorial_Alpha_GameMode
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOS_GameInstance_C*         CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_PlayerController_C*   K2Node_Event_Controller                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAlpha_PlayerController_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Controller_C*            K2Node_DynamicCast_AsBP_Controller                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATutorial_Alpha_GameMode_C::ExecuteUbergraph_Tutorial_Alpha_GameMode(int32 EntryPoint, class UEOS_GameInstance_C* CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APawn* K2Node_Event_Character, class AAlpha_PlayerController_C* K2Node_Event_Controller, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class AAlpha_PlayerController_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABP_Controller_C* K2Node_DynamicCast_AsBP_Controller, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tutorial_Alpha_GameMode_C", "ExecuteUbergraph_Tutorial_Alpha_GameMode");

	Params::ATutorial_Alpha_GameMode_C_ExecuteUbergraph_Tutorial_Alpha_GameMode_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance = CallFunc_Current_Game_EOS_Instance_AsEOS_Game_Instance;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Controller = K2Node_DynamicCast_AsBP_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


