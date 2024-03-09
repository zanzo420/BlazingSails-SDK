#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x60 - 0x0)
// UserDefinedStruct ST_InventoryItem.ST_InventoryItem
struct FST_InventoryItem
{
public:
	enum class E_Items                           Item_47_AD038E4149F397A128EC70B39EEBF559;          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_277D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Icon_8_B88B140845A69170C5EC16BAA395DE6A;           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Weight_24_0258AF7E4D6BD8B2C6D6FB962BFB8DBF;        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_277E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ItemObject_27_64AFEC624FDC6D6911452A84C7E1098F;    // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Throwable_29_F705F00A48DF63FA2DB255B43050F8AC;     // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_ItemCategories                  Category_36_39D2F8CE4F87014588B6819B88E68764;      // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_277F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Description_39_BDD5428F48FF6943468AB489A52D2099;   // 0x28(0x18)(Edit, BlueprintVisible)
	bool                                         DevOnly_41_A9E7BD074C82B0789ECD2BB7EEB2570F;       // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2780[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ActualName_44_6AFFA64746EFDD6414190A95D0F9FD00;    // 0x48(0x18)(Edit, BlueprintVisible)
};

}


