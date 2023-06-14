#include <iostream>

void swap(int* number1, int* number2);
void selectionsort();
void bubblesort();
void insertionsort();

int main()
{
	//bubblesort();
	insertionsort();
	printf("\n\n\n");
}

//void swap(int* number1, int* number2)
//{
//	int temp = 0;
//	temp = *number1;
//	*number1 = *number2;
//	*number2 = temp;
//}
//
//void bubblesort()
//{
//	int numbers[5] = { 9, 5, 7, 1, 6 };
//	
//	for (int i = 0; i<4; i++)
//	{
//		if (numbers[i] > numbers[i + 1])
//		{
//			swap(&numbers[i], &numbers[i + 1]);
//		}
//	}
//
//	for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
//	{
//		printf("%d ", numbers[i]);
//	}
//}
//
//void selectionsort()
//{
//	int numbers[10] = { 51, 7, 21, 78, 13, 68, 99, 81, 1, 75 };
//
//	for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
//	{
//		for (int j = 0; j < sizeof(numbers) / sizeof(int); j++)
//		{
//			if (numbers[i] < numbers[j])
//			{
//				swap(&numbers[i], &numbers[j]);
//			}
//		}
//	}
//
//	for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
//	{
//		printf("%d ", numbers[i]);
//	}
//
//}

void insertionsort()
{
	int numbers[5] = { 77, 31, 15, 59, 6 };
	int save = 0;
	int j = 0;

	for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
	{
		save = numbers[i];

		for ( j = i - 1; j >= 0 && numbers[j] > save; j--) 
		{
			numbers[j + 1] = numbers[j]; 
		}

		numbers[j + 1] = save;

	}

	for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
	{
		printf("%d ", numbers[i]);
	}
}

