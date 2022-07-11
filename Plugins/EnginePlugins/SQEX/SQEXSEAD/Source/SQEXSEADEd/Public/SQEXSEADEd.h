#pragma once

#include "CoreMinimal.h"
#include "ModuleManager.h"

class FSQEXSEADEdModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};