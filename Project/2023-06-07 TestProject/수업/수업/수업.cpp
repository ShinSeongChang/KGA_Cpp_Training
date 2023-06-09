#include <iostream>
#include <windows.h>
#include <time.h>

void Description001();
void Description002();
void Description003();
void DescShuffle();
void Swap(char firstchar, char secondchar);
void Swap2(char* firstchar, char* secondchar);
void test001();
void test002();
void Shuffleonce(int* firstNumber, int* secondNumber);
void lotto();
void Poker();
void cardShuffle(int* randomshuffle1, int* randomshuffle2);

// main �Լ� ���ۺ�

int main()
{

	//char string_1[15] = "Good morning!";
	//char string_2[] = "Good morning!";
	//string_1 = "Good morning!";			// ���� ���� �� ���� �Ұ���

	Description001();
	//Description002();
	//Description003();
	//DescShuffle();
	//lotto();
	//test001();
	//test002();
	//Poker();

	return 0;
}

//main �Լ� �����


void Description001()
{
	
	char string_[15] = "Good morning!\n";
	char stringcopy[16] = { 0, };

	char string_2[] = "Good morning! \n";
	int numbers[10] = { 0, };

	printf("���ڿ� �迭�� ũ�� %d \n", sizeof(string_) * sizeof(char));
	printf("���ڿ� �迭 2��° ���� ũ�� %d \n", sizeof(string_2));
	printf("������ �迭�� ũ�� %d \n", sizeof(numbers));
	printf("������ �迭�� ���� %d \n", sizeof(numbers) / sizeof(int));

	string_[0] = 'G';
	string_[1] = 'g';
	string_[2] = 'g';

	printf("���ڿ� �迭�� ������ �����Ǵ���? -> %s", string_);

	bool isnullSameZero = false;		// NULL ���� 0���̶��

	if (0 == '\0')		// NULL ���� 0���̶�� ��

	{
		isnullSameZero = true;
	}

	else				// NULL ���� 0���� �ƴ϶�� ����
	{
		isnullSameZero = false;
	}

	printf("Null�� 0�� ���� ���ΰ�? : [%d] \n", isnullSameZero);

	char string3[4];
	string3[0] = 'H';
	string3[1] = 'i';
	string3[2] = '!';
	string3[3] = '\0';

	char string4[4] = "Hi!";

	printf("string4�� ������. -> %s \n", string4);			// �迭 ���ο� ������ "Hi!" ������ �о [0] ~ [2]
	printf("string3�� ������. -> %s \n", string3);			//* �迭 ��ü�� �Ҵ�� ũ�� ������ �о�⿡ ������ ����.
															//* �迭�� [0] ~ [3] ũ������ �Էµ� ���� [0] ~ [2] �̱� ������
															//* ���̾��� [3] ���� �о ���� �߻�

}

void Description002()
{
	char str[10] = "Hello";		// index�� 0���� ����.
	char temp = '\0';

	//temp = str[0];
	//str[0] = str[4];
	//str[4] = temp;
	Swap2(&str[0], &str[4]);
	printf("%s \n", str);

}

void Description003()
{
	// ������ ���� �ĺ���
	int number = 100;
	int* ptrNumber = &number;

	printf("number ������ �ּҴ� : %p, �Ҵ�� ���� %d \n", &number, number);
	printf("ptrNumber ������ �ּҴ� : %p, �Ҵ�� ���� %p, �������� �� : %d \n", &ptrNumber, ptrNumber, *ptrNumber);
}

void DescShuffle()
{
	srand(time(NULL));

	// { �迭�� ����� �ʱ�ȭ
	int numbers[45] = { 0, };
	for (int i = 0; i < 45; i++)
	{
		numbers[i] = i + 1;
	}
	// } �迭�� ����� �ʱ�ȭ

	printf("Shuffle �ϱ� �� \n\n");

	// { �迭�� ���
	for (int i = 0; i < 45; i++)
	{
		printf("%d ", numbers[i]);
	}
	// } �迭�� ���

	printf("\n\n");

	// { ���÷���

	const int shuffleCount = 100;

	for (int i = 0; i < shuffleCount; i++)
	{
		int randomIdx1, randomIdx2 = 0;
		randomIdx1 = rand() % 10;
		randomIdx2 = rand() % 10;

		Shuffleonce(&numbers[randomIdx1], &numbers[randomIdx2]);
		
	}

	// } ���� ����

	printf("Shuffle �� �� \n\n");

	// { �迭�� ���
	for (int i = 0; i < 6; i++)
	{
		Sleep(1000);
		printf("%d ", numbers[i]);
	}
	// } �迭�� ���

	printf("\n\n");


}

void Shuffleonce(int* firstNumber, int* secondNumber)
{
	int temp = 0;
	temp = *firstNumber;
	*firstNumber = *secondNumber;
	*secondNumber = temp;
}

void Swap(char firstchar, char secondchar)
{
	printf("[�����ϱ���] firstchar �� : %c , secondchar �� : %c \n", firstchar, secondchar);
	char temp = '\0';

	temp = firstchar;
	firstchar = secondchar;
	secondchar = temp;

	printf("[���� ����] firstchar �� : %c , secondchar �� : %c \n", firstchar, secondchar);
}

