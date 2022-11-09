#pragma once
#include "CoreMinimal.h"
#include "Configuration/ConfigManager.h"
#include "Engine/Engine.h"
#include "Passivemode_configStruct.generated.h"

/* Struct generated from Mod Configuration Asset '/Passivemode/Passivemode_config' */
USTRUCT(BlueprintType)
struct FPassivemode_configStruct {
    GENERATED_BODY()
public:

    /* Retrieves active configuration value and returns object of this struct containing it */
    static FPassivemode_configStruct GetActiveConfig() {
        FPassivemode_configStruct ConfigStruct{};
        FConfigId ConfigId{"Passivemode", ""};
        UConfigManager* ConfigManager = GEngine->GetEngineSubsystem<UConfigManager>();
        ConfigManager->FillConfigurationStruct(ConfigId, FDynamicStructInfo{FPassivemode_configStruct::StaticStruct(), &ConfigStruct});
        return ConfigStruct;
    }
};

