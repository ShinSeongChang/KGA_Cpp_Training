#include<iostream>
#include<stdio.h>

//void healing(int num);
// main �Լ����� ���� ���� ���� �Լ��� �̷� ����̴� ��� �˷���.
// ���漱��.

//*
//
//int age(int age) //�Լ��� ����
//{
//	return age;
//}
//
//void myage(int age) //�Լ��� ����
//{
//	printf("���� : %d\n", age);
//}
//
//int main()
//{
// printf("�̸� : �ż�â\n");
//	myage(26); //void�� ��½�                    �Լ��� ȣ��
//	
//	printf("���� : %d \n", age(26)); int�� ��½�  �Լ��� ȣ��
//	
// printf("��ȭ��ȣ : 010-4300-2937 \n");
//}
//
//*/
//
//*
//int damage(int num)
//{
//	printf("ũ��Ƽ�� ������ �߻� : %f", num * 1.5);
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
//	printf("ũ��Ƽ�� ������ �߻�! : %0.f \n", critcaldamage(1, 100, 1.5));
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
//	printf("number ������ ����? : %d \n\n", number);
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
//	printf("Some Number �ȿ��� ���� ���� ��������� %d \n", someNumber);
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
//	printf("Result1 ����� %d \n", result1);
//	printf("Result2 ����� %d \n", result2);
//	printf("Result3 ����� %d \n", result3);
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
//	printf("Bool Result�� � ��? %d \n", boolResult);
//
//std::cout << boolResult << std::endl;
//healing(21);

	printf("1(����), 2(����), 3(��) �� �ϳ��� ���ڸ� �Է����ּ��� -> ");

	int inputNumber = 0;
	scanf_s("%d", &inputNumber);
	printf("��ǻ�ʹ� 2(����)�� �½��ϴ�. \n");
	printf((inputNumber == 2) ? "2(����)�� ���� ���º� \n" : ((inputNumber >2)? "���� �� ����� �¸�" : " ������ �� ����� �й�"));
	
	return 0;

}

//void healing(int num)
//{
//	int maxHp = 50;
//	int currentHp = 20 + num;
//	int Healing = (currentHp > 50) ? maxHp : currentHp;
//
//	printf("ġ������ %d �Դϴ�.\n", num);
//	printf("ġ���Ǿ� ���� ü���� %d �Դϴ�. \n", Healing);
//
//}

// integer�� ������. �׷��� ������ �����ϱ� ����
// ������ Ÿ������ ���Ӹ��� int�� ���.
// C++���� main �Լ��� ������ �־�� �Ѵ�.
// Ctrl + k + c ���� �ּ�ó��
// Ctrl + k + u ���� �ּ�ó�� ����