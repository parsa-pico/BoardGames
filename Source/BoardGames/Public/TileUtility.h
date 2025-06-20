// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TileUtility.generated.h"

/**
 * 
 */
UCLASS()
class BOARDGAMES_API UTileUtility : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public:
	  UFUNCTION(BlueprintPure, Category = "Grid")
        static TArray<int32> GetAdjacentIndices(int32 Index, int32 Rows = 6, int32 Cols = 5, bool bIncludeDiagonals = false);
	
	// Returns all tile indices that are within the given maximum distance from the input tile index.
	// Only cardinal (non-diagonal) movement is allowed.
	UFUNCTION(BlueprintCallable, Category = "Tile Utility")
	static TArray<int32> GetTilesAtMaxDistance(int32 Index, int32 Rows, int32 Cols, int32 MaxDistance);

};
