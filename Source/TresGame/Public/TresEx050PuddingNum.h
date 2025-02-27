#pragma once
#include "CoreMinimal.h"
#include "TresEx050PuddingNum.generated.h"

USTRUCT(BlueprintType)
struct FTresEx050PuddingNum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 All;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Pile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NotPile;
    
    TRESGAME_API FTresEx050PuddingNum();
};

