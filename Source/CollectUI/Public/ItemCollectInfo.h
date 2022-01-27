// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ItemCollectInfo.generated.h"

/**
 * 
 */
UCLASS()
class COLLECTUI_API UItemCollectInfo : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Details", Meta = (ExposeOnSpawn=true))
		FText Name;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Details", Meta = (ExposeOnSpawn=true))
		FText ModuleAffected;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Details", Meta = (ExposeOnSpawn=true))
		int Amount;
};
