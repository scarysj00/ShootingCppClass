// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"

// class UBoxComponent; 전방선언 forward declaration

UCLASS()
class SHOOTINGCPP_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* cube;

	UPROPERTY(EditAnywhere)
	class UBoxComponent* box; // 포인터 변수 선언 시 class의 의미는 전방선언이다.

	UPROPERTY(EditAnywhere)
	class UArrowComponent* Arrow;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class ABullet> BulletFactory;

	UPROPERTY(EditAnywhere)
	USoundBase* FireSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Speed = 500;

	float H, V;
	// cpp 에서 다른 공간에 작성한 기능들을 Tick 에서 변수를 기억하고 있다가 호출한다.
	void AxisHorizontal(float value);
	void AxisVertical(float value);

	// 자동 총쏘기 기능을 만든다.
	// - 속성 : 누르고 있는 상태, 현재시간, 총알이 발사되는 시간 (Interval)
	// - 기능 : 눌렀다(총알을 만든다). 뗏다.
	bool bAutoFire;
	float CurrentTime;
	float MakeTime = 0.5f;
	void ActionFirePressed();
	void ActionFireReleased();

	void MakeBullet(); 
};
