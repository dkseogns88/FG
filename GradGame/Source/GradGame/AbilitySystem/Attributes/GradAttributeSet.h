// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GradAttributeSet.generated.h"

/**
 * 아래 매크로는 AttributeSet에 Attribute를 추가할 때, 선언 및 정의해야할 메서드에 대한 간략버전을 제공한다:
 *
 * ATTRIBUTE_ACCESSORS(UGradHealthSet, Health):
 * 이는 아래의 메서드를 선언 및 정의해준다
 *
 *   static FGameplayAttribute GetHealthAttribute() {...}
 *   float GetHealth() const {...}
 *   void SetHealth(float NewVal) {...}
 *   void InitHealth(float NewVal) {...}
 */

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

 /**
  * GradAttributeSet
  * - 
  와 마찬가지로 Grad에서 메인 Attribute Set Class이다
  */
UCLASS()
class GRADGAME_API UGradAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	UGradAttributeSet();
};
