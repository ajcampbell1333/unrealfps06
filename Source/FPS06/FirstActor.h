// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FirstActor.generated.h"


UCLASS()
class FPS06_API AFirstActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AFirstActor();

	UFUNCTION(BlueprintCallable, Category = "Test Functions")
	int32 Test(int32 intTest);

};
