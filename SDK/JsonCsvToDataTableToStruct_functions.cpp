#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class JsonCsvToDataTableToStruct.JsonCsvToDataTableToStructBPLibrary
// (None)

class UClass* UJsonCsvToDataTableToStructBPLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JsonCsvToDataTableToStructBPLibrary");

	return Clss;
}


// JsonCsvToDataTableToStructBPLibrary JsonCsvToDataTableToStruct.Default__JsonCsvToDataTableToStructBPLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UJsonCsvToDataTableToStructBPLibrary* UJsonCsvToDataTableToStructBPLibrary::GetDefaultObj()
{
	static class UJsonCsvToDataTableToStructBPLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UJsonCsvToDataTableToStructBPLibrary*>(UJsonCsvToDataTableToStructBPLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function JsonCsvToDataTableToStruct.JsonCsvToDataTableToStructBPLibrary.WriteDataTableToJson
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDataTable*                  InDataTable                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ExportedText                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonCsvToDataTableToStructBPLibrary::WriteDataTableToJson(class UDataTable* InDataTable, class FString* ExportedText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonCsvToDataTableToStructBPLibrary", "WriteDataTableToJson");

	Params::UJsonCsvToDataTableToStructBPLibrary_WriteDataTableToJson_Params Parms{};

	Parms.InDataTable = InDataTable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExportedText != nullptr)
		*ExportedText = std::move(Parms.ExportedText);

	return Parms.ReturnValue;

}


// Function JsonCsvToDataTableToStruct.JsonCsvToDataTableToStructBPLibrary.WriteDataTableToCsv
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDataTable*                  InDataTable                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ExportedText                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonCsvToDataTableToStructBPLibrary::WriteDataTableToCsv(class UDataTable* InDataTable, class FString* ExportedText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonCsvToDataTableToStructBPLibrary", "WriteDataTableToCsv");

	Params::UJsonCsvToDataTableToStructBPLibrary_WriteDataTableToCsv_Params Parms{};

	Parms.InDataTable = InDataTable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExportedText != nullptr)
		*ExportedText = std::move(Parms.ExportedText);

	return Parms.ReturnValue;

}


// Function JsonCsvToDataTableToStruct.JsonCsvToDataTableToStructBPLibrary.UrlEncode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      UnencodedString                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UJsonCsvToDataTableToStructBPLibrary::UrlEncode(const class FString& UnencodedString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonCsvToDataTableToStructBPLibrary", "UrlEncode");

	Params::UJsonCsvToDataTableToStructBPLibrary_UrlEncode_Params Parms{};

	Parms.UnencodedString = UnencodedString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function JsonCsvToDataTableToStruct.JsonCsvToDataTableToStructBPLibrary.StructToJsonObjectStringV2
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      OutJsonString                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStruct*                     Struct                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonCsvToDataTableToStructBPLibrary::StructToJsonObjectStringV2(class FString* OutJsonString, class UStruct* Struct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonCsvToDataTableToStructBPLibrary", "StructToJsonObjectStringV2");

	Params::UJsonCsvToDataTableToStructBPLibrary_StructToJsonObjectStringV2_Params Parms{};

	Parms.Struct = Struct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutJsonString != nullptr)
		*OutJsonString = std::move(Parms.OutJsonString);

	return Parms.ReturnValue;

}


// Function JsonCsvToDataTableToStruct.JsonCsvToDataTableToStructBPLibrary.StructToJsonObjectString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      OutJsonString                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScriptStruct*               Struct                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonCsvToDataTableToStructBPLibrary::StructToJsonObjectString(class FString* OutJsonString, class UScriptStruct* Struct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonCsvToDataTableToStructBPLibrary", "StructToJsonObjectString");

	Params::UJsonCsvToDataTableToStructBPLibrary_StructToJsonObjectString_Params Parms{};

	Parms.Struct = Struct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutJsonString != nullptr)
		*OutJsonString = std::move(Parms.OutJsonString);

	return Parms.ReturnValue;

}


// Function JsonCsvToDataTableToStruct.JsonCsvToDataTableToStructBPLibrary.StructArrayToJsonObjectStringV2
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      OutJsonString                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UScriptStruct*>       StructArray                                                      (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonCsvToDataTableToStructBPLibrary::StructArrayToJsonObjectStringV2(class FString* OutJsonString, const TArray<class UScriptStruct*>& StructArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonCsvToDataTableToStructBPLibrary", "StructArrayToJsonObjectStringV2");

	Params::UJsonCsvToDataTableToStructBPLibrary_StructArrayToJsonObjectStringV2_Params Parms{};

	Parms.StructArray = StructArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutJsonString != nullptr)
		*OutJsonString = std::move(Parms.OutJsonString);

	return Parms.ReturnValue;

}


