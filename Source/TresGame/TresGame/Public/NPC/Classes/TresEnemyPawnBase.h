#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ESQEX_FreeFlowKind.h"
#include "TresAIPawnBase.h"
#include "TresEnemyRetryVoiceData.h"
#include "ETresEnemyUniqueID.h"
#include "RevengeAttacks.h"
#include "ETresEnemyMajorUseID.h"
#include "TresEnemyPawnBase.generated.h"

class ATresEnemyPawnBase;
class UParticleSystemComponent;
class UTresEnemyCommonParam;
class USoundBase;
class USQEXSEADSoundReferenceEnumSet;
class UTresAIWeaponComponent;
class UObject;

UCLASS(BlueprintType)
class TRESGAME_API ATresEnemyPawnBase : public ATresAIPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
    ATresEnemyPawnBase* EnemyParent;
    
    UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
    TArray<ATresEnemyPawnBase*> EnemyChildren;
    
protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    ETresEnemyUniqueID m_EnemyUniqueID;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, BlueprintReadWrite)
    ESQEX_FreeFlowKind m_FreeFlowKind;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    int32 m_AppearEffectGroupID;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    int32 m_DieEffectGroupID;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> m_IdlingBreakWeights;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    TSubclassOf<UTresEnemyCommonParam> m_EnemyCommonParam;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    TArray<FRevengeAttacks> m_RevengeAttacks;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    TArray<TSubclassOf<ATresEnemyPawnBase>> m_SpawnEnemyClasses;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    uint32 m_bEnableDieBodyPush: 1;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    TEnumAsByte<ETresEnemyMajorUseID> m_eMajorUseID;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    TArray<FTresEnemyRetryVoiceData> m_RetryVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    USoundBase* m_PlayerKilledVoiceData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USQEXSEADSoundReferenceEnumSet* m_SoundAssets_Damage;
    
private:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(AllowPrivateAccess="true"))
    bool m_bStuckCheck;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(AllowPrivateAccess="true"))
    bool m_bFallenAbyssCheck;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(AllowPrivateAccess="true"))
    bool m_bRePopForStuckAndFallenAbyssCheck;
    
protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(AllowPrivateAccess="true"))
    bool m_bWaterEnemy;
    
    UPROPERTY(Export, Transient, BlueprintReadWrite, meta=(AllowPrivateAccess="true"))
    UTresAIWeaponComponent* m_AIWeaponComponent;
    
    UPROPERTY(Export, BlueprintReadWrite, meta=(AllowPrivateAccess="true"))
    UParticleSystemComponent* m_SwirlUpEff;
    
public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(AllowPrivateAccess="true"))
    float m_YoBindMeshScaleRate;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(AllowPrivateAccess="true"))
    float m_WallHitIgnorePhysicsObjectMass;
    
    ATresEnemyPawnBase();
    UFUNCTION(BlueprintCallable)
    void SetStuckCheck(bool bEnable);
    
    UFUNCTION(BlueprintPure)
    bool IsWeaponAttacking() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsTargetPlayer() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsTargetGigas() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRevengeAttack() const;
    
    UFUNCTION(BlueprintPure)
    bool IsIdle() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCoopMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetUserParam(int32 ParamIndex) const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetUserData() const;
    
    UFUNCTION(BlueprintPure)
    ETresEnemyUniqueID GetEnemyUniqueID() const;
    
    UFUNCTION(BlueprintPure)
    float GetAppearWait() const;
    
};

