//#include <iostream>
#include <stdio.h>
#include <conio.h>					// _getch() �Լ� ���
#include <stdlib.h>					// rand �Լ� ���
#include <time.h>					// srand(time(NULL)) �Լ� ���
#include <windows.h>				// Sleep �Լ� ���

void numberGame(int userInput);		// Ȧ ¦ �����Լ� ���漱��
void Description003();
void Description004();
void Description005();
void randomDiceEasy();
void randomDiceNomal();
void Description006();
void criticalDamage();


int main()
{
		// �������� (���� �ݺ���)
	/*
	int loopCount = 1;
	char userInput = '0';

	while (1)	// ���ѹݺ��� == while ���Ǿȿ� 1(��)�� ����ִ´�.
	{
		if (loopCount == 1)		//���ʸ� ����� ���� == ���۰��� 1�� ���Ѵ�.

		{
			printf("[Ʃ�丮��] ���� ������ ������� �Ѵٸ� �̷������� \n\n");
		}
		
		printf("\n[system] ����� �÷��̾� �Դϴ�. \n");
		printf("������ �׼��� �Է��� �ּ���. : ");
		scanf_s("%c", &userInput);		// �÷��̾�� ���� �ڷ����� �Է¹޴´�.

		if (userInput == 'q' || userInput == 'Q')		//������ q �Ǵ� Q ������ �Է½� ��������
		{
			printf("\n[system] ���α׷��� �����մϴ�.\n");		
			break;		// break; �� ���ѹݺ����� Ż���ϱ� ���� ��ɾ��̴�. �� q �Ǵ� Q�� �Է��ϸ� ���ѹݺ� Ż��
		}
		else		// q �� Q�� ������ �ٸ� ������ �Է½�
		{
			printf("\n[system] �ش� �Է��� ���ǵǾ� ���� �ʽ��ϴ�. \n");
			loopCount += 1;		// loopCount�� �������� ���� ���๮������ �ݺ��Ǿ� �����°��� �����Ѵ�.
			continue;			// break;���� ����� �ݺ����� �ٷ� �����Ű���� continue���� 
		}

		loopCount += 1;			// ���ʹ��� ������ �ݺ��� ���� ī��Ʈ
		

	}
	*/
	/*
	int usernumber;
	int loopcount = 0;

	while (true)				// ���� ���� (Ȧ¦ ����)
	{
		printf("���ڸ� �Է��Ͻÿ� : ");
		scanf_s("%d", &usernumber);

		//Ż������
		if (usernumber <= 0)
		{
			printf("\n ���α׷��� �����մϴ�. \n");
			return 0;
		}

		if (usernumber % 2 == 0)
		{
			printf("[%d]�� ¦���Դϴ�. \n", usernumber);
			loopcount += 1;
			continue;
		}

		printf("[%d]�� Ȧ���Դϴ�. \n", usernumber);
	}
	*/

	/*								//Ȧ¦ ���� ����Ǯ��
	int userInput;		

	while (1)
	{
		printf("���ڸ� �Է����ּ��� : ");
		scanf_s("%d", &userInput);
		numberGame(userInput);

		if (userInput == 0)				// ������ 0�� �Է��ϸ� ������ �Բ� ���α׷� ����
		{
			printf("\n���α׷��� �����ϰڽ��ϴ�. \n");
			break;
		}

	}
	
	/*while (1)								//main �Լ��������� ����Ҷ�
	{
		printf("���ڸ� �Է����ּ��� : ");
		scanf_s("%d", &userInput);
		printf("���α׷��� �����÷��� 0�� �Է����ּ��� \n");

		int result = userInput % 2;


		if (result == 0)
		{
			printf("\n�Է��Ͻ� ���ڴ� ¦���Դϴ�.\n\n");

		}
		else
		{
			printf("\n�Է��Ͻ� ���ڴ� Ȧ���Դϴ�. \n\n");
		}

		if (userInput == 0)
		{
			printf("\n���α׷��� �����ϰڽ��ϴ�. \n");
			break;
		}
		
	}
	*/

	Description003();
	//Description004();
	//Description005();
	//randomDiceNomal();
	//Description006();
	//criticalDamage();

	return 0;

}
// main�Լ� ���ᱸ��

