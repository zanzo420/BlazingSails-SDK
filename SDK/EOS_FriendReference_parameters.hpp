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

// 0x28 (0x28 - 0x0)
// Function EOS_FriendReference.EOS_FriendReference_C.Get Platform
struct UEOS_FriendReference_C_Get_Platform_Params
{
public:
	class FString                                Platform_Name;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetUserAttribute_Found;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2835[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetUserAttribute_ReturnValue;             // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function EOS_FriendReference.EOS_FriendReference_C.Get Unique Net Id
struct UEOS_FriendReference_C_Get_Unique_Net_Id_Params
{
public:
	struct FUniqueNetIdRepl                      ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetUserId_ReturnValue;                    // 0x28(0x28)(HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function EOS_FriendReference.EOS_FriendReference_C.ExecuteUbergraph_EOS_FriendReference
struct UEOS_FriendReference_C_ExecuteUbergraph_EOS_FriendReference_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2836[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Get_Platform_Platform_Name;               // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetUserAttribute_Found;                   // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2837[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetUserAttribute_ReturnValue;             // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

}
}


