// Copyright sayonara Limited, 2023-2023. All rights reserved.

#pragma once
#include "Camera/CameraActor.h"
#include "CameraCaptureComponent.h"

#include "CameraCaptureActor.generated.h"

UCLASS(ClassGroup = Common, hideCategories = (Input, Rendering, AutoPlayerActivation), showcategories = ("Input|MouseInput", "Input|TouchInput"), Blueprintable)
class CAMERACAPTURE_API ACameraCaptureActor : public ACameraActor
{
	GENERATED_BODY()

public:
	ACameraCaptureActor(const FObjectInitializer& ObjectInitializer);

	virtual bool ShouldTickIfViewportsOnly() const override;
private:

	UPROPERTY(Category = CineCameraCaptureActor, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UCameraCaptureComponent> CameraCaptureComponent;
};