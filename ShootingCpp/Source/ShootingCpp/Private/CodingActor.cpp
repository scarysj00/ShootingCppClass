// Fill out your copyright notice in the Description page of Project Settings.


#include "CodingActor.h"

// Sets default values
ACodingActor::ACodingActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACodingActor::BeginPlay()
{
	Super::BeginPlay();

	// UE_LOG(LogTemp, Warning, TEXT("Hello World!"));

	// number
	// UE_LOG(LogTemp, Warning, TEXT("%d"), number);

	// float
	// UE_LOG(LogTemp, Warning, TEXT("%.1f"), fNumber);

	// int size = sizeof(bool);
	// UE_LOG(LogTemp, Warning, TEXT("%d"), size);

	// UE_LOG(LogTemp, Warning, TEXT("bool is false : %d"), false);
	// UE_LOG(LogTemp, Warning, TEXT("bool is true : %d"), true);

	 //UE_LOG(LogTemp, Warning, TEXT("%s"), *name);


	// 조건문
	// 만약 myNamedl이 Lisa 라면  LVMH 별장에서 쉬고 싶다.
	// 그렇지 않고 myName 이 Jenny 라면 프랑스 남부로 여행가고 싶다.
	// 이도저도 아니라면 집에서 지구마블이나 보고 싶다.
	// 주의할 사항은 기본 C++ 문법에서 안쓰는 것도 있다. printf 안쓴다.
	// UE_LOG만 쓴다.

	//if (myName.Equals(TEXT("Lisa")))
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("LVMH 별장에서 쉬고 싶다."));
	//}
	//else if (myName.Equals(TEXT("Jenny")))
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("프랑스 남부로 여행가고 싶다."));
	//}
	//else
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("집에서 지구마블이나 보고 싶다."));
	//}

	
	// 반복문
	// for (초기값 ; 조건문 ; 증감식)
	// 0부터 100까지 반복문에서 
	int sum = 0;
	for (int i = 0; i <= 100; i++)
	{
		// - 50이상 (그리고) 60이하만 출력
		if (i >= 50 && i <= 60)
		{
			UE_LOG(LogTemp, Warning, TEXT("%d"), i);
		}	
	}
	
}

// Called every frame
void ACodingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//static int a = 10; // 정적 변수

	//if (a == 10)
	//{
	//	a = 2;
	//}
}

