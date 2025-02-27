#pragma once
#include "CoreMinimal.h"
#include "EVoiceType_e_ex359.h"
#include "VoiceSet_e_ex359.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FVoiceSet_e_ex359 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> VoiceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EVoiceType_e_ex359> VoiceType;
    
    TRESGAME_API FVoiceSet_e_ex359();
};

