#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x130 - 0x0)
// Function UI_DeletePresetConfirm.UI_DeletePresetConfirm_C.RemovePreset
struct UUI_DeletePresetConfirm_C_RemovePreset_Params
{
public:
	TArray<struct FST_ShipCustomizationPreset>   PresetArray;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FST_ShipCustomizationPreset           K2Node_MakeStruct_ST_ShipCustomizationPreset;      // 0x10(0x119)(HasGetValueTypeHash)
	uint8                                        Pad_276C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function UI_DeletePresetConfirm.UI_DeletePresetConfirm_C.GetPresetArray
struct UUI_DeletePresetConfirm_C_GetPresetArray_Params
{
public:
	TArray<struct FST_ShipCustomizationPreset>   ShipArray;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FST_ShipCustomizationPreset>   PirateArray;                                       // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FST_ShipCustomizationPreset>   NewParam1;                                         // 0x20(0x10)(Parm, OutParm)
};

// 0x19 (0x19 - 0x0)
// Function UI_DeletePresetConfirm.UI_DeletePresetConfirm_C.ExecuteUbergraph_UI_DeletePresetConfirm
struct UUI_DeletePresetConfirm_C_ExecuteUbergraph_UI_DeletePresetConfirm_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_276D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MainMenu_GameInstance_C*           K2Node_DynamicCast_AsBP_Main_Menu_Game_Instance;   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


