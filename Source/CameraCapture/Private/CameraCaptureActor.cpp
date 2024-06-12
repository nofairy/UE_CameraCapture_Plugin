// Copyright sayonara Limited, 2023-2023. All rights reserved.

#include "CameraCaptureActor.h"
#include "Camera/CameraComponent.h"

ACameraCaptureActor::ACameraCaptureActor(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	CameraCaptureComponent = CreateDefaultSubobject<UCameraCaptureComponent>(TEXT("CameraCaptureComponent"));
	CameraCaptureComponent->SetupAttachment(GetCameraComponent());

	PrimaryActorTick.bCanEverTick = true;
	SetActorTickEnabled(true);
}

bool ACameraCaptureActor::ShouldTickIfViewportsOnly() const
{
	return true;
}