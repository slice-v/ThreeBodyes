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

	scoutShipCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("scoutShipCamera"));
	
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


	//Use delegate to pass param to method calling by reference
	//DECLARE_DELEGATE_OneParam(FShootDelegate, const FVector);
	//PlayerInputComponent->BindAction<FShootDelegate>(TEXT("Shoot"), EInputEvent::IE_Pressed, shootingComponent, &UShootingComponent::Shoot);
	PlayerInputComponent->BindAction(TEXT("Shoot"), EInputEvent::IE_Pressed, this, &AScoutShip::Shoot);
		
}

void AScoutShip::Move(float value)
{
	FVector direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(direction, value);
}

void AScoutShip::Rotate(float value)
{
	AddControllerYawInput( value * yaw * GetWorld()->GetDeltaSeconds());
	//UE_LOG(LogTemp, Log, TEXT("** Rotation ** , value %f"), value / 10)
}

void AScoutShip::Shoot()
{
	shootingComponent->Shoot(scoutShipMovement->Velocity);
}




