#include <stdio.h>

int main(void)
{
	// sizeof(int[5]);

	// sizeof(arr) = ��� �� * sizeof(int);
	// ��,  ��Ҽ�(�� �ε��� ��) = sizeof(arr) / sizeof(int);

	// size = sizeof(arr) / sizeof(arr[0]);

	// ex) => for(int i = 0; i < siezof(arr) / sizeof(arr[0]); i++)
	// �ش� �ݺ����� �ݺ� �ɶ����� �ε������� Ž���ϴ� sizeof(arr) / sizeof(arr[0]) �� �����ϱ� ������ ����ȭ�� �Ҹ��ϴ�.

	/*char str[] = "ABCDE FGH";
	int size = sizeof(str) / sizeof(str[0]) -1;
	int temp = 0;
	int j = 0;

	printf("%s \n", str);

	for (int i = size - 1; j < i; i--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j++;
	}

	printf("%s", str);
	*/
	
	// ������ �迭 : �迭�� ��ҷ� ������ �迭 ��, �迭�� �迭
	// int arr [2] [3]; => arr[3] �迭�� 2�� ��ŭ �����ߴ�.  => sizeof(int) 3���� 2���� �������ִ�. => 24����Ʈ
	// int arr [2] [3] [4] => int arr[3] [4] �迭�� 2����ŭ �����ߴ�.
	// int arr [2] [3] [4] [5] => int arr [3] [4] [5] �迭�� 2����ŭ �����ߴ�.

	// int arr_2d [2] [3]'
	// int arr_count = sizeof(arr_2d) / sizeof(arr_2d[0]);
	// int arr[2][3] / int[3]
	// 
	// int arr_length = sizeof(arr_2d[0]) / sizeof(arr_2d[0][0]);
	// 
	// 2. �迭 ������ŭ �ݺ�
	// for ()
	// {		1. 1���� �迭�� ��� ��Ҹ� ����ϴ� ������
	//		for()
	//		{
	//			
	//		}
	// }
	// 
	// int map_height = sizeof(map) / sizeof(map[0]);
	// int map_width = sizeof(map[0]) / sizeof(map[0][0]);
	// 
	// for (int height = 0; height < map_height; hegith++)
	// {
	//		for(int widht = 0; widht < map_width; width++)
	//		{
	//			switch(map[height][width])
	//			{
	//				case 0: printf(" ");
	//						break;
	//				case 1: printf("@ ");
	//						break;
	//			}
	// 
	//			printf("\n");
	//		}
	// }
	// 
	// 
	// 
	// 
	// 
	// 
	// 
	// 
	// 
	// 
	// 
	// 
	// 
	// 
	// 
	// 
	// 
	//


	int num = 7;

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j)
		{

		}

		printf("\n");
	}

}