void numberGame(int userInput)			//	Ȧ ¦ ���� �Լ�, ���漱��ó�� �Ϸ�
{
		int result = userInput % 2;		//

		if (result == 0)				// 2�� ���������� �������� 0 �Է¹��� �� == ¦��
		{
			printf("\n�Է��Ͻ� ���ڴ� ¦���Դϴ�. ���α׷��� �����÷��� 0�� �Է����ּ���.\n\n");

		}
		else							// if���� ������ ������ �Է¹��� �� == Ȧ��
		{
			printf("\n�Է��Ͻ� ���ڴ� Ȧ���Դϴ�. ���α׷��� �����÷��� 0�� �Է����ּ���. \n\n");
		}
	
}

void Description003()
{

	// switch / case��

	char userInput = '0';
	printf("User input : ");
	userInput = _getch();

	printf("\n\n");

	switch (userInput)
	{
	case 'a':
		printf("�̰��� ���� \n");
		break;
	case 'b':
		printf("�̰��� ���� \n");
		break;
	case 'c':
		printf("�̰��� �� \n");
		break;
	default:
		printf("ó������ ���� ���� �Է��Դϴ�. \n");
		break;
	}

	printf("Press any key... \n");
	_getch();
}

void Description004()				// for�� ��������
{
	printf("For ���� �ݺ����̴�. �̷��� ���ư���. \n");

	int loopcount = 1;
	for ( /* ���� �� ����*/ ; loopcount <= 5; loopcount += 1)
	{
		printf("��� ���ư��� �ִ� ������??? \n");
	}
	printf("\n");

}

void Description005()
{
	//���⼭ Ű ���� �ٲ㺼 ����
	srand(time(NULL));				// �̰��� rand() �Լ��� Ű ���� �ٲ��ִ� �Լ�
	// Random �����ϱ�
	int randomnumber1, randomnumber2, randomnumber3 = 0;

	printf("���� ��ȣ ����. \n");

	for (int i = 0; i < 10; i++)
	{
		randomnumber2 = (rand() % 45) + 1;
		printf("Random number -> %d \n", randomnumber2);
	}
	printf("\n\n");


	randomnumber1 = rand(); 			// rand() �Լ��� ����ؼ� �������� �޴´�.
	randomnumber2 = rand() % 11;		// 0 ~ 10������ ���ڸ� ����ϰ� �����  => 11�� �������� �������� 0 ~ 10�����ۿ� �������� ����
	randomnumber3 = (rand() % 6) + 1;	// 0�� �����ϰ����, �ֻ��� ���� 1 ~ 6�� ����ϰ� ����� 

	printf("Random number?? %d \n", randomnumber1);
	printf("Random number?? %d \n", randomnumber2);
	printf("Random number?? %d \n", randomnumber3);

}

void randomDiceEasy()
{
	srand(time(NULL));								// rand���� ������ Ű���� �������� srand(time(NULL)) �Լ��� ����Ѵ�.

	int result = 0;									// �ֻ��� ������� ���� ����

	printf("��ǻ�Ͱ� �ֻ����� �ι� �����ϴ�. \n");

	for (int i = 1; i <= 2; i++)					// �ֻ��� �����⸦ �ι� �ݺ�
	{
		int randnum1 = (rand() % 6) + 1;			// ���� �ֻ����� �� = 1 ~ 6
		printf("�ֻ����� ���� : %d\n", randnum1);
		result += randnum1;							// �ݺ��Ͽ� ���� �ֻ������� ���Ͽ� ����
	}

	if (result % 2)									// ���� ���� 2�� �������� �������� ������ ¦��
	{
		printf("\n�ֻ����� ������ %d Ȧ���Դϴ�. \n", result);
	}
	else											// �� �� ���� Ȧ��
	{
		printf("\n�ֻ����� ������ %d ¦���Դϴ�. \n", result);
	}
	
	

}

