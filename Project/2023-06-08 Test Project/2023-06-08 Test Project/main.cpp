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

	// ������		(�迭�� 5��° ���� �����Ϸ��� �� ��)
	// numbers[4];        // �� ���°� �迭������ ������
	// *(ptrnumber + 4)	  // �� ���°� �����͸� ����� ������

	printf("\n\n3��° �ڸ��� �ִ� �� +1 -> %d \n", (*ptrNumber)+1);		// �ּҸ� �������Ͽ� �ּ� ���� ���� Ȯ���ϰ�
																		// �ּҰ��� �Ҵ�� ���� ���ϱ�
	printf("3��° �ڸ��� �ִ� �� +1 -> %d \n", *(ptrNumber +1));			// �������� �ּҰ��� +1	
																		// ��, �� ���� ���� �ּҷ� �������ϱ�

	printf("\n\nnumbers�� ����ִ� �� -> %p \n", numbers);
	printf("numbers[0] �� �ּ� �� -> %p \n\n", &numbers[0]);

	printf("numbers�� size : %d \n", sizeof(numbers));

	//ArrayFunc(numbers);
	//ArrayFunc2(numbers);
}

void Desc002()
{
	// ������ �迭
	char char_[25] = { 0, };

	/* 2���� �迭 �̹��� ���� ����
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
	printf("\n\nptrArray ������ �� : %d \n", *(ptrArray));
	printf("ptrArray +1 �ּ��� ������ �� : %d \n", *(ptrArray + 1));
}

void ArrayFunc2(int array_[])
{
	printf("\n\n�Լ����� ��� �� numbers�� Size : %d \n\n", sizeof(array_));
	for (int i = 0; i < sizeof(array_); i++)
	{
		printf("array[%d]�� �� : %d \n", i, array_[i]);
	}
}

void select(int* ptrNumber, int arraySize) //int *ptrNumber =  numbers�迭�� �ּҰ�
{
	int savePoint = 0;					// �Լ����� ������ ��

	for (int i = 0; i < arraySize; i++) // 1for�� �迭���� ���� ù��° �迭�ڸ�
	{
		for (int j = i; j < arraySize; j++) //2for�� �迭���� 1for�� i���� ���� �ι�° �迭�ڸ�
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
		
		printf("\n\n W A S DŰ�� �����̼���. \n");

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
			printf("Ű �Է��� �߸� �Ǿ����ϴ�.");
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





