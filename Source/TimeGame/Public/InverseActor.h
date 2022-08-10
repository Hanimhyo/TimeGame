// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InverseActor.generated.h"

UCLASS()
class TIMEGAME_API AInverseActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInverseActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* meshComp;

	FVector arrayLocation[600];
	FRotator arrayRotator[600];
	FVector arrayPhysicsAngleRad[600];
	FVector arrayPhysicsVector[600];

	//총괄길이
	int totalFrameLenght;
	//인버스 어레이 넘버들
	int inverseNextFrameArrayNum;
	int inverseFrameArrayNum;
	//인버스 프레임 넘버
	int inverseStartFrameNum;
	int inverseEndFrameNum;
	//길이보다 남는 자투리
	int inverseCutSaveRemainder;

	//러프에 쓰일 것
	int inverseCutPerNum;
	//저장할때 자르는 프레임 길이
	int saveCutFrameLenght = 12;
	//진짜 알파
	float inverseAlpha;

	//스피드
	int inverseSpeed = 1;


	//내 불값
	bool isMyChange;
	bool isInverse;
	bool isTimeStop;
	bool isNoGravity;

	//내가 변하는 시간
	float changeTime = 5;
	//누적시간
	float currentTime;
};
