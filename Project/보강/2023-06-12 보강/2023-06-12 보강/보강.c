#include <stdio.h>

int main()
{
	// 논리 연산자
	// || : 또는
	// && : 그리고

	int age = 8;
	int height = 120;

	if (age >= 10)	// 나이가 10살 이상이라면
	{
		printf("탈수 있어요!");
	}

	else if(height >= 120)	// 나이가 10살 미만이지만,키가 120cm 이상이라면
	{
		printf("보호자와 함께 탑승하세요!");
	}

	else	//나이도 10살 미만이고, 키도 120cm 미만인 경우 (모든 조건에 해당하지 않는 이외의 경우)
	{
		printf("못 타요!");
	}

	/*
	A 놀이기구 조건 : 10살 이상
	B 놀이기구 조건 : 키 120cm 이상
	*/

	int age = 15;
	int height = 120;

	if (age >= 10) // 나이가 10살 이상이라면
	{
		printf("A 놀이기구 탈 수 있어요!");
	}

	if (height >= 120)	// 키가 120cm 이상이라면
	{
		printf("B 놀이기구 탈 수 있어요!");
	}

	int month = 10;
	switch (month)
	{
		case 12:
		case 1:
		case 2:
		printf("winter");
		break;
		
		case 3:
		case 4:
		case 5:
			printf("spring");
			break;

		case 6:
		case 7:
		case 8:
			printf("summer");
			break;

		case 9:
		case 10:
		case 11:
			printf("fall");
			break;

	}

	// if문은 범위를 표현할 때
	// switch 문은 경우의 수가 적을때

	printf("저는 아래로 점프할거에요!\n");

	goto skip_code;		// 점프를 시작할 위치는 세미콜론 ;

	printf("이 출력 코드를 건너뛸 겁니다! \n");
skip_code:		// 점프 도착할 위치는 그냥 콜론 :

	printf("점프했습니다.");


	int print_count = 1;

	for (int print_count = 1; print_count <= 3; ++print_count)
	{
		printf("출력 횟수 : %d \n", print_count);
	}

	printf("3번 출력해서 내려왔습니다. \n");

	/*
	* 
	// for ( 반복변수 생성 ; 언제까지 반복할 지 조건; 반복 변수 상태 변경)
	
	*/

	// 1. int print_count = 1;
	// 2. print_count <= 3; 거짓이 되는 순간 바로 끝
	// 3.

	// 반복문을 만들때 인지해야 하는 점
	// 
	// ## 1. 반복 요소 찾기.
	// ## 2. 반복되지 않는 코드는 패턴을 찾아서 반복되는 형태로 바꿀 수 있는지 생각해보기.
	// ## 3. 반복 조건은 < 보다는 <= 로 사용하자 ==> 9까지 반복하겠다,9이하 ==> i <= 9;
	// ## 4. continue 문은 그 아래의 반복문 내용은 무시하고 그다음 반복 순서로 넘어가는것
	//

	// for문은 주로 반복할 코드의 횟수를 명확하게 알 때 사용함.
	// 
	// while문은 시작하면 언제 끝날지 모르는 상황에서 주로 쓰임.
	// 총합이 max_num 이상일 때까지
	// 1부터 계속 증가하며 계산 후 출력
	//
	// do
	// {
	// 
	// } while (반복 조건); // 세미 콜론 붙여야 함.
	// 
	// 
	// 이중 반복문
	// 
	// while( 반복 조건)
	// {
	//		//한번 반복할 때 마다 while문을 반복함.
	//		while ()
	//		{
	//		
	//		}
	// 
	// }
	//	
	// 하루에 운동장 5바퀴를 돈다.
	// 7일동안 운동장에 가서 운동해다.
	// [하루에 운동장 5바퀴를 돈다] 행위를 7번 반복 
		
	int day = 4;
	int count = 2;

	int total_count = 0;

	for (int now_day = 0; now_day <= day; now_day++)
	{
		printf("%d 일째 ===========\n", now_day);
		for (int now_count = 1; now_count <= count; now_count++)
		{
			printf("운동장을 %d번 돌았습니다. \n", (now_day - 1) * 2 + now_count);
		}
	}

