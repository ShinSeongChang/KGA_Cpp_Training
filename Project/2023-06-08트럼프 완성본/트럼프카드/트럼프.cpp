#include <iostream>
#include <windows.h>
#include <time.h>

// 함수 전방선언 지역
void Trump();
void ShuffleOnce(int* firstNumber, int* secondNumber);      // 랜덤 셔플 함수


int main()
{
    Trump();
	return 0;

}
// main함수 종료부


void Trump()
{
    srand(time(NULL));          // rand() 함수에 랜덤값을 받기위한 함수

    int cards[52] = { 0, };     // 카드 52장 생성
    char cardpatterns[4][4] = { "♠","◆","♥","♣" };      // 카드의 문양 4개 생성
    int onecard = 0;            // 한장의 뽑은 카드를 저장할 변수 onecard

    for (int i = 0; i < 52; i++)        
    {
        if ((i % 13) == 0)
        {
            cards[i] = 'A';         // Ace 카드 4장 생성
        }

        else if ((i % 13) == 11)    // Jack 카드 4장 생성
        {
            cards[i] = 'J';
        }

        else if ((i % 13) == 12)    // Queen 카드 4장 생성
        {
            cards[i] = 'Q';
        }

        else if ((i % 13) == 13)    // King 카드 4장 생성
        {
            cards[i] = 'K';
        }

        else                        // 그 외에 남는 10장씩 2 ~ 10 카드 생성
        {
            cards[i] = (i % 13) + 1;
        }
    }


    // { 셔플로직
    int randomIdx1, randomIdx2 = 0;

    for (int i = 0; i < 500; i++)       //셔플할 횟수 == 500번 셔플한다.
    {
        randomIdx1 = rand() % 52;
        randomIdx2 = rand() % 52;
        ShuffleOnce(&cards[randomIdx1], &cards[randomIdx2]);
    }

    // } 셔플로직

    printf("트럼프 카드중 한장을 뽑습니다 : ");

    onecard = rand() % 52 + 1;        // 52장의 카드중 한장을 뽑습니다.
    

    if (cards[onecard] < 11)       // 52가지 경우의 카드중 숫자카드를 뽑을경우
    {
        if (onecard < 13)          // 1 ~ 13까지는 스페이드 카드로 지정한다.
        {
            printf(" %s  %d\n\n", cardpatterns[0], cards[onecard]);     // 10장의 스페이드 숫자 카드생성
        }

        else if (onecard < 26)     // 14 ~ 26 까지는 다이아 카드로 지정한다.
        {
            printf(" %s  %d\n\n", cardpatterns[1], cards[onecard]);     // 10장의 다이아 숫자 카드생성
        }

        else if (onecard < 39)     // 27 ~ 39 까지는 하트 카드로 지정한다.
        {
            printf(" %s  %d\n\n", cardpatterns[2], cards[onecard]);     // 10장의 하트 숫자 카드생성
        }

        else                      // 40 ~ 52 까지는 클로버 카드로 지정한다.
        {
            printf(" %s  %d\n\n", cardpatterns[3], cards[onecard]);     // 10장의 클로버 숫자 카드생성
        }

    }

    else                          // 52가지 카드중 문자 카드를 뽑을경우
    {
        if (onecard < 13)
        {
            printf(" %s  %c\n\n", cardpatterns[0], cards[onecard]);     // 4장의 스페이드 숫자 카드생성
        }

        else if (onecard < 26)
        {
            printf(" %s  %c\n\n", cardpatterns[1], cards[onecard]);     // 4장의 다이아 숫자 카드생성
        }

        else if (onecard < 39)
        {
            printf(" %s  %c\n\n", cardpatterns[2], cards[onecard]);     // 4장의 하트 숫자 카드생성
        }

        else
        {
            printf(" %s  %c\n\n", cardpatterns[3], cards[onecard]);     // 4장의 클로버 숫자 카드생성
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