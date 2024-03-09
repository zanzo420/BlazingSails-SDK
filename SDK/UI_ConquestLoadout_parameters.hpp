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
// Function UI_ConquestLoadout.UI_ConquestLoadout_C.PreConstruct
struct UUI_ConquestLoadout_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x169 (0x169 - 0x0)
// Function UI_ConquestLoadout.UI_ConquestLoadout_C.ExecuteUbergraph_UI_ConquestLoadout
struct UUI_ConquestLoadout_C_ExecuteUbergraph_UI_ConquestLoadout_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3629[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x8(0x28)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x30(0x88)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0xB8(0x28)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0xE0(0x88)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UI_ConquestLoadout.UI_ConquestLoadout_C.OnSelected__DelegateSignature
struct UUI_ConquestLoadout_C_OnSelected__DelegateSignature_Params
{
public:
	class UUI_ConquestLoadout_C*                 Selected_Element;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


