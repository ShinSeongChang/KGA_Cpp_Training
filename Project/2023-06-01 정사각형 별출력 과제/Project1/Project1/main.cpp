#include <iostream>

void squareSize(int square, int length, int width);			// 정사각형의 크기 출력해주는 squareSize함수 전방선언 

int main()
{
	int width = 0 , length = 0 ;		// 각각 width : 가로변, length : 세로변	
	int square;							// square : 입력받은 정사각형의 크기

	printf("한 변의 길이를 입력해주세요 :");
	scanf_s("%d", &square);

	if (3 <= square && square <= 10)	// 정사각형 변의 크기 조건 : 3이상 , 10이하의 크기일것
	{
		printf("정사각형의 크기는 %d X %d 입니다. \n\n", square, square);

		while (length < square)			// 정사각형의 세로변 반복		
		{

			width = 0;					// 가로변 1줄 출력후 줄바꿈 이후 가로변 출력을 위한 초기화

			while (width < square)		// 정사각형의 가로변 반복문 : 가로변이 입력받은 정사각형 크기와 동일한 문자수를 출력
			{
				printf("* ");
				width += 1;				// 가로변의 크기를 카운트, while문 조건을 벗어나면 별 출력 (가로) 반복 종료
			}

			printf("\n");				// 가로변 출력후 줄바꿈
			length += 1;				// 세로변의 크기를 카운트, while문 조건을 벗어나면 줄바꿈 (세로) 반복 종료


		}

	}

	else								// 정사각형 변의 크기조건을 어길시 나올 문구
	{  
			printf("3 ~ 10 사이의 크기만 입력해주세요. \n\n");

			squareSize(square, length, width);			// 조건 제외 숫자 입력시 전방선언 처리한 함수를 다시 호출하여 처음단계로 돌아간다.
	}

	return 0;

}	// main 함수 종료


void squareSize(int square, int length, int width)				// 예외의 값을 입력 받을시 실행을 처음으로 되돌릴 함수
{
	printf("한 변의 길이를 입력해주세요 :");
	scanf_s("%d", &square);

	if (3 <= square && square <= 10)	
	{
		printf("정사각형의 크기는 %d X %d 입니다. \n\n", square, square);

		while (length < square)					
		{

			width = 0;					

			while (width < square)		
			{
				printf("* ");			
				width += 1;				
			}

			printf("\n");				
			length += 1;				


		}

	}

	else								
	{
		printf("3 ~ 10 사이의 크기만 입력해주세요. \n\n");
		squareSize(square, length, width);
	}
}

