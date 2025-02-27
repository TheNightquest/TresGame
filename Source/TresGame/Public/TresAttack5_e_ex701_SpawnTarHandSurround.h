#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex701_SpawnTarHandBase.h"
#include "TresAttack5_e_ex701_SpawnTarHandSurround.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack5_e_ex701_SpawnTarHandSurround : public UTresAttack_e_ex701_SpawnTarHandBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NumSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HandNotSpawnRadius;
    
public:
    UTresAttack5_e_ex701_SpawnTarHandSurround();
};

