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
// Function BP_ProjectileExplosiveArrow.BP_ProjectileExplosiveArrow_C.PostHit
struct ABP_ProjectileExplosiveArrow_C_PostHit_Params
{
public:
	bool                                         ForceKilled_;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_ProjectileExplosiveArrow.BP_ProjectileExplosiveArrow_C.ExecuteUbergraph_BP_ProjectileExplosiveArrow
struct ABP_ProjectileExplosiveArrow_C_ExecuteUbergraph_BP_ProjectileExplosiveArrow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_ForceKilled_;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C2E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_AOEBase_C*                         CallFunc_SpawnAOE_AOEActorRef;                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

