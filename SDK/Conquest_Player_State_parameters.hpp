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

// 0x40 (0x40 - 0x0)
// Function Conquest_Player_State.Conquest_Player_State_C.S_Set Loadout
struct AConquest_Player_State_C_S_Set_Loadout_Params
{
public:
	struct FST_Loadout                           Loadout;                                           // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function Conquest_Player_State.Conquest_Player_State_C.ExecuteUbergraph_Conquest_Player_State
struct AConquest_Player_State_C_ExecuteUbergraph_Conquest_Player_State_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3708[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_Loadout                           K2Node_CustomEvent_Loadout;                        // 0x8(0x40)(HasGetValueTypeHash)
};

}
}


