// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"

AMyGameMode::AMyGameMode()
{
	// UClass
	// 각 자료형별로 하나씩만 존재
	// 해당 자료형을 부연설명 해주는 메타 데이터

	// CDO ( Class Default Object )
	// 각 자료형 별로 샘플 객체를 하나 만들어서 관리
	// UClass 에서 이 CDO 객체를 가르키고 있음

	// TSubclassOf 탬플릿은 T 타입을 정해주면
	// 입력으로 들어오는 객체의 주소값을 이용해서 UClass 를 확인
	// T 타입의 하위 클래스가 맞으면 주소를 받음, 아니면 nullptr 설정
	// TSubclassOf<Apawn>으로 생성된 포인터는 APawn or APawn 에서 파생된 클래스의 
	// 객체의 주소만 받는 포인터라는 뜻

	// "/Game/BP/BP_Player.BP_Player" ==> Content 폴더내에 존재하는 블루프린트 에셋의 경로정보
	// "/Game/BP/BP_Player.BP_Player_C" ==> Content 폴더내에 존재하는 블루프린트의 UClass 자료형 정보

	ConstructorHelpers::FClassFinder<APawn> defaultPawnClass(L"/Game/BP/BP_Player.BP_Player_C");
	DefaultPawnClass = defaultPawnClass.Class;
}