//#include <iostream>
#include <stdio.h>
#include <conio.h>					// _getch() 함수 사용
#include <stdlib.h>					// rand 함수 사용
#include <time.h>					// srand(time(NULL)) 함수 사용
#include <windows.h>				// Sleep 함수 사용

void numberGame(int userInput);		// 홀 짝 구분함수 전방선언
void Description003();
void Description004();
void Description005();
void randomDiceEasy();
void randomDiceNomal();
void Description006();
void criticalDamage();


int main()
{
		// 수업예제 (무한 반복문)
	/*
	int loopCount = 1;
	char userInput = '0';

	while (1)	// 무한반복문 == while 조건안에 1(참)을 집어넣는다.
	{
		if (loopCount == 1)		//최초만 실행될 문구 == 시작값인 1과 비교한다.

		{
			printf("[튜토리얼] 만약 게임을 만들려고 한다면 이런식으로 \n\n");
		}
		
		printf("\n[system] 당신은 플레이어 입니다. \n");
		printf("수행할 액션을 입력해 주세요. : ");
		scanf_s("%c", &userInput);		// 플레이어에게 문자 자료형을 입력받는다.

		if (userInput == 'q' || userInput == 'Q')		//유저가 q 또는 Q 데이터 입력시 조건충족
		{
			printf("\n[system] 프로그램을 종료합니다.\n");		
			break;		// break; 는 무한반복문을 탈출하기 위한 명령어이다. 즉 q 또는 Q를 입력하면 무한반복 탈출
		}
		else		// q 와 Q를 제외한 다른 데이터 입력시
		{
			printf("\n[system] 해당 입력은 정의되어 있지 않습니다. \n");
			loopCount += 1;		// loopCount를 증가시켜 최초 실행문구까지 반복되어 나오는것을 방지한다.
			continue;			// break;문은 실행시 반복문을 바로 종료시키지만 continue문은 
		}

		loopCount += 1;			// 최초문구 실행의 반복을 막을 카운트
		

	}
	*/
	/*
	int usernumber;
	int loopcount = 0;

	while (true)				// 수업 예제 (홀짝 구분)
	{
		printf("숫자를 입력하시오 : ");
		scanf_s("%d", &usernumber);

		//탈출조건
		if (usernumber <= 0)
		{
			printf("\n 프로그램을 종료합니다. \n");
			return 0;
		}

		if (usernumber % 2 == 0)
		{
			printf("[%d]는 짝수입니다. \n", usernumber);
			loopcount += 1;
			continue;
		}

		printf("[%d]는 홀수입니다. \n", usernumber);
	}
	*/

	/*								//홀짝 구분 개별풀이
	int userInput;		

	while (1)
	{
		printf("숫자를 입력해주세요 : ");
		scanf_s("%d", &userInput);
		numberGame(userInput);

		if (userInput == 0)				// 유저가 0을 입력하면 문구와 함께 프로그램 종료
		{
			printf("\n프로그램을 종료하겠습니다. \n");
			break;
		}

	}
	
	/*while (1)								//main 함수내에서만 계산할때
	{
		printf("숫자를 입력해주세요 : ");
		scanf_s("%d", &userInput);
		printf("프로그램을 나가시려면 0을 입력해주세요 \n");

		int result = userInput % 2;


		if (result == 0)
		{
			printf("\n입력하신 숫자는 짝수입니다.\n\n");

		}
		else
		{
			printf("\n입력하신 숫자는 홀수입니다. \n\n");
		}

		if (userInput == 0)
		{
			printf("\n프로그램을 종료하겠습니다. \n");
			break;
		}
		
	}
	*/

	Description003();
	//Description004();
	//Description005();
	//randomDiceNomal();
	//Description006();
	//criticalDamage();

	return 0;

}
// main함수 종료구간

