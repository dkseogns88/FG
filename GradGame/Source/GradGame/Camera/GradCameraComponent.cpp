// Fill out your copyright notice in the Description page of Project Settings.

#include "GradCameraComponent.h"
#include "GradCameraMode.h"

UGradCameraComponent::UGradCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer), CameraModeStack(nullptr)
{
	
}

void UGradCameraComponent::OnRegister()
{
	Super::OnRegister();

	if (!CameraModeStack)
	{
		// �ʱ�ȭ (BeginPlay�� ����)�� ���� �ʿ���� ��ü�� NewObject�� �Ҵ�
		CameraModeStack = NewObject<UGradCameraModeStack>(this);
	}
}

void UGradCameraComponent::GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView)
{
	check(CameraModeStack);

	UpdateCameraModes();

	// EvaluateStack�� CameraModeStack�� �ִ� CameraMode�� ������Ʈ(+����)�ϰ� CameraModeStack�� Bottom-Top���� ������Ʈ�� CameraMode���� Lerp�� �������ش�.
	// - �̿� ���� ����� CameraModeView�� ĳ�̵ȴ�
	FGradCameraModeView CameraModeView;
	CameraModeStack->EvaluateStack(DeltaTime, CameraModeView);

	if (APawn* TargetPawn = Cast<APawn>(GetTargetActor()))
	{
		if (APlayerController* PC = TargetPawn->GetController<APlayerController>())
		{
			// PlayerController�� ControlRotation�� ���� CamerModeView�� ControlRotation���� ������Ʈ������
			// - SetControlRotation�� �ܿ�⺸�� �ѹ� �ڵ带 ����:
			//   - �ش� �Լ��� PC�� Possess�ϰ� �ִ� Pawn�� RootComponent�� ControlRotation�� �ݿ��Ѵ� (== �����ϰ� �ִ� ĳ���Ϳ� ȸ���� ��Ű����?)
			PC->SetControlRotation(CameraModeView.ControlRotation);
		}
	}

	// Camera�� Location�� Rotation�� �ݿ�����:
	// - �ð� ������, SetWorldLocationAndRotation�� ���鼭 -> UpdateChildTransform���� ���� ���� ��õ�Ѵ�
	// - SceneGraph ���� ������Ʈ�� ������ �� �ִ�
	// �����ϰ� �����ϸ�, CameraComponent�� ���� Parent�� SceneGraph ���踦 ����Ͽ� ������Ʈ �����Ѵ�
	SetWorldLocationAndRotation(CameraModeView.Location, CameraModeView.Rotation);

	// FOV ������Ʈ
	FieldOfView = CameraModeView.FieldOfView;

	/**
	 * ���⼭ �츮�� ControlRotation vs Rotation�� �������� ������ �� �ִ�:
	 * - ControlRotation�� PC�� �����ϴ� Pawn�� Rotation�� ������ ���̴�
	 * - �׿� ����, Rotation�� Camera�� �ݿ��ϴ� Rotation�̶�� ���̴�
	 */

	 // FMinimalViewInfo�� ������Ʈ ���ش�:
	 // - CameraComponent�� ��ȭ ������ �ݿ��ؼ� ���� ���������� �ݿ��ϰ� ��
	DesiredView.Location = CameraModeView.Location;
	DesiredView.Rotation = CameraModeView.Rotation;
	DesiredView.FOV = CameraModeView.FieldOfView;
	DesiredView.OrthoWidth = OrthoWidth;
	DesiredView.OrthoNearClipPlane = OrthoNearClipPlane;
	DesiredView.OrthoFarClipPlane = OrthoFarClipPlane;
	DesiredView.AspectRatio = AspectRatio;
	DesiredView.bConstrainAspectRatio = bConstrainAspectRatio;
	DesiredView.bUseFieldOfViewForLOD = bUseFieldOfViewForLOD;
	DesiredView.ProjectionMode = ProjectionMode;
	DesiredView.PostProcessBlendWeight = PostProcessBlendWeight;
	if (PostProcessBlendWeight > 0.0f)
	{
		DesiredView.PostProcessSettings = PostProcessSettings;
	}
}

PRAGMA_DISABLE_OPTIMIZATION
void UGradCameraComponent::UpdateCameraModes()
{
	check(CameraModeStack);

	// DetermineCameraModeDelegate�� CameraMode Class�� ��ȯ�Ѵ�:
	// - �ش� delegate�� HeroComponent�� ��� �Լ��� ���ε��Ǿ� �ִ�
	if (DetermineCameraModeDelegate.IsBound())
	{
		if (TSubclassOf<UGradCameraMode> CameraMode = DetermineCameraModeDelegate.Execute())
		{
			CameraModeStack->PushCameraMode(CameraMode);
		}
	}
}
PRAGMA_ENABLE_OPTIMIZATION