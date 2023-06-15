#include <stdio.h>

int main(void)
{
	// sizeof(int[5]);

	// sizeof(arr) = 요소 수 * sizeof(int);
	// 즉,  요소수(총 인덱스 값) = sizeof(arr) / sizeof(int);

	// size = sizeof(arr) / sizeof(arr[0]);

	// ex) => for(int i = 0; i < siezof(arr) / sizeof(arr[0]); i++)
	// 해당 반복문은 반복 될때마다 인덱스값을 탐색하는 sizeof(arr) / sizeof(arr[0]) 을 실행하기 때문에 최적화에 불리하다.

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
	
	// 다차원 배열 : 배열을 요소로 가지는 배열 즉, 배열의 배열
	// int arr [2] [3]; => arr[3] 배열을 2개 만큼 생성했다.  => sizeof(int) 3개를 2묶음 가지고있다. => 24바이트
	// int arr [2] [3] [4] => int arr[3] [4] 배열을 2개만큼 생성했다.
	// int arr [2] [3] [4] [5] => int arr [3] [4] [5] 배열을 2개만큼 생성했다.

	// int arr_2d [2] [3]'
	// int arr_count = sizeof(arr_2d) / sizeof(arr_2d[0]);
	// int arr[2][3] / int[3]
	// 
	// int arr_length = sizeof(arr_2d[0]) / sizeof(arr_2d[0][0]);
	// 
	// 2. 배열 개수만큼 반복
	// for ()
	// {		1. 1차원 배열의 모든 요소를 출력하는 행위를
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