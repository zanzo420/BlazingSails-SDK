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

// 0x10 (0x10 - 0x0)
// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Set Epic Token
struct UEOS_PartyMemberReference_C_Set_Epic_Token_Params
{
public:
	class FString                                Token;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Set Steam Token
struct UEOS_PartyMemberReference_C_Set_Steam_Token_Params
{
public:
	class FString                                Token;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Set Restricted
struct UEOS_PartyMemberReference_C_Set_Restricted_Params
{
public:
	bool                                         Restricted;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Set Player Level
struct UEOS_PartyMemberReference_C_Set_Player_Level_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x81 (0x81 - 0x0)
// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Set Player Cosmetics
struct UEOS_PartyMemberReference_C_Set_Player_Cosmetics_Params
{
public:
	struct FST_PlayerCustomisation               Player_Cosmetics;                                  // 0x0(0x6C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_StructToJsonObjectStringV2_OutJsonString; // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_StructToJsonObjectStringV2_ReturnValue;   // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x89 (0x89 - 0x0)
// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Set Ship Cosmetics
struct UEOS_PartyMemberReference_C_Set_Ship_Cosmetics_Params
{
public:
	struct FST_ShipCustomisations                Ship_Cosmetics;                                    // 0x0(0x74)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_28E9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_StructToJsonObjectStringV2_OutJsonString; // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_StructToJsonObjectStringV2_ReturnValue;   // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x138 (0x138 - 0x0)
// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Set All Atributes
struct UEOS_PartyMemberReference_C_Set_All_Atributes_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Primary_Acount_ID;                                 // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Ready_State;                                       // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Curse_State;                                       // 0x21(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28EA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_ShipCustomisations                Ship_Cosmetics;                                    // 0x28(0x74)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_28EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_PlayerCustomisation               Player_Cosmetics;                                  // 0xA0(0x6C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Level;                                             // 0x10C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Restricted;                                        // 0x110(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Steam_Token;                                       // 0x118(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Epic_Token;                                        // 0x128(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8D (0x8D - 0x0)
// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Player Cosmetics Updated
struct UEOS_PartyMemberReference_C_Player_Cosmetics_Updated_Params
{
public:
	int32                                        CallFunc_Get_Data_Int;                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28ED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Get_Data_string;                          // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Get_Data_float;                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Data_bool;                            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_PlayerCustomisation               CallFunc_JsonStringToStructV2_Struct;              // 0x20(0x6C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_JsonStringToStructV2_ReturnValue;         // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x99 (0x99 - 0x0)
// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Ship Cosmetics Updated
struct UEOS_PartyMemberReference_C_Ship_Cosmetics_Updated_Params
{
public:
	int32                                        CallFunc_Get_Data_Int;                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28EF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Get_Data_string;                          // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Get_Data_float;                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Data_bool;                            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_ShipCustomisations                CallFunc_JsonStringToStructV2_Struct;              // 0x20(0x74)(HasGetValueTypeHash)
	uint8                                        Pad_28F1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_JsonStringToStructV2_ReturnValue;         // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D (0x1D - 0x0)
// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Get Ready
struct UEOS_PartyMemberReference_C_Get_Ready_Params
{
public:
	bool                                         Ready;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Get_Data_Int;                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Get_Data_string;                          // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Get_Data_float;                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Data_bool;                            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Set Ready
struct UEOS_PartyMemberReference_C_Set_Ready_Params
{
public:
	bool                                         Ready;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x98 (0x98 - 0x0)
// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Create Attributes
struct UEOS_PartyMemberReference_C_Create_Attributes_Params
{
public:
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28F3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_1;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_2;                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_3;                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x30(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x40(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_4;                // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_5;                // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_6;                // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_8;            // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_7;                // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_9;            // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_8;                // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEOS_Party_Member_Replicated_Attribute_C* CallFunc_SpawnObject_ReturnValue_9;                // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.Get User ID
struct UEOS_PartyMemberReference_C_Get_User_ID_Params
{
public:
	struct FUniqueNetIdRepl                      User_ID;                                           // 0x0(0x28)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.ToString
struct UEOS_PartyMemberReference_C_ToString_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue; // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EOS_PartyMemberReference.EOS_PartyMemberReference_C.ExecuteUbergraph_EOS_PartyMemberReference
struct UEOS_PartyMemberReference_C_ExecuteUbergraph_EOS_PartyMemberReference_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


