#include <iostream>

// void(void) 함수 선언, 매개변수 필요 없음.
void print(void);

// void() 함수 선언, 
void print();

/*

[함수 호출자에게 보내줄 값의 자료형] [함수 이름] (코드실행시에 필요한 변수들 [매개 변수] )
void Print_Rotate_Info (int x, int y)
{

	실행할 코드들...
	return 호출자에게 보내줄 값.

}

*/

int main()
{
	// Initialize 코드
	int is_game_stop = 0;

	while (1)
	{
		if (is_game_stop == 1)
		{
			break;
		}

		// Update 코드, 키보드 입력
		// Render 코드,  화면 출력
	}


	// 함수 호출자
	// Print_Rotate_Info();

	// Release 코드


	// 나눗셈을 할때 0으로 나누면 안된다.
	// 0으로 나누면 크래시 발생

	// 함수 오버로딩 

	// 버그와 에러는 다른 것

	return 0;
}