void numberGame(int userInput)			//	홀 짝 구분 함수, 전방선언처리 완료
{
		int result = userInput % 2;		//

		if (result == 0)				// 2로 나눈숫자의 나머지가 0 입력받은 수 == 짝수
		{
			printf("\n입력하신 숫자는 짝수입니다. 프로그램을 나가시려면 0을 입력해주세요.\n\n");

		}
		else							// if문을 제외한 나머지 입력받은 수 == 홀수
		{
			printf("\n입력하신 숫자는 홀수입니다. 프로그램을 나가시려면 0을 입력해주세요. \n\n");
		}
	
}

void Description003()
{

	// switch / case문

	char userInput = '0';
	printf("User input : ");
	userInput = _getch();

	printf("\n\n");

	switch (userInput)
	{
	case 'a':
		printf("이것은 가위 \n");
		break;
	case 'b':
		printf("이것은 바위 \n");
		break;
	case 'c':
		printf("이것은 보 \n");
		break;
	default:
		printf("처리되지 않은 예외 입력입니다. \n");
		break;
	}

	printf("Press any key... \n");
	_getch();
}

void Description004()				// for문 수업예제
{
	printf("For 문은 반복문이다. 이렇게 돌아간다. \n");

	int loopcount = 1;
	for ( /* 여기 비어도 가능*/ ; loopcount <= 5; loopcount += 1)
	{
		printf("어떻게 돌아가고 있는 것이지??? \n");
	}
	printf("\n");

}

void Description005()
{
	//여기서 키 값을 바꿔볼 예정
	srand(time(NULL));				// 이것이 rand() 함수의 키 값을 바꿔주는 함수
	// Random 이해하기
	int randomnumber1, randomnumber2, randomnumber3 = 0;

	printf("랜덤 번호 찍어보기. \n");

	for (int i = 0; i < 10; i++)
	{
		randomnumber2 = (rand() % 45) + 1;
		printf("Random number -> %d \n", randomnumber2);
	}
	printf("\n\n");


	randomnumber1 = rand(); 			// rand() 함수를 사용해서 랜덤값을 받는다.
	randomnumber2 = rand() % 11;		// 0 ~ 10까지의 숫자만 출력하게 만들기  => 11로 나눈수의 나머지는 0 ~ 10까지밖에 존재하지 않음
	randomnumber3 = (rand() % 6) + 1;	// 0을 제외하고싶은, 주사위 같이 1 ~ 6을 출력하게 만들기 

	printf("Random number?? %d \n", randomnumber1);
	printf("Random number?? %d \n", randomnumber2);
	printf("Random number?? %d \n", randomnumber3);

}

void randomDiceEasy()
{
	srand(time(NULL));								// rand값에 무작위 키값을 받으려면 srand(time(NULL)) 함수를 써야한다.

	int result = 0;									// 주사위 결과값을 담을 변수

	printf("컴퓨터가 주사위를 두번 던집니다. \n");

	for (int i = 1; i <= 2; i++)					// 주사위 던지기를 두번 반복
	{
		int randnum1 = (rand() % 6) + 1;			// 랜덤 주사위의 수 = 1 ~ 6
		printf("주사위의 숫자 : %d\n", randnum1);
		result += randnum1;							// 반복하여 나온 주사위값을 더하여 저장
	}

	if (result % 2)									// 더한 값을 2로 나눴을시 나머지가 없으면 짝수
	{
		printf("\n주사위의 총합은 %d 홀수입니다. \n", result);
	}
	else											// 그 외 숫자 홀수
	{
		printf("\n주사위의 총합은 %d 짝수입니다. \n", result);
	}
	
	

}

