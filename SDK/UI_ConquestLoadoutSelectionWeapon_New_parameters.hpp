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

// 0x1 (0x1 - 0x0)
// Function UI_ConquestLoadoutSelectionWeapon_New.UI_ConquestLoadoutSelectionWeapon_New_C.PreConstruct
struct UUI_ConquestLoadoutSelectionWeapon_New_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x89 (0x89 - 0x0)
// Function UI_ConquestLoadoutSelectionWeapon_New.UI_ConquestLoadoutSelectionWeapon_New_C.ExecuteUbergraph_UI_ConquestLoadoutSelectionWeapon_New
struct UUI_ConquestLoadoutSelectionWeapon_New_C_ExecuteUbergraph_UI_ConquestLoadoutSelectionWeapon_New_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3626[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_Weapon_Data                       CallFunc_GetWeaponInfo_Out_Row;                    // 0x8(0x7B)(HasGetValueTypeHash)
	uint8                                        Pad_3627[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetWeaponInfo_Found;                      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


