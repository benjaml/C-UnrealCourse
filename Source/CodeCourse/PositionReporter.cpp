// Fill out your copyright notice in the Description page of Project Settings.

#include "CodeCourse.h"
#include "PositionReporter.h"


// Sets default values for this component's properties
UPositionReporter::UPositionReporter()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPositionReporter::BeginPlay()
{
	Super::BeginPlay();
	FString objectName = GetOwner()->GetName();
	FString objectPos = "X=Something, Y=Something, Z=Something";
	FVector position = GetOwner()->GetActorLocation();
	objectPos = position.ToString();
	UE_LOG(LogTemp, Warning, TEXT("%s is at %s"), *objectName, *objectPos);
	
}


// Called every frame
void UPositionReporter::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

