#include<iostream>
#include<stdio.h>

//void healing(int num);
// main 함수보다 먼저 내가 만든 함수가 이런 모양이다 라고 알려줌.
// 전방선언.

//*
//
//int age(int age) //함수의 정의
//{
//	return age;
//}
//
//void myage(int age) //함수의 정의
//{
//	printf("나이 : %d\n", age);
//}
//
//int main()
//{
// printf("이름 : 신성창\n");
//	myage(26); //void형 출력시                    함수의 호출
//	
//	printf("나이 : %d \n", age(26)); int형 출력시  함수의 호출
//	
// printf("전화번호 : 010-4300-2937 \n");
//}
//
//*/
//
//*
//int damage(int num)
//{
//	printf("크리티컬 데미지 발생 : %f", num * 1.5);
//	return num;
//}
//
//int main()
//{
//	damage(100);
//	return 0;
//
//}
//
//*/
//
//float critcaldamage(float ciriticaldamage, int damage, float critical)
//{
//	return ciriticaldamage = damage * critical;
//}
//
//int main()
//{
//	printf("크리티컬 데미지 발생! : %0.f \n", critcaldamage(1, 100, 1.5));
//
//	return 0;
//
//}
//void plus(int num1, int num2)
//{
//	printf("%d + %d = %d \n", num1, num2, num1 + num2);
//}
//
//int minus(int num1, int num2)
//{
//	printf("%d - %d = %d \n", num1, num2, num1 - num2);
//	return 0;
//}
//
//void times(float num1, float num2)
//{
//	printf("%0.1f * %0.1f = %0.1f \n", num1, num2, num1 * num2);
//}
//
//void divide(float num1, float num2)
//{ 
//	printf("%0.1f / %0.1f = %0.1f \n", num1, num2, num1 / num2);
//}
//
//void mod(int num1, int num2)
//{
//	printf("%d %% %d = %d \n", num1, num2, num1 % num2);
//}


int main()
{
//	int number = -10;
//
//	printf("number 변수를 찍어볼까? : %d \n\n", number);
//
//	int num1 = 9, num2 = 2;
//	int result1 = 0;
//	//result1 = result1 + (num1 + num2);
//	result1 += (num1 + num2);
//
//	num1++;
//
//	printf("num1 : %d \n", num1);
//
//	++num1;
//
//	int someNumber = 0;
//	someNumber = someNumber++;
//	printf("Some Number 안에는 무슨 값이 들어있을까 %d \n", someNumber);
//
//	printf("num1 : %d \n", num1);
//
//	printf("%d + %d = %d \n", num1, num2, result1);
//	printf("%d - %d = %d \n", num1, num2, num1 - num2);
//	printf("%d * %d = %d \n", num1, num2, num1 * num2);
//	printf("%d / %d = %d \n", num1, num2, num1 / num2);
//	printf("%d %% %d = %d \n", num1, num2, num1 % num2);
//
//
//
//	plus(10, 10);
//	minus(10, 10);
//	times(10, 10);
//	divide(10, 10);
//	mod(10, 9);
//
//
//
//	int num1 = 10;
//	int num2 = 12;
//	int result1, result2, result3;
//
//	result1 = num1 != num2;
//	result2 = num1 <= num2;
//	result3 = num1 > num2;
//
//	printf("Result1 결과는 %d \n", result1);
//	printf("Result2 결과는 %d \n", result2);
//	printf("Result3 결과는 %d \n", result3);
//
//	int num1 = 10;
//	int num2 = 12;
//	int result1, result2, result3;
//
//	result1 = (num1 == 10 && num2 == 12);
//	result2 = (num1 < 12 || num2 == 12);
//	result3 = (!num1);
//
//	printf("result1 : %d \n", result1);
//	printf("result2 : %d \n", result2);
//	printf("result3 : %d \n", result3);
//
//	int age = 30;
//	bool boolResult;
//	boolResult = (age < 20) ? true : false;
//
//	printf("Bool Result는 어떤 값? %d \n", boolResult);
//
//std::cout << boolResult << std::endl;
//healing(21);

	printf("1(가위), 2(바위), 3(보) 중 하나의 숫자를 입력해주세요 -> ");

	int inputNumber = 0;
	scanf_s("%d", &inputNumber);
	printf("컴퓨터는 2(바위)를 냈습니다. \n");
	printf((inputNumber == 2) ? "2(바위)를 내서 무승부 \n" : ((inputNumber >2)? "보를 낸 당신의 승리" : " 가위를 낸 당신의 패배"));
	
	return 0;

}

//void healing(int num)
//{
//	int maxHp = 50;
//	int currentHp = 20 + num;
//	int Healing = (currentHp > 50) ? maxHp : currentHp;
//
//	printf("치유량은 %d 입니다.\n", num);
//	printf("치유되어 남은 체력은 %d 입니다. \n", Healing);
//
//}

// integer가 정수다. 그러니 정수를 저장하기 위한
// 데이터 타입으로 줄임말인 int를 썼다.
// C++에서 main 함수는 무조건 있어야 한다.
// Ctrl + k + c 전부 주석처리
// Ctrl + k + u 전부 주석처리 해제