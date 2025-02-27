#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_dw401_DevilMeteor.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_dw401_DevilMeteor : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_GroundEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_HoleAppearEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_PCHitEffData;
    
public:
    ATresProjectile_e_dw401_DevilMeteor(const FObjectInitializer& ObjectInitializer);
};