void randomDiceNomal()
{
	srand(time(NULL));			

	int num, randnum1, randnum2;

	for(1; 1; 1)								// ���ѹݺ�
	{
		printf("��ǻ�Ͱ� �ֻ����� �����ϴ�. \n");
		printf("[Ȧ] : 1, [¦] : 2, [��������] : 3\n �Ѱ��� ���ڸ� �Է����ּ���  : ");
		scanf_s("%d", &num);					// �������� Ȧ, ¦, �������� �Է¹ޱ�

		randnum1 = (rand() % 6) + 1;			// ��ǻ�Ϳ��� 1 ~ 6 �����Է� �ޱ�
		randnum2 = randnum1 % 2;				// �����Է� Ȧ, ¦ �����ϱ�

		if (num == 3)								// ���� ���Ṯ
		{
			printf("������ �����մϴ�...");
			break;
		}

		if (num != 1 && num != 2)				// Ȧ, ¦ ������ Ű�Է� ������ ���, �ǵ��ư���
		{
			printf("�ءء�  [Ȧ] : 1, [¦] : 2 �߿��� ����ּ���.  �ءء� \n");
			printf("�ءء�  [Ȧ] : 1, [¦] : 2 �߿��� ����ּ���.  �ءء� \n");
			printf("�ءء�  [Ȧ] : 1, [¦] : 2 �߿��� ����ּ���.  �ءء� \n");
			continue;							// break�� �ƴ� continue�� �ݺ����� �����, ���ѹݺ����̶� �ٽ� ���� ����
		}
		num = num % 2;							// ������ �Է��� ���� Ȧ���� ¦���� �����ϱ�.


		if (num == randnum2)					// ������ �Է��� ��, �����Է� Ȧ¦ ���а��� �����ϸ� ������ �¸�
		{
			printf("\n�ֻ����� �� : [%d] \n����� �¸�! \n\n", randnum1);
		}

		else								// ������, �����Է°��� �������� ������ ������ �й�
		{
			printf("\n�ֻ����� �� : [%d] \n����� �й�... \n\n", randnum1);
		}

	

	}

}

void Description006()
{
	srand(time(NULL));				

	int randomnumber1 = 0;
	const int MAX_DICE_VALUE = 6;

	printf("�ֻ��� ���α׷� \n\n");
	_getch();
	printf("��ǻ�Ͱ� ���� 3���� �ֻ��� �� -> ");

	for (int i = 0; i < 3; i++)
	{
		Sleep(1000);				// �Ľ�Į ��Ÿ�� (�Լ� ���� ���ڰ� �빮��), �밡���� ��Ÿ�� (�Լ� ���� ���ڰ� �ҹ���)
		randomnumber1 = (rand() % MAX_DICE_VALUE) + 1;
		printf("%d ", randomnumber1);
	}

	Sleep(1000);
	printf("\n\n");
	printf("���α׷� ���� \n\n");

}

void criticalDamage()
{
	srand(time(NULL));									// rand()�Լ��� ����Ű���� �Է¹ޱ����� srand(time(NULL)) �߰�

	int randomnumber1 = 0;

	printf("ũ��Ƽ�� ������ ȯ�� ���α׷� \n");
	printf("�ֻ��� 1 ~ 6 �߻��� ũ��Ƽ�� ������\n\n");
	printf("�ƹ�Ű�� �Է��ϸ� ���α׷��� �����մϴ�.\n");
	_getch();											// _getch

	while (1)
	{
		int userCoin;									// ���α׷� ����� Ȥ�� ����Ű ������ ����
		int damage = 100;								// ������ ��
		float criticaldamage = damage * 1.5;			// ũ��Ƽ�� �߻��� ũ��Ƽ�� �������� ȯ�����ִ� ����
		randomnumber1 = ((rand() % 10)) +1;				// ũ��Ƽ�� Ȯ���� �Է��� ����

		if(1 <= randomnumber1 && randomnumber1 <= 6)	// 60���� Ȯ�� �߻��� ũ��Ƽ�� ������ �߻�
		{
			printf("\nũ��Ƽ�� �ֻ���!  ũ��Ƽ�� ������ �߻� : %d \n", randomnumber1);
			printf("%d X 1.5 : %.2f \n\n", damage, criticaldamage);
			printf("������� ���ҽ� [1], ���Ḧ ���ҽ� [2]�� �Է����ּ��� :");
			scanf_s("%d", &userCoin);

			if (userCoin == 1)
			{
				continue;
			}

			else
			{
				printf("���α׷��� �����մϴ�...\n");
				break;
			}

		}

		else
		{
			printf("\n�Ϲ� �ֻ��� : %d \n", randomnumber1);
			printf("\n������ �߻� : %d \n\n", damage);
			printf("������� ���ҽ� [1], ���Ḧ ���ҽ� [2]�� �Է����ּ��� :");
			scanf_s("%d", &userCoin);

			if (userCoin == 1)
			{
				continue;
			}

			else
			{
				printf("���α׷��� �����մϴ� \n");
				break;
			}
		}

	}

}