#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresLinkActor_e_ex202_Base.generated.h"

class USceneComponent;

UCLASS(Abstract, Blueprintable)
class ATresLinkActor_e_ex202_Base : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
public:
    ATresLinkActor_e_ex202_Base(const FObjectInitializer& ObjectInitializer);
};

