#include<iostream>
// { �Լ� ���漱���

void Circle(float PI, int r);
float cc(float PI, int r);
void boolalPhabet(char alphabet);

//void Triplenumber(int num1, int num2, int num3, int result1);
//void sss(int num1, int num2, int num3, int result2);

// } �Լ� ���� �����
// �Լ� ���� ������ �صθ� main�Լ� �ڿ� �Լ����� �־ 


int main()
{
//	 { ���� �����
//
//	int num1, num2, num3;
//
//	 } ���� �����
//	 { ����� �Է� �޴� ����
//	printf("���� one : ");
//	scanf_s("%d", &num1);
//	printf("���� two : ");
//	scanf_s("%d", &num2);
//	 } ����� �Է� �޴� ���� 
//	printf("���� �ΰ��� �Է����ּ��� : ");
//	scanf_s("%d, %d", &num1, &num2);
//	 { ���� �����ϴ� ���� / �÷��� ����
//	result = num1 + num2;
//	printf("%d + %d = %d \n", num1, num2, result);
//	 } ���� �����ϴ� ���� / �÷��� ����
//
//	printf("���� 3���� �Է����ּ��� : ");
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

	//������ ������ Ÿ�Ե�
	//char charValue = 'A';					//���� �ϳ��� �����ϱ� ���� ������ Ÿ��
	//short shortValue = 10;					//int ���� ���� ���� �����ϱ� ���� ������ Ÿ��
	//int intValue = 100;						//���� ������ ���� �����ϱ� ���� ������ Ÿ��
	//long longValue = 200;					//int�� Ŀ���� ���� �� �Ⱦ��� ������ Ÿ��
	//long long longlongValue = 1000;			//int���� ū ���� �����ϱ� ���� ������ Ÿ��

	////�Ǽ��� ������ Ÿ�Ե�
	//
	//float floatValue = 10.1;				//���� ������ �Ǽ��� �����ϱ� ���� ������ Ÿ��
	//double doubleValue = 100.1;				//float ���� ū �Ǽ��� �����ϱ� ���� ������ Ÿ��
	//long double longdoubleValue = 200.1;	//double ���� ū �Ǽ��� �����ϱ� ���� ������ Ÿ��

	//printf("char �� ũ���? %d byte. \n", sizeof(charValue));
	//printf("short �� ũ���? %d byte. \n", sizeof(shortValue));
	//printf("int �� ũ���? %d byte. \n", sizeof(intValue));
	//printf("long �� ũ���? %d byte. \n", sizeof(longValue));
	//printf("long long �� ũ���? %d byte. \n\n", sizeof(longlongValue));

	//printf("float �� ũ���? %d byte. \n", sizeof(floatValue));
	//printf("double �� ũ���? %d byte. \n", sizeof(doubleValue));
	//printf("longdouble �� ũ���? %d byte. \n", sizeof(longdoubleValue));

	//const float pi = 3.141592f;
	//int r;
	//printf("���� �������� �Է����ּ��� : ");
	//scanf_s("%d", &r);
	//circle(pi, r);
	//float result = cc(pi, r);
	//printf("���� ���̴� %f �Դϴ�.\n", result);
	//

//	char charValue = 'A';
//
//	printf("char ����� ���� C�� �غ���. -> %c \n", 97);
//
//	bool isSame = ('A' == 65);
//	char someAlphabet = 'a';
//	bool isBigAlpabet = ('A' <= someAlphabet && someAlphabet <= 'Z');
//	printf("\nSome alphabet�� �빮���ΰ�?? %d \n", isBigAlpabet);
	
    //char alphabet;
	//printf("���� �� ���� �Է����ּ��� : ");
	//scanf_s("%c", &alphabet);
	//�������
	//bool emoticon = (65 <= alphabet && 90 >= alphabet || alphabet >= 'a' && alphabet <= 'z');
	//printf("������� \n");
	//printf((emoticon == 1) ? "�Է��� ���ڴ� Ư�����ڰ� �ƴմϴ�. \n" : "�Է��� ���ڴ� Ư������ �Դϴ�.\n");
	// �ϵ���
	//printf("\n\n�ϵ��� \n");
	//boolalphabet(alphabet);

	// ���ǹ� (if, else if��)

	//bool issame = ('A' == 65);

	//char someAlphabet = '!';
	//bool isBigAlphabet = ('A' <= someAlphabet && someAlphabet <= 'Z');
	//bool isSmallAlphabet = ('a' <= someAlphabet && someAlphabet <= 'z');
	//bool isNumber = ('0' <= someAlphabet && someAlphabet <= '9');

	//if (isBigAlphabet)
	//{
	//	printf("���� �빮�� �Դϴ�. \n");
	//}		//if���� ���ǽ��� ���̸� ������ ���� ������ �����ϰ�, �����̸� �ǳʶڴ�.

	//else if (isSmallAlphabet)
	//{
	//	printf("���� �ҹ��� �Դϴ�. \n");
	//}

	//else if (isNumber)
	//{
	//	printf("���� �Դϴ�. \n");
	//}

	//else
	//{
	//	printf("�� �𸣰ڽ��ϴ�. \n");
	//}		//���� ���ǽĿ��� ���� �ƴ�, �ٸ� ��� ��� ������ ���� ������ �����Ѵ�.


	//while�� ����
	/*
	int loopcount = 388;
	while (1 <= loopcount)
	{
		printf("Hello World! �� ��° ���� �ִ���? %d \n", loopcount);
		loopcount -= 1; 
		// loop  ����

	}
	*/
	
	/*
	int num = 1;

	while (num <= 10)
	{
		printf("���� ������ �� %d \n", num);
		num += 1;

	}

	*/

int side1;
	
	printf("���ڸ� �Է����ּ��� : ");
	scanf_s("%d", &side1);

	while (3 <= side1 && side1 <= 10)
	{
		scanf_s
	}


	return 0;
	
}// main()                <---- �Լ��� ���� �˸��� �ּ�, ������ ������.


void Circle(float PI, int r)
{
	float result = PI * r * r;
	printf("���� ���̴� %.2f �Դϴ�.", result);

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

	printf((emoticon1 || emoticon2 == 1) ? "�Է��� ���ڴ� Ư������ �Դϴ�.\n" : (emoticon3 == 1) ? "�Է��� ���ڴ� �����Դϴ�.\n"
		: (emoticon4 == 1) ? "�Է��� ���ڴ� �빮�� ���ĺ��Դϴ�. \n" : (emoticon5 == 1) ? "�Է��� ���ڴ� �ҹ��� ���ĺ��Դϴ�.\n" : 
	 "�Է��� ���ڴ� Ư�����ڰ� �ƴմϴ�.\n");
}
