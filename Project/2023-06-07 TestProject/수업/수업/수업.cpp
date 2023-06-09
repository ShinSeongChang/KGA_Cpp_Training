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

// main 함수 시작부

int main()
{

	//char string_1[15] = "Good morning!";
	//char string_2[] = "Good morning!";
	//string_1 = "Good morning!";			// 선언 이후 값 대입 불가능

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

//main 함수 종료부


void Description001()
{
	
	char string_[15] = "Good morning!\n";
	char stringcopy[16] = { 0, };

	char string_2[] = "Good morning! \n";
	int numbers[10] = { 0, };

	printf("문자열 배열의 크기 %d \n", sizeof(string_) * sizeof(char));
	printf("문자열 배열 2번째 것의 크기 %d \n", sizeof(string_2));
	printf("정수형 배열의 크기 %d \n", sizeof(numbers));
	printf("정수형 배열의 길이 %d \n", sizeof(numbers) / sizeof(int));

	string_[0] = 'G';
	string_[1] = 'g';
	string_[2] = 'g';

	printf("문자열 배열이 정말로 수정되는지? -> %s", string_);

	bool isnullSameZero = false;		// NULL 값이 0값이라면

	if (0 == '\0')		// NULL 값이 0값이라면 참

	{
		isnullSameZero = true;
	}

	else				// NULL 값이 0값이 아니라면 거짓
	{
		isnullSameZero = false;
	}

	printf("Null은 0과 같은 값인가? : [%d] \n", isnullSameZero);

	char string3[4];
	string3[0] = 'H';
	string3[1] = 'i';
	string3[2] = '!';
	string3[3] = '\0';

	char string4[4] = "Hi!";

	printf("string4번 찍어보겠음. -> %s \n", string4);			// 배열 내부에 지정된 "Hi!" 까지만 읽어냄 [0] ~ [2]
	printf("string3번 찍어보겠음. -> %s \n", string3);			//* 배열 자체에 할당된 크기 끝까지 읽어내기에 오류가 난다.
															//* 배열은 [0] ~ [3] 크기지만 입력된 것은 [0] ~ [2] 이기 때문에
															//* 값이없는 [3] 까지 읽어서 오류 발생

}

void Description002()
{
	char str[10] = "Hello";		// index는 0부터 시작.
	char temp = '\0';

	//temp = str[0];
	//str[0] = str[4];
	//str[4] = temp;
	Swap2(&str[0], &str[4]);
	printf("%s \n", str);

}

void Description003()
{
	// 포인터 직접 쳐보기
	int number = 100;
	int* ptrNumber = &number;

	printf("number 변수의 주소는 : %p, 할당된 값은 %d \n", &number, number);
	printf("ptrNumber 변수의 주소는 : %p, 할당된 값은 %p, 역참조한 값 : %d \n", &ptrNumber, ptrNumber, *ptrNumber);
}

void DescShuffle()
{
	srand(time(NULL));

	// { 배열의 선언과 초기화
	int numbers[45] = { 0, };
	for (int i = 0; i < 45; i++)
	{
		numbers[i] = i + 1;
	}
	// } 배열의 선언과 초기화

	printf("Shuffle 하기 전 \n\n");

	// { 배열의 출력
	for (int i = 0; i < 45; i++)
	{
		printf("%d ", numbers[i]);
	}
	// } 배열의 출력

	printf("\n\n");

	// { 셔플로직

	const int shuffleCount = 100;

	for (int i = 0; i < shuffleCount; i++)
	{
		int randomIdx1, randomIdx2 = 0;
		randomIdx1 = rand() % 10;
		randomIdx2 = rand() % 10;

		Shuffleonce(&numbers[randomIdx1], &numbers[randomIdx2]);
		
	}

	// } 셔플 로직

	printf("Shuffle 한 후 \n\n");

	// { 배열의 출력
	for (int i = 0; i < 6; i++)
	{
		Sleep(1000);
		printf("%d ", numbers[i]);
	}
	// } 배열의 출력

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
	printf("[스왑하기전] firstchar 값 : %c , secondchar 값 : %c \n", firstchar, secondchar);
	char temp = '\0';

	temp = firstchar;
	firstchar = secondchar;
	secondchar = temp;

	printf("[스왑 이후] firstchar 값 : %c , secondchar 값 : %c \n", firstchar, secondchar);
}

void Swap2(char* firstchar, char* secondchar)
{
	printf("[스왑하기전] firstchar 값 : %c , secondchar 값 : %c \n", *firstchar, *secondchar);
	char temp = '\0';

	temp = (*firstchar);
	(*firstchar) = (*secondchar);
	(*secondchar) = temp;

	printf("[스왑 이후] firstchar 값 : %c , secondchar 값 : %c \n", *firstchar, *secondchar);
}

// 문자열을 입력받아서 대문자 - 소문자 - 대문자 - 소문자 ....순으로 수정해서 출력하는 프로그램 작성하기 (Easy)
void test001()
{
	char str[300] = { 0, };

	printf("문자열을 입력해 주세요 : ");
	std::cin >> str;

	for (int i = 0; i < sizeof(str); i++)
	{

		if (i % 2 == 0)								// 대문자가 들어갈 자리 == %2 값이 0인 자리	== 짝수
		{
			if (97 <= str[i] && str[i] <= 122)		// 입력받은게 소문자라면
			{
				str[i] -= 32;						// 대문자로 변환하여
			}
		}
		
		else										// 소문자가 들어갈 자리 == %2 값이 1이상인 자리	== 홀수
		{
			 if (65 <= str[i] && str[i] <= 90)		// 입력받은게 대문자라면
			{										// 나머지가 0이 아닌자리에는 소문자가 들어갈것
				str[i] += 32;						// 소문자로 변환하여
			}
		}
	
	}

	printf("제대로 입력 받았는가 ? : %s", str);

}

// 위의 프로그램을 수정해서 거꾸로 뒤집어서 출력하는 프로그램 작성하기 Normal
void test002()
{
	char str[300] = { 0, };
	char reversestr[] = { 0, };


	printf("문자열을 입력해 주세요 : ");
	std::cin >> str;

	for (int i = 0; i < sizeof(str); i++)
	{

		if (i % 2 == 0)								// 대문자가 들어갈 자리 == %2 값이 0인 자리	== 짝수자리에
		{
			if (97 <= str[i] && str[i] <= 122)		// 입력받은게 소문자라면
			{
				str[i] -= 32;						// 대문자로 변환하여
			}
		}

		else										// 소문자가 들어갈 자리 == %2 값이 1이상인 자리	== 홀수자리에
		{
			if (65 <= str[i] && str[i] <= 90)		// 입력받은게 대문자라면
			{										// 나머지가 0이 아닌자리에는 소문자가 들어갈것
				str[i] += 32;						// 소문자로 변환하여
			}
		}

	}
	
	printf("제대로 입력 받았는가 ? : %s", reversestr);
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

	printf("로또번호 추첨 : ");

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

	// 카드의 문양별 13장
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

	// 총 52장의 카드
	for (int i = 0; i < 52; i++)
	{
		cards[i] = i;
	}

	// 카드를 섞을 횟수
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

// A, 2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K		/ 한 무늬 당 13장씩 존재한다.

