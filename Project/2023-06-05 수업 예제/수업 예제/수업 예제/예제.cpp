#include <iostream>

void Description001();
void Description002();
void DescripTion003();
void Description004();


int main()
{
	//Description001();
	//Description002();
	void DescripTion003();

	return 0;
}
// main �Լ� �����


// Casting => �ڷ��� ������ȯ�ϴ� ���
void Description001()
{
	char char_ = 'A';
	int int_ = char_;
	float floatValue = 100.123;

	int_ = floatValue;

	printf("int_ ���� �ȿ� ���� ���� ����ֳ� ? %f \n", (float)int_);

}

//
void Description002()
{
	//int numbers[100];		// 5���� ���ӵ� ������ ������ ��.
	//numbers[0] = 100;
	//numbers[1] = 200;
	//numbers[2] = 300;
	//numbers[3] = 400;
	//numbers[4] = 500;

	const int MAX_ARRAY = 5;
	int numbers[MAX_ARRAY];
	for (int i = 0; i < MAX_ARRAY; i++)
	{
		numbers[i] = i + 2;
		printf("�迭�� �� ���� (�ε���, �ڴ� ��) : (%d, %d) \n", i, numbers[i]);
	}

	int numbers2[5] = { 10, 20, 30, 40, 50 };		// �ٸ� ����� 5���� �迭 ����
	int numbers3[5] = {0, };						// �ٸ� ����� 5���� �迭 ����, ���ӵ� ������ �ʱ�ȭ �ϰ���� ��

	int number1 = 1;
	int number2 = 2;
	int number3 = 3;
	int number4 = 4;
	int number5 = 5;

	printf("�迭�� �� ���� (�ε���, �ڴ� ��) : (%d, %d) \n", 0, number1);
	printf("�迭�� �� ���� (�ε���, �ڴ� ��) : (%d, %d) \n", 1, number2);
	printf("�迭�� �� ���� (�ε���, �ڴ� ��) : (%d, %d) \n", 2, number3);
	printf("�迭�� �� ���� (�ε���, �ڴ� ��) : (%d, %d) \n", 3, number4);
	printf("�迭�� �� ���� (�ε���, �ڴ� ��) : (%d, %d) \n", 4, number5);		//������ �ʰ� �迭


	//printf("�迭�� �� ���� (�ε���, �ڴ� ��) : (%d, %d) \n", 0, numbers2[0]);
	//printf("�迭�� �� ���� (�ε���, �ڴ� ��) : (%d, %d) \n", 1, numbers2[1]);
	//printf("�迭�� �� ���� (�ε���, �ڴ� ��) : (%d, %d) \n", 2, numbers2[2]);
	//printf("�迭�� �� ���� (�ε���, �ڴ� ��) : (%d, %d) \n", 3, numbers2[3]);
	//printf("�迭�� �� ���� (�ε���, �ڴ� ��) : (%d, %d) \n", 4, numbers2[4]);
	//
	//printf("�迭�� �� ���� (�ε���, �ڴ� ��) : (%d, %d) \n", 0, numbers3[0]);
	//printf("�迭�� �� ���� (�ε���, �ڴ� ��) : (%d, %d) \n", 1, numbers3[1]);
	//printf("�迭�� �� ���� (�ε���, �ڴ� ��) : (%d, %d) \n", 2, numbers3[2]);
	//printf("�迭�� �� ���� (�ε���, �ڴ� ��) : (%d, %d) \n", 3, numbers3[3]);
	//printf("�迭�� �� ���� (�ε���, �ڴ� ��) : (%d, %d) \n", 4, numbers3[4]);
}


// ������ ����ϴ� ���α׷� �����
void DescripTion003()
{
	int lineCount[9] = { 0, };
	int nDan[8] = { 0, };

	for (int i = 0; i < 9; ++i)
	{
		lineCount[i];

		for ( int j = 0; j < 9; ++j)
		{
			nDan[j];
			printf("%d X %d = %d \n", lineCount[i], nDan[j], lineCount[i] * nDan[j]);
		}
	}


}

void Description004()
{

	//	���� �ȴ� ��� 1
	char board[5] = { 0, };

	// { board�� �ʱ�ȭ �ϴ� ����
	for (int i = 0; i < 5; i++)
	{
		board[i] = '*';
		if (i == 0)
		{
			board[i] = '*';
		}
	}
	// } board�� �ʱ�ȭ �ϴ� ����

	// { board�� ����ϴ� ����

	for (int i = 0; i < 5; i++)
	{
		printf("%c ", board[i]);
	}

	printf("\n\n");
	// } board�� ����ϴ� ����
}