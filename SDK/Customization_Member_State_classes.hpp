#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x1B8 - 0xB0)
// BlueprintGeneratedClass Customization_Member_State.Customization_Member_State_C
class UCustomization_Member_State_C : public UActorComponent
{
public:
	struct FST_PlayerCustomisation               Player_Customization;                              // 0xB0(0x6C)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1426[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_ShipCustomisations                Ship_Customization;                                // 0x120(0x74)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_1427[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class E_ShipTypes>               Ship_Type_Array;                                   // 0x198(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	TArray<struct FST_ShipCustomisations>        Ship_Customizations;                               // 0x1A8(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UCustomization_Member_State_C* GetDefaultObj();

	void Get_Ship_Customization(enum class E_ShipTypes Ship_Type, struct FST_ShipCustomisations* Output, const struct FST_ShipCustomisations& K2Node_MakeStruct_ST_ShipCustomisations, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FST_ShipCustomisations& CallFunc_Array_Get_Item);
	void Set_Ship_Customizations(TMap<enum class E_ShipTypes, struct FST_ShipCustomisations> Ship_Customizations, TArray<enum class E_ShipTypes>& CallFunc_Map_Keys_Keys, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, enum class E_ShipTypes CallFunc_Array_Get_Item, const struct FST_ShipCustomisations& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Set_Ship_Customization(enum class E_ShipTypes Ship_Type, const struct FST_ShipCustomisations& Ship_Customization, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
};

}


