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

// 0x218 (0x218 - 0x0)
// Function UI_KeyBind.UI_KeyBind_C.OnMouseWheel
struct UUI_KeyBind_C_OnMouseWheel_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           K2Node_MakeStruct_EventReply;                      // 0x160(0xB8)(None)
};

// 0x148 (0x148 - 0x0)
// Function UI_KeyBind.UI_KeyBind_C.SetKeyBinding
struct UUI_KeyBind_C_SetKeyBinding_Params
{
public:
	struct FInputChord                           InputKey;                                          // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         UseControllerKey;                                  // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A20[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetKeyDisplayName_Display_Name;           // 0x28(0x18)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A21[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputChord                           K2Node_MakeStruct_InputChord;                      // 0x48(0x20)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_InputChordInputChord_ReturnValue; // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A22[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetKeyDisplayName_Display_Name_1;         // 0x70(0x18)(None)
	struct FInputChord                           K2Node_MakeStruct_InputChord_1;                    // 0x88(0x20)(HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetKeyBind_Succesful_;                    // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_Actions                         CallFunc_SetKeyBind_ConflictingAction;             // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A23[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xC8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xE0(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x120(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x130(0x18)(None)
};

// 0x21A (0x21A - 0x0)
// Function UI_KeyBind.UI_KeyBind_C.OnPreviewKeyDown
struct UUI_KeyBind_C_OnPreviewKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x128(0xB8)(None)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x1E0(0x18)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord;                      // 0x1F8(0x20)(HasGetValueTypeHash)
	bool                                         CallFunc_Key_IsGamepadKey_ReturnValue;             // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x219(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function UI_KeyBind.UI_KeyBind_C.Tick
struct UUI_KeyBind_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function UI_KeyBind.UI_KeyBind_C.BndEvt__Key_K2Node_ComponentBoundEvent_4_OnKeySelected__DelegateSignature
struct UUI_KeyBind_C_BndEvt__Key_K2Node_ComponentBoundEvent_4_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function UI_KeyBind.UI_KeyBind_C.OnMouseEnter
struct UUI_KeyBind_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x70 (0x70 - 0x0)
// Function UI_KeyBind.UI_KeyBind_C.OnMouseLeave
struct UUI_KeyBind_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x20 (0x20 - 0x0)
// Function UI_KeyBind.UI_KeyBind_C.ControllerKeySelected
struct UUI_KeyBind_C_ControllerKeySelected_Params
{
public:
	struct FInputChord                           Input_Key;                                         // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_KeyBind.UI_KeyBind_C.ReinitializeKeyBind
struct UUI_KeyBind_C_ReinitializeKeyBind_Params
{
public:
	bool                                         IsControllerKeybind;                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5C7 (0x5C7 - 0x0)
// Function UI_KeyBind.UI_KeyBind_C.ExecuteUbergraph_UI_KeyBind
struct UUI_KeyBind_C_ExecuteUbergraph_UI_KeyBind_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x7(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Actions                         Temp_byte_Variable_3;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A24[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x28(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x40(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x58(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x70(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0x88(0x18)(None)
	class FText                                  Temp_text_Variable_6;                              // 0xA0(0x18)(None)
	class FText                                  Temp_text_Variable_7;                              // 0xB8(0x18)(None)
	class FText                                  Temp_text_Variable_8;                              // 0xD0(0x18)(None)
	class FText                                  Temp_text_Variable_9;                              // 0xE8(0x18)(None)
	class FText                                  Temp_text_Variable_10;                             // 0x100(0x18)(None)
	class FText                                  Temp_text_Variable_11;                             // 0x118(0x18)(None)
	class FText                                  Temp_text_Variable_12;                             // 0x130(0x18)(None)
	class FText                                  Temp_text_Variable_13;                             // 0x148(0x18)(None)
	class FText                                  Temp_text_Variable_14;                             // 0x160(0x18)(None)
	class FText                                  Temp_text_Variable_15;                             // 0x178(0x18)(None)
	class FText                                  Temp_text_Variable_16;                             // 0x190(0x18)(None)
	class FText                                  Temp_text_Variable_17;                             // 0x1A8(0x18)(None)
	class FText                                  Temp_text_Variable_18;                             // 0x1C0(0x18)(None)
	class FText                                  Temp_text_Variable_19;                             // 0x1D8(0x18)(None)
	class FText                                  Temp_text_Variable_20;                             // 0x1F0(0x18)(None)
	class FText                                  Temp_text_Variable_21;                             // 0x208(0x18)(None)
	class FText                                  Temp_text_Variable_22;                             // 0x220(0x18)(None)
	class FText                                  Temp_text_Variable_23;                             // 0x238(0x18)(None)
	class FText                                  Temp_text_Variable_24;                             // 0x250(0x18)(None)
	class FText                                  Temp_text_Variable_25;                             // 0x268(0x18)(None)
	class FText                                  Temp_text_Variable_26;                             // 0x280(0x18)(None)
	class FText                                  Temp_text_Variable_27;                             // 0x298(0x18)(None)
	class FText                                  Temp_text_Variable_28;                             // 0x2B0(0x18)(None)
	class FText                                  Temp_text_Variable_29;                             // 0x2C8(0x18)(None)
	class FText                                  Temp_text_Variable_30;                             // 0x2E0(0x18)(None)
	class FText                                  Temp_text_Variable_31;                             // 0x2F8(0x18)(None)
	class FText                                  Temp_text_Variable_32;                             // 0x310(0x18)(None)
	class FText                                  Temp_text_Variable_33;                             // 0x328(0x18)(None)
	class FText                                  Temp_text_Variable_34;                             // 0x340(0x18)(None)
	class FText                                  Temp_text_Variable_35;                             // 0x358(0x18)(None)
	class FText                                  Temp_text_Variable_36;                             // 0x370(0x18)(None)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x389(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A25[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry_1;                         // 0x38C(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x3C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  CallFunc_GetKeyBind_Key;                           // 0x3C8(0x18)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey;            // 0x3E0(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord;                      // 0x400(0x20)(HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default_1;                           // 0x420(0x18)(None)
	bool                                         CallFunc_SetKeyBind_Succesful_;                    // 0x438(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_Actions                         CallFunc_SetKeyBind_ConflictingAction;             // 0x439(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A26[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputChord                           K2Node_MakeStruct_InputChord_1;                    // 0x440(0x20)(HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x460(0x38)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0x498(0x70)(ConstParm)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0x508(0x70)(ConstParm)
	struct FInputChord                           K2Node_CustomEvent_input_Key;                      // 0x578(0x20)(HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x598(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasUserFocus_ReturnValue;                 // 0x5A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_IsControllerKeybind;            // 0x5A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x5A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A27[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetKeyDisplayName_Display_Name;           // 0x5A8(0x18)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x5C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x5C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x5C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x5C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x5C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x5C6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


