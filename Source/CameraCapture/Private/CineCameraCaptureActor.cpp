// Copyright sayonara Limited, 2023-2023. All rights reserved.

#include "CineCameraCaptureActor.h"

ACineCameraCaptureActor::ACineCameraCaptureActor(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	CameraCaptureComponent = CreateDefaultSubobject<UCameraCaptureComponent>(TEXT("CameraCaptureComponent"));
	CameraCaptureComponent->SetupAttachment(GetCineCameraComponent());
}