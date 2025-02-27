#pragma once
#include "CoreMinimal.h"
#include "TresPhotoLoadWork.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTresPhotoLoadWork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_pTexture;
    
    TRESGAME_API FTresPhotoLoadWork();
};

