// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoutShip.h"


// Sets default values
AScoutShip::AScoutShip()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	scoutShipCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("scoutShipCollision"));
	SetRootComponent(scoutShipCollision);

	scoutShipStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("scoutShipMesh"));
	scoutShipStaticMesh->SetupAttachment(RootComponent);

	scoutShipMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("scoutShipMovement"));
				
	scoutShipSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("scoutSipSpringArm"));
	scoutShipSpringArm->SetupAttachment(RootComponent);

	scoutShipCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("scoutShipCamera"));
	scoutShipCamera->SetupAttachment(scoutShipSpringArm);

	//Add  Shooting Component
	shootingComponent = CreateDefaultSubobject<UShootingComponent>(TEXT("ShootingComponent"));


}

// Called when the game starts or when spawned
void AScoutShip::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AScoutShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AScoutShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("Move"), this, &AScoutShip::Move);
	PlayerInputComponent->BindAxis(TEXT("Rotate"), this, &AScoutShip::Rotate);

	PlayerInputComponent->BindAction(TEXT("Shoot"), EInputEvent::IE_Pressed, shootingComponent, &UShootingComponent::Shoot);
		
}

void AScoutShip::Move(float value)
{
	FVector direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(direction, value);
}

void AScoutShip::Rotate(float value)
{
	//Двигаем корабль в AddMovementInput
	FVector direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	FQuat quatRotation = FQuat(FRotator(pitch, value * direction.Y / 100, roll));

	//scoutShipStaticMesh->AddWorldRotation(quatRotation, false, 0, ETeleportType::None);
	//direction *= scoutShipStaticMesh->GetComponentRotation().Vector().Normalize();
	//AddMovementInput(direction, value);
	UE_LOG(LogTemp, Log, TEXT("** AddMovementInput ** Derection %f, value %f"), direction.Y, value);
	
	
	//Двигаем корабль в AddActorOffset
	FVector newLocation = GetActorLocation();
	newLocation.Y += value * direction.Y;
	SetActorLocation(newLocation);
		
	UE_LOG(LogTemp, Log, TEXT("** AddActorOffest ** Current location X: %f, Y: %f"), newLocation.X, newLocation.Y);
}