void randomDiceNomal()
{
	srand(time(NULL));			

	int num, randnum1, randnum2;

	for(1; 1; 1)								// 무한반복
	{
		printf("컴퓨터가 주사위를 던집니다. \n");
		printf("[홀] : 1, [짝] : 2, [게임종료] : 3\n 한개의 숫자를 입력해주세요  : ");
		scanf_s("%d", &num);					// 유저에게 홀, 짝, 게임종료 입력받기

		randnum1 = (rand() % 6) + 1;			// 컴퓨터에게 1 ~ 6 랜덤입력 받기
		randnum2 = randnum1 % 2;				// 랜덤입력 홀, 짝 구분하기

		if (num == 3)								// 게임 종료문
		{
			printf("게임을 종료합니다...");
			break;
		}

		if (num != 1 && num != 2)				// 홀, 짝 제외한 키입력 받을시 경고, 되돌아가기
		{
			printf("※※※  [홀] : 1, [짝] : 2 중에만 골라주세요.  ※※※ \n");
			printf("※※※  [홀] : 1, [짝] : 2 중에만 골라주세요.  ※※※ \n");
			printf("※※※  [홀] : 1, [짝] : 2 중에만 골라주세요.  ※※※ \n");
			continue;							// break가 아닌 continue라 반복문을 재실행, 무한반복문이라 다시 실행 가능
		}
		num = num % 2;							// 유저가 입력한 값이 홀인지 짝인지 구분하기.


		if (num == randnum2)					// 유저가 입력한 값, 랜덤입력 홀짝 구분값이 동일하면 유저의 승리
		{
			printf("\n주사위의 값 : [%d] \n당신의 승리! \n\n", randnum1);
		}

		else								// 유저값, 랜덤입력값이 동일하지 않으면 유저의 패배
		{
			printf("\n주사위의 값 : [%d] \n당신의 패배... \n\n", randnum1);
		}

	

	}

}

void Description006()
{
	srand(time(NULL));				

	int randomnumber1 = 0;
	const int MAX_DICE_VALUE = 6;

	printf("주사위 프로그램 \n\n");
	_getch();
	printf("컴퓨터가 뽑은 3개의 주사위 값 -> ");

	for (int i = 0; i < 3; i++)
	{
		Sleep(1000);				// 파스칼 스타일 (함수 시작 글자가 대문자), 헝가리안 스타일 (함수 시작 글자가 소문자)
		randomnumber1 = (rand() % MAX_DICE_VALUE) + 1;
		printf("%d ", randomnumber1);
	}

	Sleep(1000);
	printf("\n\n");
	printf("프로그램 종료 \n\n");

}

void criticalDamage()
{
	srand(time(NULL));									// rand()함수에 랜덤키값을 입력받기위에 srand(time(NULL)) 추가

	int randomnumber1 = 0;

	printf("크리티컬 데미지 환산 프로그램 \n");
	printf("주사위 1 ~ 6 발생시 크리티컬 데미지\n\n");
	printf("아무키나 입력하면 프로그램을 시작합니다.\n");
	_getch();											// _getch

	while (1)
	{
		int userCoin;									// 프로그램 재실행 혹은 종료키 저장할 변수
		int damage = 100;								// 데미지 값
		float criticaldamage = damage * 1.5;			// 크리티컬 발생시 크리티컬 데미지로 환산해주는 변수
		randomnumber1 = ((rand() % 10)) +1;				// 크리티컬 확률에 입력할 변수

		if(1 <= randomnumber1 && randomnumber1 <= 6)	// 60퍼의 확률 발생시 크리티컬 데미지 발생
		{
			printf("\n크리티컬 주사위!  크리티컬 데미지 발생 : %d \n", randomnumber1);
			printf("%d X 1.5 : %.2f \n\n", damage, criticaldamage);
			printf("재실행을 원할시 [1], 종료를 원할시 [2]를 입력해주세요 :");
			scanf_s("%d", &userCoin);

			if (userCoin == 1)
			{
				continue;
			}

			else
			{
				printf("프로그램을 종료합니다...\n");
				break;
			}

		}

		else
		{
			printf("\n일반 주사위 : %d \n", randomnumber1);
			printf("\n데미지 발생 : %d \n\n", damage);
			printf("재실행을 원할시 [1], 종료를 원할시 [2]를 입력해주세요 :");
			scanf_s("%d", &userCoin);

			if (userCoin == 1)
			{
				continue;
			}

			else
			{
				printf("프로그램을 종료합니다 \n");
				break;
			}
		}

	}

}