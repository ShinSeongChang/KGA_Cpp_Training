#include <iostream>
#include <conio.h>		// _getch �Լ� ���

// �Լ� ���漱�� ����
void starNormal();
void starHard();
void starVeryHard();

// main �Լ� ���ۺ�
int main()
{
	//starNormal();
	//starHard();
	void starVeryHard();
	return 0;
}
// main�Լ� �����

// ����� ���� Normal ���� �Լ�
void starNormal()
{
	int star[5] = { 0, };		// �ּ�5�� ���� �� �ʱ�ȭ

	for (int i = 0; i < 5; i++)		// 5�� �ݺ���
	{
		star[i] = '*';		// i�� �������� ���� star[0] ~ [4] �ּҿ�  '*' ���� ��������
		printf("%c ", star[i]);		// ��� ���
	}

	printf("\n\n");

}

// ����� ���� Hard ���� �Լ�
void starHard()
{
	int star[5] = { 0, };
	int circcle = 0;

	while (circcle < 5)
	{
		// { board�� �ʱ�ȭ �ϴ� ����
		for (int i = 0; i < 5; i++)
		{
			star[i] = '*';		// star[0] ~ [4] �� �ּҿ� ��� '*'�� �������

			if (i == circcle)	// ������ ���� circcle�� ũ��� ��ġ�ϴ� �ּҿ��� '0' �� ������. 
			{
				star[circcle] = '0';
			}
		}
		// } board�� �ʱ�ȭ �ϴ� ����

		// { board�� ����ϴ� ����
		for (int i = 0; i < 5; i++)
		{
			printf("%c ", star[i]);		// star[0] ~ [4] �� ���ִ� ���� ���
		}
		// } board�� ����ϴ� ����

		printf("\t\t Press Any Key...");	// Ű�Է��� ��û�ϴ� ���� ���
		_getch();		// Ű�Է� ��û
		circcle++;		// Ű�� �Է¹����� circcle�� ���� 1 ���� => �״��� �ݺ��������� '0'�� �� �ּҰ� 1ĭ �����Ѵٴ°��� �ǹ�
		printf("\n");	// �ݺ��� ���ึ�� �ٳѱ� ó��
	}

}


void starVeryHard()
{
	int star[5] = { 0, };
	int circcle = 0;

	while (1)
	{

		for (int i = 0; i < 5; i++)
		{
			star[i] = '*';

			if (i == circcle)
			{
				star[i] = '0';
			}
		}

		for (int i = 0; i < 5; i++)
		{
			printf("%c", star[i]);
		}

		printf("\n");

	}
}