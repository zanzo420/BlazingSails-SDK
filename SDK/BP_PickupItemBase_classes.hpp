#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x3D8 - 0x3C9)
// BlueprintGeneratedClass BP_PickupItemBase.BP_PickupItemBase_C
class ABP_PickupItemBase_C : public ABP_PickupBase_C
{
public:
	uint8                                        Pad_2AAF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_PickupItemBase_C* GetDefaultObj();

	void TakePickup();
	void TakePickupLocal();
	void ExecuteUbergraph_BP_PickupItemBase(int32 EntryPoint, bool CallFunc_CheckIfRoomForItems_hasSpace, int32 CallFunc_CheckIfRoomForItems_amountOfRoom, int32 CallFunc_CheckIfRoomForItems_totalWeight, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FST_InventoryArray& K2Node_MakeStruct_ST_InventoryArray, bool CallFunc_CheckIfPlayerHasRoom_EnoughRoom, int32 CallFunc_CheckIfPlayerHasRoom_AmountOfRoom, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1);
};

}


