#pragma once
#include "CoreMinimal.h"
#include "TresAttack_XIIILB_Base.h"
#include "TresAvatarAttackParam_e_ex358.h"
#include "TresAttack5_e_ex358_AvatarAttackMain.generated.h"

UCLASS(Blueprintable)
class UTresAttack5_e_ex358_AvatarAttackMain : public UTresAttack_XIIILB_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresAvatarAttackParam_e_ex358> m_ActionSetList;
    
public:
    UTresAttack5_e_ex358_AvatarAttackMain();
};