void Swap2(char* firstchar, char* secondchar)
{
	printf("[�����ϱ���] firstchar �� : %c , secondchar �� : %c \n", *firstchar, *secondchar);
	char temp = '\0';

	temp = (*firstchar);
	(*firstchar) = (*secondchar);
	(*secondchar) = temp;

	printf("[���� ����] firstchar �� : %c , secondchar �� : %c \n", *firstchar, *secondchar);
}

// ���ڿ��� �Է¹޾Ƽ� �빮�� - �ҹ��� - �빮�� - �ҹ��� ....������ �����ؼ� ����ϴ� ���α׷� �ۼ��ϱ� (Easy)
void test001()
{
	char str[300] = { 0, };

	printf("���ڿ��� �Է��� �ּ��� : ");
	std::cin >> str;

	for (int i = 0; i < sizeof(str); i++)
	{

		if (i % 2 == 0)								// �빮�ڰ� �� �ڸ� == %2 ���� 0�� �ڸ�	== ¦��
		{
			if (97 <= str[i] && str[i] <= 122)		// �Է¹����� �ҹ��ڶ��
			{
				str[i] -= 32;						// �빮�ڷ� ��ȯ�Ͽ�
			}
		}
		
		else										// �ҹ��ڰ� �� �ڸ� == %2 ���� 1�̻��� �ڸ�	== Ȧ��
		{
			 if (65 <= str[i] && str[i] <= 90)		// �Է¹����� �빮�ڶ��
			{										// �������� 0�� �ƴ��ڸ����� �ҹ��ڰ� ����
				str[i] += 32;						// �ҹ��ڷ� ��ȯ�Ͽ�
			}
		}
	
	}

	printf("����� �Է� �޾Ҵ°� ? : %s", str);

}

// ���� ���α׷��� �����ؼ� �Ųٷ� ����� ����ϴ� ���α׷� �ۼ��ϱ� Normal
void test002()
{
	char str[300] = { 0, };
	char reversestr[] = { 0, };


	printf("���ڿ��� �Է��� �ּ��� : ");
	std::cin >> str;

	for (int i = 0; i < sizeof(str); i++)
	{

		if (i % 2 == 0)								// �빮�ڰ� �� �ڸ� == %2 ���� 0�� �ڸ�	== ¦���ڸ���
		{
			if (97 <= str[i] && str[i] <= 122)		// �Է¹����� �ҹ��ڶ��
			{
				str[i] -= 32;						// �빮�ڷ� ��ȯ�Ͽ�
			}
		}

		else										// �ҹ��ڰ� �� �ڸ� == %2 ���� 1�̻��� �ڸ�	== Ȧ���ڸ���
		{
			if (65 <= str[i] && str[i] <= 90)		// �Է¹����� �빮�ڶ��
			{										// �������� 0�� �ƴ��ڸ����� �ҹ��ڰ� ����
				str[i] += 32;						// �ҹ��ڷ� ��ȯ�Ͽ�
			}
		}

	}
	
	printf("����� �Է� �޾Ҵ°� ? : %s", reversestr);
}

void lotto()
{
	srand(time(NULL));

	int number[45] = { 0, };
	
	for (int i = 0; i < 45; i++)
	{
		number[i] = i + 1;
	}

	for (int i = 0; i < 100; i++)
	{
		int randomNumber1, randomNumber2;
		randomNumber1 = rand() % 45;
		randomNumber2 = rand() % 45;

		Shuffleonce(&number[randomNumber1], &number[randomNumber2]);

	}

	printf("�ζǹ�ȣ ��÷ : ");

	for (int i = 0; i < 6; i++)
	{
		Sleep(1000);
		printf("%d ", number[i]);
	}

}

/*
void Poker()
{
	srand(time(NULL));

	int cards[52] = { 0, };
	int patterns_card[13] = { 0, };

	char cardPatterns_Spade[8] = "Spade";
	char cardPatterns_Diamond[8] = "Diamond";
	char cardPatterns_Heart[8] = "Heart";
	char cardPatterns_Clover[8] = "Clover";

	// ī���� ���纰 13��
	for (int i = 0; i < 13; i++)
	{
		patterns_card[i] = i+ 1;
		if (i == 1)
		{
			patterns_card[i] = 'A';
		}

		else if (i == 11)
		{
			patterns_card[i] = 'J';
		}
		else if (i == 12)
		{
			patterns_card[i] = 'Q';
		}
		else if(i == 13)
		{
			patterns_card[i] = 'K';
		}
	}

	// �� 52���� ī��
	for (int i = 0; i < 52; i++)
	{
		cards[i] = i;
	}

	// ī�带 ���� Ƚ��
	for (int i = 0; i < 1000; i++)
	{
		int randomShuffle1, randomShuffle2 = 0;
		randomShuffle1 = rand() % 52;
		randomShuffle2 = rand() % 52;

		cardShuffle(&cards[randomShuffle1], &cards[randomShuffle2]);

	}

	printf("%d", cards);


}
*/

// A, 2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K		/ �� ���� �� 13�徿 �����Ѵ�.

