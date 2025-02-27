#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "Engine/EngineTypes.h"
#include "TresProjectile_e_ex725_CaptureProjectile.generated.h"

UCLASS(Blueprintable, HideDropdown)
class ATresProjectile_e_ex725_CaptureProjectile : public ATresProjectileBase {
    GENERATED_BODY()
public:
    ATresProjectile_e_ex725_CaptureProjectile(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void HandleOnImpact(const FHitResult& HitResult);
    
};

