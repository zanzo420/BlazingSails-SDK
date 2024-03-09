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

// 0x38 (0x38 - 0x0)
// UserDefinedStruct ST_ShipSpawnQueue.ST_ShipSpawnQueue
struct FST_ShipSpawnQueue
{
public:
	class UClass*                                ShipClass_3_976955E64F84916CA94DAB9AE42721F6;      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FleetID_5_95B94FA547E4A5888175D2893D3F622A;        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TeamID_7_EC95700F42BC34CA05D6C18A095FC36A;         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BoatMeshBase_C*                    ShipRef_16_F70F8B5B49943FCF9C65E583190F83A3;       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class E_Items>                   Upgrades_14_D3F398524D194AAC065A9EBF0187F409;      // 0x18(0x10)(Edit, BlueprintVisible)
	TArray<struct FST_InventoryArray>            ShipInventory_20_72F6FAB644335C30575E84B6B59FC2FA; // 0x28(0x10)(Edit, BlueprintVisible)
};

}


