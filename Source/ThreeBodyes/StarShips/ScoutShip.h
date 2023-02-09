// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Engine/EngineBaseTypes.h"
#include "../Weapons/ShootingComponent.h"
#include "ScoutShip.generated.h"


UCLASS()
class THREEBODYES_API AScoutShip : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AScoutShip();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Components
public:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pawn")
	UBoxComponent* scoutShipCollision;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pawn")
	UStaticMeshComponent* scoutShipStaticMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pawn")
	USpringArmComponent* scoutShipSpringArm;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pawn")
	UCameraComponent* scoutShipCamera;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pawn")
	UFloatingPawnMovement* scoutShipMovement;

private:

	UPROPERTY(VisibleAnywhere, Category = "Shoot")
	UShootingComponent* shootingComponent;
	
	UPROPERTY(EditAnywhere, Category = "Pawn")
	int pitch = 0.0f;

	UPROPERTY(EditAnywhere, Category = "Pawn")
	int yaw = 0.0f;

	UPROPERTY(EditAnywhere, Category = "Pawn")
	int roll = 0.0f;

	//Functions
private:

	UFUNCTION()
	void Move(float value);
	
	UFUNCTION()
	void Rotate(float value);

};
