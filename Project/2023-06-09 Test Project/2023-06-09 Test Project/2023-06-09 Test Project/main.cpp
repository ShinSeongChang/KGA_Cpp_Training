#include <iostream>

void Desc001();

int main()
{
	Desc001();

}

void Desc001()
{
	//const int INT_TEN = 10;
	// new �����Ҵ�
	
	int userInput = -1;
	printf("���ϴ� ũ�⸸ŭ �迭�� �������. ũ�⸦ �Է��Ͻÿ� : ");
	scanf_s("%d", &userInput);

	int numbers[10] = { 0, };				// => �����Ҵ�
	int* numbers2 = new int[userInput];		// => �����Ҵ� , �����Ҵ��� ��ǻ�� ���� ������ �ش� �޸𸮰� ������� �ʴ´�.

	for (int i = 0; i < userInput; i++)
	{
		numbers2[i] = i + 1;
	}

	for (int i = 0; i < userInput; i++)
	{
		printf("i�� : %d \n", numbers2[i]);
	}

	delete[] numbers2;						// => ���� �Ҵ�� �޸𸮰��� ����
}