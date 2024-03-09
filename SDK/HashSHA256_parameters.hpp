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

// 0x20 (0x20 - 0x0)
// Function HashSHA256.HashSHA256BPLibrary.GetHash
struct UHashSHA256BPLibrary_GetHash_Params
{
public:
	struct FSHA256Hash                           Sha256;                                            // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function HashSHA256.HashSHA256BPLibrary.FromString
struct UHashSHA256BPLibrary_FromString_Params
{
public:
	struct FSHA256Hash                           Sha256;                                            // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Str;                                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function HashSHA256.HashSHA256BPLibrary.FromFile
struct UHashSHA256BPLibrary_FromFile_Params
{
public:
	struct FSHA256Hash                           Sha256;                                            // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function HashSHA256.HashSHA256BPLibrary.FromArray
struct UHashSHA256BPLibrary_FromArray_Params
{
public:
	struct FSHA256Hash                           Sha256;                                            // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<uint8>                                Arr;                                               // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}