// Function JsonCsvToDataTableToStruct.JsonCsvToDataTableToStructBPLibrary.StructArrayToJsonObjectString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      OutJsonString                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UScriptStruct*>       StructArray                                                      (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonCsvToDataTableToStructBPLibrary::StructArrayToJsonObjectString(class FString* OutJsonString, const TArray<class UScriptStruct*>& StructArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonCsvToDataTableToStructBPLibrary", "StructArrayToJsonObjectString");

	Params::UJsonCsvToDataTableToStructBPLibrary_StructArrayToJsonObjectString_Params Parms{};

	Parms.StructArray = StructArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutJsonString != nullptr)
		*OutJsonString = std::move(Parms.OutJsonString);

	return Parms.ReturnValue;

}


// Function JsonCsvToDataTableToStruct.JsonCsvToDataTableToStructBPLibrary.SaveStringToFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      FileAbsolutePath                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Content                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEncodingOptions        EncodingOptions                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonCsvToDataTableToStructBPLibrary::SaveStringToFile(const class FString& FileAbsolutePath, const class FString& Content, enum class EEncodingOptions EncodingOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonCsvToDataTableToStructBPLibrary", "SaveStringToFile");

	Params::UJsonCsvToDataTableToStructBPLibrary_SaveStringToFile_Params Parms{};

	Parms.FileAbsolutePath = FileAbsolutePath;
	Parms.Content = Content;
	Parms.EncodingOptions = EncodingOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function JsonCsvToDataTableToStruct.JsonCsvToDataTableToStructBPLibrary.RemoveDataTableRow
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  InDataTable                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RowName                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonCsvToDataTableToStructBPLibrary::RemoveDataTableRow(class UDataTable* InDataTable, class FName RowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonCsvToDataTableToStructBPLibrary", "RemoveDataTableRow");

	Params::UJsonCsvToDataTableToStructBPLibrary_RemoveDataTableRow_Params Parms{};

	Parms.InDataTable = InDataTable;
	Parms.RowName = RowName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function JsonCsvToDataTableToStruct.JsonCsvToDataTableToStructBPLibrary.ReadJsonToDataTable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InData                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScriptStruct*               TableType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDataTable*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDataTable* UJsonCsvToDataTableToStructBPLibrary::ReadJsonToDataTable(const class FString& InData, class UScriptStruct* TableType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonCsvToDataTableToStructBPLibrary", "ReadJsonToDataTable");

	Params::UJsonCsvToDataTableToStructBPLibrary_ReadJsonToDataTable_Params Parms{};

	Parms.InData = InData;
	Parms.TableType = TableType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function JsonCsvToDataTableToStruct.JsonCsvToDataTableToStructBPLibrary.ReadCsvToDataTable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InData                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScriptStruct*               TableType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDataTable*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDataTable* UJsonCsvToDataTableToStructBPLibrary::ReadCsvToDataTable(const class FString& InData, class UScriptStruct* TableType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonCsvToDataTableToStructBPLibrary", "ReadCsvToDataTable");

	Params::UJsonCsvToDataTableToStructBPLibrary_ReadCsvToDataTable_Params Parms{};

	Parms.InData = InData;
	Parms.TableType = TableType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function JsonCsvToDataTableToStruct.JsonCsvToDataTableToStructBPLibrary.PasteMessageFromClipboard
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UJsonCsvToDataTableToStructBPLibrary::PasteMessageFromClipboard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonCsvToDataTableToStructBPLibrary", "PasteMessageFromClipboard");

	Params::UJsonCsvToDataTableToStructBPLibrary_PasteMessageFromClipboard_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function JsonCsvToDataTableToStruct.JsonCsvToDataTableToStructBPLibrary.LoadFileToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      FileAbsolutePath                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Content                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonCsvToDataTableToStructBPLibrary::LoadFileToString(const class FString& FileAbsolutePath, class FString* Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonCsvToDataTableToStructBPLibrary", "LoadFileToString");

	Params::UJsonCsvToDataTableToStructBPLibrary_LoadFileToString_Params Parms{};

	Parms.FileAbsolutePath = FileAbsolutePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = std::move(Parms.Content);

	return Parms.ReturnValue;

}


// Function JsonCsvToDataTableToStruct.JsonCsvToDataTableToStructBPLibrary.JsonStringToStructV2
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InJsonString                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStruct*                     Struct                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonCsvToDataTableToStructBPLibrary::JsonStringToStructV2(const class FString& InJsonString, class UStruct** Struct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonCsvToDataTableToStructBPLibrary", "JsonStringToStructV2");

	Params::UJsonCsvToDataTableToStructBPLibrary_JsonStringToStructV2_Params Parms{};

	Parms.InJsonString = InJsonString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Struct != nullptr)
		*Struct = Parms.Struct;

	return Parms.ReturnValue;

}


// Function JsonCsvToDataTableToStruct.JsonCsvToDataTableToStructBPLibrary.JsonStringToStructArrayV2
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InJsonString                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UScriptStruct*>       StructArray                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonCsvToDataTableToStructBPLibrary::JsonStringToStructArrayV2(const class FString& InJsonString, TArray<class UScriptStruct*>* StructArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonCsvToDataTableToStructBPLibrary", "JsonStringToStructArrayV2");

	Params::UJsonCsvToDataTableToStructBPLibrary_JsonStringToStructArrayV2_Params Parms{};

	Parms.InJsonString = InJsonString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (StructArray != nullptr)
		*StructArray = std::move(Parms.StructArray);

	return Parms.ReturnValue;

}


// Function JsonCsvToDataTableToStruct.JsonCsvToDataTableToStructBPLibrary.JsonStringToStructArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InJsonString                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTableRowBase>       OutRows                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonCsvToDataTableToStructBPLibrary::JsonStringToStructArray(const class FString& InJsonString, TArray<struct FTableRowBase>* OutRows)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonCsvToDataTableToStructBPLibrary", "JsonStringToStructArray");

	Params::UJsonCsvToDataTableToStructBPLibrary_JsonStringToStructArray_Params Parms{};

	Parms.InJsonString = InJsonString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutRows != nullptr)
		*OutRows = std::move(Parms.OutRows);

	return Parms.ReturnValue;

}


