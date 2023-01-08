// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "SMagicProjectile.generated.h"

UCLASS()
class ACTIONROGUELIKE_API ASMagicProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASMagicProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	USphereComponent *SphereComponent;

	UPROPERTY(EditAnywhere)
	UProjectileMovementComponent *MovementComponent;

	UPROPERTY(EditAnywhere)
	UParticleSystemComponent *EffectComponent;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
