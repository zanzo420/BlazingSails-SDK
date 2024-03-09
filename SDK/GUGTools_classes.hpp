#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class GUGTools.GenericBFL
class UGenericBFL : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGenericBFL* GetDefaultObj();

	class FString GUG_GetEnvironmentVariable(const class FString& VariableName);
	uint8 GUG_GetDayOfWeek(struct FDateTime& InDateTime);
	struct FVector GUG_GetCollisionFaceIndexLocation(class AActor* InActor, class UStaticMesh* StaticMesh, int32 FaceIndex, bool* bSuccess);
	bool GUG_ExecConsoleCommandOnWorld(class UWorld* InWorld, const class FString& Cmd);
	bool GUG_ExecConsoleCommandOnActorWorld(class AActor* InActor, const class FString& Cmd);
	bool GUG_ExecConsoleCommand(const class FString& Cmd);
};

}


