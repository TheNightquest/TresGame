#pragma once
#include "CoreMinimal.h"
#include "TresComNpcRandomFieldVoiceDatas.generated.h"

class UTresFieldVoice;

USTRUCT(BlueprintType)
struct FTresComNpcRandomFieldVoiceDatas {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_VoiceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresFieldVoice*> m_VoiceLists;
    
    TRESGAME_API FTresComNpcRandomFieldVoiceDatas();
};

