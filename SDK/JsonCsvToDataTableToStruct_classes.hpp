#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class JsonCsvToDataTableToStruct.JsonCsvToDataTableToStructBPLibrary
class UJsonCsvToDataTableToStructBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UJsonCsvToDataTableToStructBPLibrary* GetDefaultObj();

	bool WriteDataTableToJson(class UDataTable* InDataTable, class FString* ExportedText);
	bool WriteDataTableToCsv(class UDataTable* InDataTable, class FString* ExportedText);
	class FString UrlEncode(const class FString& UnencodedString);
	bool StructToJsonObjectStringV2(class FString* OutJsonString, class UStruct* Struct);
	bool StructToJsonObjectString(class FString* OutJsonString, class UScriptStruct* Struct);
	bool StructArrayToJsonObjectStringV2(class FString* OutJsonString, const TArray<class UScriptStruct*>& StructArray);
	bool StructArrayToJsonObjectString(class FString* OutJsonString, const TArray<class UScriptStruct*>& StructArray);
	bool SaveStringToFile(const class FString& FileAbsolutePath, const class FString& Content, enum class EEncodingOptions EncodingOptions);
	bool RemoveDataTableRow(class UDataTable* InDataTable, class FName RowName);
	class UDataTable* ReadJsonToDataTable(const class FString& InData, class UScriptStruct* TableType);
	class UDataTable* ReadCsvToDataTable(const class FString& InData, class UScriptStruct* TableType);
	class FString PasteMessageFromClipboard();
	bool LoadFileToString(const class FString& FileAbsolutePath, class FString* Content);
	bool JsonStringToStructV2(const class FString& InJsonString, class UStruct** Struct);
	bool JsonStringToStructArrayV2(const class FString& InJsonString, TArray<class UScriptStruct*>* StructArray);
	bool JsonStringToStructArray(const class FString& InJsonString, TArray<struct FTableRowBase>* OutRows);
	bool JsonStringToStruct(const class FString& InJsonString, struct FTableRowBase* OutRow);
	bool GetDataTableFirstRow(class UDataTable* InDataTable, struct FTableRowBase* OutRow);
	class UDataTable* CreateDataTable(const class FString& InDataTableName, class UScriptStruct* TableType);
	void CopyMessageToClipboard(const class FString& Text);
	bool ClearDataTable(class UDataTable* InDataTable);
	bool AddDataTableRow(class UDataTable* InDataTable, class FName RowName, struct FTableRowBase& OutRow);
};

}


