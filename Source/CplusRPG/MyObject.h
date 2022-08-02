// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyObject.generated.h"

/**
 * 
 */
UCLASS()
class CPLUSRPG_API UMyObject : public UObject
{
	GENERATED_BODY()

public:
	UMyObject();

	float my_float_;

	void MyFunction();
};
