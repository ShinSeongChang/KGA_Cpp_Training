#include <iostream>
#include <conio.h>		// _getch 함수 사용

// 함수 전방선언 지역
void starNormal();
void starHard();
void starVeryHard();

// main 함수 시작부
int main()
{
	//starNormal();
	//starHard();
	void starVeryHard();
	return 0;
}
// main함수 종료부

// 별출력 과제 Normal 버전 함수
void starNormal()
{
	int star[5] = { 0, };		// 주소5개 선언 및 초기화

	for (int i = 0; i < 5; i++)		// 5번 반복문
	{
		star[i] = '*';		// i의 증가값에 따라 star[0] ~ [4] 주소에  '*' 값을 넣을것임
		printf("%c ", star[i]);		// 출력 명령
	}

	printf("\n\n");

}

// 별출력 과제 Hard 버전 함수
void starHard()
{
	int star[5] = { 0, };
	int circcle = 0;

	while (circcle < 5)
	{
		// { board를 초기화 하는 로직
		for (int i = 0; i < 5; i++)
		{
			star[i] = '*';		// star[0] ~ [4] 의 주소에 모두 '*'을 집어넣음

			if (i == circcle)	// 하지만 현재 circcle의 크기와 일치하는 주소에는 '0' 이 들어갈것임. 
			{
				star[circcle] = '0';
			}
		}
		// } board를 초기화 하는 로직

		// { board를 출력하는 로직
		for (int i = 0; i < 5; i++)
		{
			printf("%c ", star[i]);		// star[0] ~ [4] 에 들어가있는 값을 출력
		}
		// } board를 출력하는 로직

		printf("\t\t Press Any Key...");	// 키입력을 요청하는 문구 출력
		_getch();		// 키입력 요청
		circcle++;		// 키를 입력받으면 circcle의 값을 1 증가 => 그다음 반복문에서는 '0'이 들어갈 주소가 1칸 증가한다는것을 의미
		printf("\n");	// 반복문 진행마다 줄넘김 처리
	}

}


void starVeryHard()
{
	int star[5] = { 0, };
	int circcle = 0;

	while (1)
	{

		for (int i = 0; i < 5; i++)
		{
			star[i] = '*';

			if (i == circcle)
			{
				star[i] = '0';
			}
		}

		for (int i = 0; i < 5; i++)
		{
			printf("%c", star[i]);
		}

		printf("\n");

	}
}