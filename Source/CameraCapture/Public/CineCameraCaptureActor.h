// Copyright sayonara Limited, 2023-2023. All rights reserved.

#pragma once
#include "CineCameraActor.h"
#include "CameraCaptureComponent.h"

#include "CineCameraCaptureActor.generated.h"

UCLASS(ClassGroup = Common, hideCategories = (Input, Rendering, AutoPlayerActivation), showcategories = ("Input|MouseInput", "Input|TouchInput"), Blueprintable)
class CAMERACAPTURE_API ACineCameraCaptureActor : public ACineCameraActor
{
	GENERATED_BODY()

public:
	ACineCameraCaptureActor(const FObjectInitializer& ObjectInitializer);

private:

	UPROPERTY(Category = CineCameraCaptureActor, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UCameraCaptureComponent> CameraCaptureComponent;
};