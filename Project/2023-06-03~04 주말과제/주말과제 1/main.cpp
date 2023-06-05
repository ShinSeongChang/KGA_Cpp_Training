#include <iostream>		// printf �Լ�
#include <stdlib.h>		// rand �Լ�
#include <time.h>		// srand �Լ�
#include <windows.h>	// Sleep �Լ�
#include <conio.h>		// _getch �Լ�

void waytoLoad(int randway, int gmeclear);		//
void waytoRiver(int randway, int gmeclear);		//  �Լ� ���漱�� ����
void waytoMountain(int randway, int gameclear);	//


// main �Լ� ����
int main()
{
	srand(time(NULL));						// rand Ű�� �������� �Է¹ޱ� ���� �Լ�
	int gameclear = 0;						//
	char userKey;							// 
	char userIn = 'I';						//
	char userOut = 'O';						//

	printf("\n\n");
	printf("\t���ӿ� �����ϱ� : I Ű�� �Է����ּ���. \n\n");
	printf("\t���ӿ��� ������ : O Ű�� �Է����ּ���. \n\n");
	printf("\t Ű �Է��ϱ� : ");
	scanf_s("%c", &userKey);

	while (1)
	{

		if (userKey != userIn && userKey != userOut)		// ������ ������ �Է�Ű ���� �Է½�
		{
			printf("\nŰ �Է��� �ùٸ��� �ʽ��ϴ�. �ٽ� �Է����ּ���. \n");
			Sleep(1000);
			system("cls");

			printf("\t���ӿ� �����ϱ� : I Ű�� �Է����ּ���. \n\n");
			printf("\t���ӿ��� ������ : O Ű�� �Է����ּ���. \n\n");
			printf("\t Ű �Է��ϱ� : ");
			scanf_s("%c", &userKey);

		}

		else if (userKey == userOut)		// Ż�⹮, ������ �������Ḧ ���ҽ�
		{
			printf("\n������ �����մϴ�...");
			return 0;
		}

		if (userKey == userIn)		// ������ ���ӽ����� ���ҽ�
		{
			Sleep(1000);
			system("cls");
			printf("\n\n\t���� Start!");

			while(1)		// ���� ���۽� Ż�������� �޼��ϱ��������� ���� �ݺ�����
			{
				Sleep(1000);
				system("cls");
				int randway = (rand() % 10) + 1;		// randway�� 1~10 ���� 10���� ����� ���� �ִ´�.

				if (gameclear == 6)		// ���������� Ż�⹮ == gameclear�� 6�� ������ ���� Ż��
				{
					printf("���� Ŭ������� !! [�� ���� : %d%/6] \n\n\n", gameclear);
					printf("\t���� Ŭ����! \n");
					return 0;
				}

				if (randway < 4)		// 30% Ȯ���� �� ���� , ������ 1 ~ 3���� 
				{
					++gameclear;		// �� ������ gameclear +1
					waytoLoad(randway, gameclear);		// �� ������  waytoLoad �Լ� ȣ��
					continue;							// �� ������ ���� �ݺ��� �ʱ�� ���ư�
				}

				else if (4 <= randway && randway < 6)	// 20% Ȯ���� �� ����  , ������ 4 ~ 5����
				{
					waytoRiver(randway, gameclear);		// �� ������  waytoRiver �Լ� ȣ��
					continue;							// �� ������ ���� �ݺ��� �ʱ�� ���ư�
				}

				else									// 50% Ȯ���� �� ���� , ������ ������ ���� (6 ~ 10)
				{
					waytoMountain(randway, gameclear);	// �� ������  waytoMountain �Լ� ȣ��
					continue;							// �� ������ ���� �ݺ��� �ʱ�� ���ư�
				}

				Sleep(2000);

			}
		}

	}

	return 0;
}

// main �Լ� ����

void waytoLoad(int randway, int gameclear)		// �� ������ ��¹���
{
	printf("���� Ŭ������� !! [�� ���� : %d%/6] \n\n\n", gameclear);
	printf("�ֻ��� �� : %d\n", randway);
	printf("��� ���մϴ�.");

}

void waytoRiver(int randway, int gameclear)		// �� ������ ��¹���
{
	printf("���� Ŭ������� !! [�� ���� : %d%/6] \n\n\n", gameclear);
	printf("�ֻ��� �� : %d\n", randway);
	printf("������ ���մϴ�.");

}

