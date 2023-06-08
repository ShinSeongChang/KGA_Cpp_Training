#include <iostream>
#include <windows.h>
#include <time.h>

// �Լ� ���漱�� ����
void Trump();
void ShuffleOnce(int* firstNumber, int* secondNumber);      // ���� ���� �Լ�


int main()
{
    Trump();
	return 0;

}
// main�Լ� �����


void Trump()
{
    srand(time(NULL));          // rand() �Լ��� �������� �ޱ����� �Լ�

    int cards[52] = { 0, };     // ī�� 52�� ����
    char cardpatterns[4][4] = { "��","��","��","��" };      // ī���� ���� 4�� ����
    int onecard = 0;            // ������ ���� ī�带 ������ ���� onecard

    for (int i = 0; i < 52; i++)        
    {
        if ((i % 13) == 0)
        {
            cards[i] = 'A';         // Ace ī�� 4�� ����
        }

        else if ((i % 13) == 11)    // Jack ī�� 4�� ����
        {
            cards[i] = 'J';
        }

        else if ((i % 13) == 12)    // Queen ī�� 4�� ����
        {
            cards[i] = 'Q';
        }

        else if ((i % 13) == 13)    // King ī�� 4�� ����
        {
            cards[i] = 'K';
        }

        else                        // �� �ܿ� ���� 10�徿 2 ~ 10 ī�� ����
        {
            cards[i] = (i % 13) + 1;
        }
    }


    // { ���÷���
    int randomIdx1, randomIdx2 = 0;

    for (int i = 0; i < 500; i++)       //������ Ƚ�� == 500�� �����Ѵ�.
    {
        randomIdx1 = rand() % 52;
        randomIdx2 = rand() % 52;
        ShuffleOnce(&cards[randomIdx1], &cards[randomIdx2]);
    }

    // } ���÷���

    printf("Ʈ���� ī���� ������ �̽��ϴ� : ");

    onecard = rand() % 52 + 1;        // 52���� ī���� ������ �̽��ϴ�.
    

    if (cards[onecard] < 11)       // 52���� ����� ī���� ����ī�带 �������
    {
        if (onecard < 13)          // 1 ~ 13������ �����̵� ī��� �����Ѵ�.
        {
            printf(" %s  %d\n\n", cardpatterns[0], cards[onecard]);     // 10���� �����̵� ���� ī�����
        }

        else if (onecard < 26)     // 14 ~ 26 ������ ���̾� ī��� �����Ѵ�.
        {
            printf(" %s  %d\n\n", cardpatterns[1], cards[onecard]);     // 10���� ���̾� ���� ī�����
        }

        else if (onecard < 39)     // 27 ~ 39 ������ ��Ʈ ī��� �����Ѵ�.
        {
            printf(" %s  %d\n\n", cardpatterns[2], cards[onecard]);     // 10���� ��Ʈ ���� ī�����
        }

        else                      // 40 ~ 52 ������ Ŭ�ι� ī��� �����Ѵ�.
        {
            printf(" %s  %d\n\n", cardpatterns[3], cards[onecard]);     // 10���� Ŭ�ι� ���� ī�����
        }

    }

    else                          // 52���� ī���� ���� ī�带 �������
    {
        if (onecard < 13)
        {
            printf(" %s  %c\n\n", cardpatterns[0], cards[onecard]);     // 4���� �����̵� ���� ī�����
        }

        else if (onecard < 26)
        {
            printf(" %s  %c\n\n", cardpatterns[1], cards[onecard]);     // 4���� ���̾� ���� ī�����
        }

        else if (onecard < 39)
        {
            printf(" %s  %c\n\n", cardpatterns[2], cards[onecard]);     // 4���� ��Ʈ ���� ī�����
        }

        else
        {
            printf(" %s  %c\n\n", cardpatterns[3], cards[onecard]);     // 4���� Ŭ�ι� ���� ī�����
        }
    }

}


void ShuffleOnce(int* firstNumber, int* secondNumber)
{
    int temp = 0;
    temp = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = temp;
}