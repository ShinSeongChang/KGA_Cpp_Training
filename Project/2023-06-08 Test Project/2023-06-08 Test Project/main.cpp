#include <iostream>
#include <conio.h>

void Desc001();
void ArrayFunc(int* ptrArray);
void ArrayFunc2(int array_[]);
void select(int* ptrNumber, int arraySize);
void bubble(int* ptrNumber, int arraySize);
void swap(int* firstNumber, int* secondNumber);
void Desc002();
void Move();
void Swap2(char* firstchar, char* secondchar);
void keyUp();


int main()
{
	int randomnum[5] = { 5, 9, 3 ,7, 1 };

	//Desc001();
	//select(randomnum, sizeof(randomnum) / sizeof(int));
	//Desc002();
	Move();

	return 0;
}

void Desc001()
{
	int numbers[10] = { 0, };

	for (int i = 0; i < 10; i++)
	{
		numbers[i] = (i + 1) *10;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", numbers[i]);
	}

	int* ptrNumber = &numbers[2];

	// 역참조		(배열의 5번째 값에 접근하려고 할 때)
	// numbers[4];        // 이 형태가 배열에서의 역참조
	// *(ptrnumber + 4)	  // 이 형태가 포인터를 사용한 역참조

	printf("\n\n3번째 자리에 있는 값 +1 -> %d \n", (*ptrNumber)+1);		// 주소를 역참조하여 주소 내부 값을 확인하고
																		// 주소값에 할당된 값에 더하기
	printf("3번째 자리에 있는 값 +1 -> %d \n", *(ptrNumber +1));			// 역참조할 주소값의 +1	
																		// 즉, 그 다음 순서 주소로 역참조하기

	printf("\n\nnumbers가 들고있는 값 -> %p \n", numbers);
	printf("numbers[0] 의 주소 값 -> %p \n\n", &numbers[0]);

	printf("numbers의 size : %d \n", sizeof(numbers));

	//ArrayFunc(numbers);
	//ArrayFunc2(numbers);
}

void Desc002()
{
	// 다차원 배열
	char char_[25] = { 0, };

	/* 2차원 배열 이미지 이해 예시
	char char2_[5][5] =
	{
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25}
	}
	*/

	char char_2[5][5] = { 0, };

	//for (int i = 0; i < 25; i++)
	//{
	//	char_[i] = '*';
	//}
	//for (int i = 0; i < 25; i++)
	//{
	//	printf("%c ", char_[i]);
	//	if (i % 5 == 4)
	//	{
	//		printf("\n");
	//	}
	//}

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			if (x == 2 && y == 2)
			{
				char_2[2][2] = '0';
				continue;
			}

			char_2[y][x] = '*';
		}
	}

	//char_2[2][2] = '0';


	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			printf("%c ", char_2[y][x]);
		}

		printf("\n");
	}

	printf("\n");
}

void ArrayFunc(int* ptrArray)
{
	printf("\n\nptrArray 역참조 값 : %d \n", *(ptrArray));
	printf("ptrArray +1 주소의 역참조 값 : %d \n", *(ptrArray + 1));
}

void ArrayFunc2(int array_[])
{
	printf("\n\n함수에서 찍어 본 numbers의 Size : %d \n\n", sizeof(array_));
	for (int i = 0; i < sizeof(array_); i++)
	{
		printf("array[%d]의 값 : %d \n", i, array_[i]);
	}
}

void select(int* ptrNumber, int arraySize) //int *ptrNumber =  numbers배열의 주소값
{
	int savePoint = 0;					// 함수에서 저장할 값

	for (int i = 0; i < arraySize; i++) // 1for은 배열에서 비교할 첫번째 배열자리
	{
		for (int j = i; j < arraySize; j++) //2for은 배열에서 1for의 i값과 비교할 두번째 배열자리
		{

			if (*(ptrNumber + i) > *(ptrNumber + j))//*(ptrNumber + i) = numbers[i]  >  *(ptrNumber + j)= numbers[j]
			{
				savePoint = *(ptrNumber + i);
				*(ptrNumber + i) = *(ptrNumber + j);
				*(ptrNumber + j) = savePoint;

			}
		}
	}

}

void swap(int* firstNumber, int* secondNumber)
{
	int temp = 0;
	temp = *firstNumber;
	*firstNumber = *secondNumber;
	*secondNumber = temp;
}

void Move()
{
	char star_[5][5] = { 0, };

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			if (x == 2 && y == 2)
			{
				star_[2][2] = '0';
				continue;
			}

			star_[x][y] = '*';
		}
	}

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			printf("%c ", star_[x][y]);
		}
		printf("\n");
	}

	int x = 2;
	int y = 2;

	while (1)
	{
		
		printf("\n\n W A S D키로 움직이세요. \n");

		char userKey = _getch();

		//system("cls");

		if ('W' == userKey || userKey == 'w')
		{
			
			x += 1;
		}

		else if ('S' == userKey || userKey == 's')
		{
			
		}

		else if ('A' == userKey || userKey == 'a')
		{
			
		}

		else if ('D' == userKey || userKey == 'd')
		{
			
		}

		else
		{
			printf("키 입력이 잘못 되었습니다.");
			continue;
		}

		system("cls");

		for (int y = 0; y < 5; y++)
		{
			for (int x = 0; x < 5; x++)
			{
				if (x == 2 && y == 2)
				{
					star_[x][y] = '0';
					continue;
				}

				star_[x][y] = '*';
			}
		}

		for (int y = 0; y < 5; y++)
		{
			for (int x = 0; x < 5; x++)
			{
				printf("%c ", star_[x][y]);
			}
			printf("\n");
		}


	}

}

void Swap2(char* firstchar, char* secondchar)
{
	char temp = '\0';
	temp = (*firstchar);
	(*firstchar) = (*secondchar);
	(*secondchar) = temp;

}





