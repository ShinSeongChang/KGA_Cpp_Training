#include<iostream>
// { 함수 전방선언부

void Circle(float PI, int r);
float cc(float PI, int r);
void boolalPhabet(char alphabet);

//void Triplenumber(int num1, int num2, int num3, int result1);
//void sss(int num1, int num2, int num3, int result2);

// } 함수 전방 선언부
// 함수 전방 선언을 해두면 main함수 뒤에 함수식이 있어도 


int main()
{
//	 { 변수 선언부
//
//	int num1, num2, num3;
//
//	 } 변수 선언부
//	 { 사용자 입력 받는 로직
//	printf("정수 one : ");
//	scanf_s("%d", &num1);
//	printf("정수 two : ");
//	scanf_s("%d", &num2);
//	 } 사용자 입력 받는 로직 
//	printf("정수 두개를 입력해주세요 : ");
//	scanf_s("%d, %d", &num1, &num2);
//	 { 실제 연산하는 로직 / 플러스 연산
//	result = num1 + num2;
//	printf("%d + %d = %d \n", num1, num2, result);
//	 } 실제 연산하는 로직 / 플러스 연산
//
//	printf("정수 3개를 입력해주세요 : ");
//	scanf_s("%d, %d, %d", &num1, &num2, &num3);
//
//	int result1 = num1 + num2 * num3;
//	int result2 = (num1 - num2) * (num2 + num3) * (num3 % num1);
//
//	Triplenumber(num1, num2, num3, result1);
//	sss(num1, num2, num3, result2);
//
//	return 0;
//
//}
//
//void Triplenumber(int num1, int num2, int num3, int result1)
//{
//	printf("%d + %d * %d = %d \n", num1, num2, num3, result1);
//}
//
//void sss(int num1, int num2, int num3, int result2)
//{
//	printf("(%d - %d) * (%d + %d) * (%d %% %d) = %d \n", num1, num2, num2, num3, num3, num1, result2);

	//정수형 데이터 타입들
	//char charValue = 'A';					//문자 하나를 저장하기 위한 데이터 타입
	//short shortValue = 10;					//int 보다 작은 수를 저장하기 위한 데이터 타입
	//int intValue = 100;						//가장 만만한 수를 저장하기 위한 데이터 타입
	//long longValue = 200;					//int가 커져서 이제 잘 안쓰는 데이터 타입
	//long long longlongValue = 1000;			//int보다 큰 수를 저장하기 위한 데이터 타입

	////실수형 데이터 타입들
	//
	//float floatValue = 10.1;				//가장 만만한 실수를 저장하기 위한 데이터 타입
	//double doubleValue = 100.1;				//float 보다 큰 실수를 저장하기 위한 데이터 타입
	//long double longdoubleValue = 200.1;	//double 보다 큰 실수를 저장하기 위한 데이터 타입

	//printf("char 의 크기는? %d byte. \n", sizeof(charValue));
	//printf("short 의 크기는? %d byte. \n", sizeof(shortValue));
	//printf("int 의 크기는? %d byte. \n", sizeof(intValue));
	//printf("long 의 크기는? %d byte. \n", sizeof(longValue));
	//printf("long long 의 크기는? %d byte. \n\n", sizeof(longlongValue));

	//printf("float 의 크기는? %d byte. \n", sizeof(floatValue));
	//printf("double 의 크기는? %d byte. \n", sizeof(doubleValue));
	//printf("longdouble 의 크기는? %d byte. \n", sizeof(longdoubleValue));

	//const float pi = 3.141592f;
	//int r;
	//printf("원의 반지름을 입력해주세요 : ");
	//scanf_s("%d", &r);
	//circle(pi, r);
	//float result = cc(pi, r);
	//printf("원의 넓이는 %f 입니다.\n", result);
	//

//	char charValue = 'A';
//
//	printf("char 출력할 때는 C로 해보자. -> %c \n", 97);
//
//	bool isSame = ('A' == 65);
//	char someAlphabet = 'a';
//	bool isBigAlpabet = ('A' <= someAlphabet && someAlphabet <= 'Z');
//	printf("\nSome alphabet은 대문자인가?? %d \n", isBigAlpabet);
	
    //char alphabet;
	//printf("글자 한 개를 입력해주세요 : ");
	//scanf_s("%c", &alphabet);
	//이지모드
	//bool emoticon = (65 <= alphabet && 90 >= alphabet || alphabet >= 'a' && alphabet <= 'z');
	//printf("이지모드 \n");
	//printf((emoticon == 1) ? "입력한 글자는 특수문자가 아닙니다. \n" : "입력한 글자는 특수문자 입니다.\n");
	// 하드모드
	//printf("\n\n하드모드 \n");
	//boolalphabet(alphabet);

	// 조건문 (if, else if문)

	//bool issame = ('A' == 65);

	//char someAlphabet = '!';
	//bool isBigAlphabet = ('A' <= someAlphabet && someAlphabet <= 'Z');
	//bool isSmallAlphabet = ('a' <= someAlphabet && someAlphabet <= 'z');
	//bool isNumber = ('0' <= someAlphabet && someAlphabet <= '9');

	//if (isBigAlphabet)
	//{
	//	printf("영문 대문자 입니다. \n");
	//}		//if문은 조건식이 참이면 스코프 안의 내용을 진행하고, 거짓이면 건너뛴다.

	//else if (isSmallAlphabet)
	//{
	//	printf("영문 소문자 입니다. \n");
	//}

	//else if (isNumber)
	//{
	//	printf("숫자 입니다. \n");
	//}

	//else
	//{
	//	printf("잘 모르겠습니다. \n");
	//}		//위의 조건식에서 참이 아닌, 다른 모든 경우 스코프 안의 내용을 진행한다.


	//while문 예제
	/*
	int loopcount = 388;
	while (1 <= loopcount)
	{
		printf("Hello World! 몇 번째 돌고 있는지? %d \n", loopcount);
		loopcount -= 1; 
		// loop  종료

	}
	*/
	
	/*
	int num = 1;

	while (num <= 10)
	{
		printf("현재 숫자의 값 %d \n", num);
		num += 1;

	}

	*/

int side1;
	
	printf("숫자를 입력해주세요 : ");
	scanf_s("%d", &side1);

	while (3 <= side1 && side1 <= 10)
	{
		scanf_s
	}


	return 0;
	
}// main()                <---- 함수의 끝을 알리는 주석, 습관을 들이자.


void Circle(float PI, int r)
{
	float result = PI * r * r;
	printf("원의 넓이는 %.2f 입니다.", result);

}

float cc(float PI, int r)
{
	return PI * r * r;
}

void boolalPhabet(char alphabet)
{
	bool emoticon1 = (33 <= alphabet && 47 >= alphabet || alphabet >= 58 && alphabet <= 64);
	bool emoticon2 = (91 <= alphabet && 96 >= alphabet || alphabet >= 123 && alphabet <= 126);
	bool emoticon3 = (48 <= alphabet && 57 >= alphabet);
	bool emoticon4 = (65 <= alphabet && 90 >= alphabet);
	bool emoticon5 = (97 <= alphabet && 122 >= alphabet);

	printf((emoticon1 || emoticon2 == 1) ? "입력한 글자는 특수문자 입니다.\n" : (emoticon3 == 1) ? "입력한 글자는 숫자입니다.\n"
		: (emoticon4 == 1) ? "입력한 글자는 대문자 알파벳입니다. \n" : (emoticon5 == 1) ? "입력한 글자는 소문자 알파벳입니다.\n" : 
	 "입력한 글자는 특수문자가 아닙니다.\n");
}
