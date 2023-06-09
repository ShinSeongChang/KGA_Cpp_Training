#include <iostream>

void Desc001();

int main()
{
	Desc001();

}

void Desc001()
{
	//const int INT_TEN = 10;
	// new 동적할당
	
	int userInput = -1;
	printf("원하는 크기만큼 배열을 만들겠음. 크기를 입력하시오 : ");
	scanf_s("%d", &userInput);

	int numbers[10] = { 0, };				// => 정적할당
	int* numbers2 = new int[userInput];		// => 동적할당 , 동적할당은 컴퓨터 종료 전까지 해당 메모리가 사라지지 않는다.

	for (int i = 0; i < userInput; i++)
	{
		numbers2[i] = i + 1;
	}

	for (int i = 0; i < userInput; i++)
	{
		printf("i값 : %d \n", numbers2[i]);
	}

	delete[] numbers2;						// => 동적 할당된 메모리값을 해제
}