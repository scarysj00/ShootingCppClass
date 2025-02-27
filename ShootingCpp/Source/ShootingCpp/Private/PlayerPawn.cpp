// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"
#include "Components/BoxComponent.h"
#include "Components/ArrowComponent.h"
#include "Bullet.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// Box의 모양을 만든다.
	box = CreateDefaultSubobject<UBoxComponent>(TEXT("box"));
	// Box를 Cube에 붙인다.
	box->SetupAttachment(RootComponent);

	// Cube의 외관을 만든다.
	cube = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("cube"));
	// Cube 외관을 Root에 붙인다. (Attach)
	cube->SetupAttachment(box);

	// arrow를 생성해서 배치한다.
	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	Arrow->SetupAttachment(box); 
	// Location (X=0.000000,Y=0.000000,Z=100.000000)
	Arrow->SetRelativeLocation(FVector(0, 0, 100));
	// Rotation (Pitch=90.000000,Yaw=0.000000,Roll=0.000000)
	Arrow->SetRelativeRotation(FRotator(90, 0, 0));
}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
#pragma region Move
	// P = P0 + VT
	FVector P0 = GetActorLocation();
	FVector Dir(0, H, V);
	// FVector Dir = GetActorUpVector() * V + GetActorRightVector() * H;
	Dir.Normalize();
	FVector Velocity = Dir * Speed;
	SetActorLocation(P0 + Velocity * DeltaTime);
	// SetActorLocation(GetActorLocation() + Dir * Speed * DeltaTime); 한 줄로 작성 가능
#pragma endregion

#pragma region AutoFire
	// 만약 bAutoFire가 true라면
	if (true == bAutoFire)
	{
		// 시간이 흐르다가
		CurrentTime += DeltaTime;
		// 현재시간이 생성시간이 되면
		if (CurrentTime > MakeTime)
		{
			// MakeBullet 함수를 호출한다.
			MakeBullet();
			// 현재시간을 0으로 초기화 한다.
			CurrentTime = 0;
		}	
	}
#pragma endregion

}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// 입력이 발생할 때 호출될 함수를 등록해야 한다.

	PlayerInputComponent->BindAxis(TEXT("Horizontal"), this, &APlayerPawn::AxisHorizontal);
	PlayerInputComponent->BindAxis(TEXT("Vertical"), this, &APlayerPawn::AxisVertical);

	PlayerInputComponent->BindAction(TEXT("Fire"), EInputEvent::IE_Pressed, this, &APlayerPawn::ActionFirePressed);
	PlayerInputComponent->BindAction(TEXT("Fire"), EInputEvent::IE_Released, this, &APlayerPawn::ActionFireReleased);
}

void APlayerPawn::AxisHorizontal(float value)
{
	H = value;
}

void APlayerPawn::AxisVertical(float value)
{
	V = value;
}

void APlayerPawn::ActionFirePressed()
{
	// 자동 총쏘기를 활성화한다.
	bAutoFire = true;
	// 현재 시간을 0으로 초기화 한다.
	CurrentTime = 0;
	MakeBullet();
}

void APlayerPawn::ActionFireReleased()
{
	// 자동 총쏘기를 멈춘다.
	bAutoFire = false;

}

void APlayerPawn::MakeBullet()
{
	GetWorld()->SpawnActor<ABullet>(BulletFactory, Arrow->GetComponentTransform());

	UGameplayStatics::PlaySound2D(GetWorld(), FireSound);
}

