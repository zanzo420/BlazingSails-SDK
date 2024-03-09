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

// 0x280 (0x280 - 0x0)
// Function UI_ServerBrowser_MapFilter_Map.UI_ServerBrowser_MapFilter_Map_C.GetBrush_0
struct UUI_ServerBrowser_MapFilter_Map_C_GetBrush_0_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0x88)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x90(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0xB8(0x28)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0xE0(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x168(0x88)(None)
	bool                                         CallFunc_IsChecked_ReturnValue;                    // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_Select_Default;                             // 0x1F8(0x88)(None)
};

// 0x2 (0x2 - 0x0)
// Function UI_ServerBrowser_MapFilter_Map.UI_ServerBrowser_MapFilter_Map_C.IsChecked
struct UUI_ServerBrowser_MapFilter_Map_C_IsChecked_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsChecked_ReturnValue;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_ServerBrowser_MapFilter_Map.UI_ServerBrowser_MapFilter_Map_C.PreConstruct
struct UUI_ServerBrowser_MapFilter_Map_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_ServerBrowser_MapFilter_Map.UI_ServerBrowser_MapFilter_Map_C.BndEvt__MapCheckbox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
struct UUI_ServerBrowser_MapFilter_Map_C_BndEvt__MapCheckbox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x631 (0x631 - 0x0)
// Function UI_ServerBrowser_MapFilter_Map.UI_ServerBrowser_MapFilter_Map_C.ExecuteUbergraph_UI_ServerBrowser_MapFilter_Map
struct UUI_ServerBrowser_MapFilter_Map_C_ExecuteUbergraph_UI_ServerBrowser_MapFilter_Map_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39CE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x8(0x88)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCheckBoxStyle                        K2Node_MakeStruct_CheckBoxStyle;                   // 0x98(0x580)(None)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked;             // 0x618(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x620(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_GameInstance_C*                    K2Node_DynamicCast_AsBP_Game_Instance;             // 0x628(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x630(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


