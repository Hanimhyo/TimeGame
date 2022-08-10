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

	//�Ѱ�����
	int totalFrameLenght;
	//�ι��� ��� �ѹ���
	int inverseNextFrameArrayNum;
	int inverseFrameArrayNum;
	//�ι��� ������ �ѹ�
	int inverseStartFrameNum;
	int inverseEndFrameNum;
	//���̺��� ���� ������
	int inverseCutSaveRemainder;

	//������ ���� ��
	int inverseCutPerNum;
	//�����Ҷ� �ڸ��� ������ ����
	int saveCutFrameLenght = 12;
	//��¥ ����
	float inverseAlpha;

	//���ǵ�
	int inverseSpeed = 1;


	//�� �Ұ�
	bool isMyChange;
	bool isInverse;
	bool isTimeStop;
	bool isNoGravity;

	//���� ���ϴ� �ð�
	float changeTime = 5;
	//�����ð�
	float currentTime;
};