// Function JsonCsvToDataTableToStruct.JsonCsvToDataTableToStructBPLibrary.JsonStringToStruct
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InJsonString                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTableRowBase               OutRow                                                           (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonCsvToDataTableToStructBPLibrary::JsonStringToStruct(const class FString& InJsonString, struct FTableRowBase* OutRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonCsvToDataTableToStructBPLibrary", "JsonStringToStruct");

	Params::UJsonCsvToDataTableToStructBPLibrary_JsonStringToStruct_Params Parms{};

	Parms.InJsonString = InJsonString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutRow != nullptr)
		*OutRow = std::move(Parms.OutRow);

	return Parms.ReturnValue;

}


// Function JsonCsvToDataTableToStruct.JsonCsvToDataTableToStructBPLibrary.GetDataTableFirstRow
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDataTable*                  InDataTable                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTableRowBase               OutRow                                                           (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonCsvToDataTableToStructBPLibrary::GetDataTableFirstRow(class UDataTable* InDataTable, struct FTableRowBase* OutRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonCsvToDataTableToStructBPLibrary", "GetDataTableFirstRow");

	Params::UJsonCsvToDataTableToStructBPLibrary_GetDataTableFirstRow_Params Parms{};

	Parms.InDataTable = InDataTable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutRow != nullptr)
		*OutRow = std::move(Parms.OutRow);

	return Parms.ReturnValue;

}


// Function JsonCsvToDataTableToStruct.JsonCsvToDataTableToStructBPLibrary.CreateDataTable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InDataTableName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScriptStruct*               TableType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDataTable*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDataTable* UJsonCsvToDataTableToStructBPLibrary::CreateDataTable(const class FString& InDataTableName, class UScriptStruct* TableType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonCsvToDataTableToStructBPLibrary", "CreateDataTable");

	Params::UJsonCsvToDataTableToStructBPLibrary_CreateDataTable_Params Parms{};

	Parms.InDataTableName = InDataTableName;
	Parms.TableType = TableType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function JsonCsvToDataTableToStruct.JsonCsvToDataTableToStructBPLibrary.CopyMessageToClipboard
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Text                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UJsonCsvToDataTableToStructBPLibrary::CopyMessageToClipboard(const class FString& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonCsvToDataTableToStructBPLibrary", "CopyMessageToClipboard");

	Params::UJsonCsvToDataTableToStructBPLibrary_CopyMessageToClipboard_Params Parms{};

	Parms.Text = Text;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function JsonCsvToDataTableToStruct.JsonCsvToDataTableToStructBPLibrary.ClearDataTable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  InDataTable                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonCsvToDataTableToStructBPLibrary::ClearDataTable(class UDataTable* InDataTable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonCsvToDataTableToStructBPLibrary", "ClearDataTable");

	Params::UJsonCsvToDataTableToStructBPLibrary_ClearDataTable_Params Parms{};

	Parms.InDataTable = InDataTable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function JsonCsvToDataTableToStruct.JsonCsvToDataTableToStructBPLibrary.AddDataTableRow
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDataTable*                  InDataTable                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RowName                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTableRowBase               OutRow                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UJsonCsvToDataTableToStructBPLibrary::AddDataTableRow(class UDataTable* InDataTable, class FName RowName, struct FTableRowBase& OutRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JsonCsvToDataTableToStructBPLibrary", "AddDataTableRow");

	Params::UJsonCsvToDataTableToStructBPLibrary_AddDataTableRow_Params Parms{};

	Parms.InDataTable = InDataTable;
	Parms.RowName = RowName;
	Parms.OutRow = OutRow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