void waytoMountain(int randway, int gameclear)		// �� ������ ��¹���, �������� �Լ�
{
	printf("���� Ŭ������� !! [�� ���� : %d%/6] \n\n\n", gameclear);
	printf("�ֻ��� �� : %d\n", randway);
	printf("������ ���մϴ�.");

	int playerHp = 50, monsterHp = 75;				// ���� �߻��� ���� ���� ���𱸰� 
	int playerAtk = 10, monsterAtk = 7;				// Hp, Atk, Heal���� �����ڰ� ���� ��������. 
	int playerHeal = 10;							//  
	int randBattle = (rand() % 10) + 1;				// �꿡 ������ �������� ������ �������� �� ���� radndBattle


	if (randBattle < 5)		// ���� �߻�Ȯ���� 40%, 1 ~ 4 �� ����
	{
		Sleep(2000);
		system("cls");
		printf("�ءءءءءءءءءءءءءءءءءءءء�\n");
		printf("�ءءءء�\t���� ����!\t�ءءءء�\n");
		printf("�ءءءءءءءءءءءءءءءءءءءء�\n");
		printf("\n����ĥ�� �����ϴ�.\n\n");
		printf("�ƹ�Ű�� ������ �ڵ������� �����մϴ�. \n");
		_getch();
		system("cls");

		while (1)		// ������ �����ϸ� ������ ������ ������ ���� �ݺ�����
		{
			if (monsterHp <= 0)		// ���� ü���� ���̳ʽ��� ��µǴ°��� ����
			{
				monsterHp = 0;
			}

			if (monsterHp == 0)		// Ż�⹮ ���� : monsterHp�� 0�� �ȴ�.
			{
				monsterHp = 0;
				printf("���� |  ü�� : %2d	 %2d :  ü�� | ���� \n", playerHp, monsterHp);
				printf("���� | ���ݷ�: 10  \t %2d : ���ݷ�| ���� \n\n", 7);
				printf("\n�������� �¸��߽��ϴ�! \n");
				printf("�ƹ�Ű�� ������ �������� ���ư��ϴ�.");
				_getch();
				break;
			}

			printf("���� |  ü�� : %2d	 %2d :  ü�� | ���� \n", playerHp, monsterHp);
			printf("���� | ���ݷ�: 10  \t %2d : ���ݷ�| ���� \n\n", 7);
			printf("������ ������ �ְ� �޴´�. \n");
			monsterHp -= playerAtk;		// ���Ϳ� ������ ������ ���ݷ¸�ŭ ü���� ��������.
			playerHp -= monsterAtk;		// ������ ����

			Sleep(1000);
			system("cls");

			if (monsterHp <= 0)		// ���� ü���� ���̳ʽ��� ��µǴ°��� ����
			{
				monsterHp = 0;
			}

			printf("���� |  ü�� : %2d	 %2d :  ü�� | ���� \n", playerHp, monsterHp);
			printf("���� | ���ݷ�: 10  \t %2d : ���ݷ�| ���� \n\n", 7);
			int randHeal = (rand() % 10) + 1;		// ���� ġ����ų �ߵ�Ű��
			Sleep(1000);
			system("cls");

			if (monsterHp >= 1 && randHeal < 7)		// ġ����ų �ߵ�Ȯ���� 60% , 1 ~ 6 �� ����
													// �� ���Ͱ� �׾����ÿ��� �ߵ����� �ʴ´�.
			{

				printf("���� |  ü�� : %2d	 %2d :  ü�� | ���� \n", playerHp, monsterHp);
				printf("���� | ���ݷ�: 10  \t %2d : ���ݷ�| ���� \n\n", 7);
				printf("\n[�нú�] ġ����ų �ߵ�! ü�� + 10 \n", playerHp);
				printf("����ü�� : %2d + 10 \n\n", playerHp);
				playerHp += playerHeal;

				if (playerHp > 50)		// ������ �ִ�ü���� 50�� �ʰ����� �ʰ��ϴ� ���ǹ�
				{
					playerHp = 50;
				}

				Sleep(1000);
				system("cls");
				printf("���� |  ü�� : %2d	 %2d :  ü�� | ���� \n", playerHp, monsterHp);
				printf("���� | ���ݷ�: 10  \t %2d : ���ݷ�| ���� \n\n", 7);
				Sleep(1000);
				system("cls");

				continue;		// ġ����ų�� �ߵ��ϸ� ������ ���ư�����.

			}

		}

	}

}