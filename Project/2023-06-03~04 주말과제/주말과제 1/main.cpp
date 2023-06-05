#include <iostream>		// printf 함수
#include <stdlib.h>		// rand 함수
#include <time.h>		// srand 함수
#include <windows.h>	// Sleep 함수
#include <conio.h>		// _getch 함수

void waytoLoad(int randway, int gmeclear);		//
void waytoRiver(int randway, int gmeclear);		//  함수 전방선언 구간
void waytoMountain(int randway, int gameclear);	//


// main 함수 시작
int main()
{
	srand(time(NULL));						// rand 키값 랜덤으로 입력받기 위한 함수
	int gameclear = 0;						//
	char userKey;							// 
	char userIn = 'I';						//
	char userOut = 'O';						//

	printf("\n\n");
	printf("\t게임에 입장하기 : I 키를 입력해주세요. \n\n");
	printf("\t게임에서 나가기 : O 키를 입력해주세요. \n\n");
	printf("\t 키 입력하기 : ");
	scanf_s("%c", &userKey);

	while (1)
	{

		if (userKey != userIn && userKey != userOut)		// 유저가 지정한 입력키 제외 입력시
		{
			printf("\n키 입력이 올바르지 않습니다. 다시 입력해주세요. \n");
			Sleep(1000);
			system("cls");

			printf("\t게임에 입장하기 : I 키를 입력해주세요. \n\n");
			printf("\t게임에서 나가기 : O 키를 입력해주세요. \n\n");
			printf("\t 키 입력하기 : ");
			scanf_s("%c", &userKey);

		}

		else if (userKey == userOut)		// 탈출문, 유저가 게임종료를 원할시
		{
			printf("\n게임을 종료합니다...");
			return 0;
		}

		if (userKey == userIn)		// 유저가 게임시작을 원할시
		{
			Sleep(1000);
			system("cls");
			printf("\n\n\t게임 Start!");

			while(1)		// 게임 시작시 탈출조건을 달성하기전까지는 무한 반복실행
			{
				Sleep(1000);
				system("cls");
				int randway = (rand() % 10) + 1;		// randway에 1~10 까지 10가지 경우의 수를 넣는다.

				if (gameclear == 6)		// 게임진행중 탈출문 == gameclear가 6을 충족시 게임 탈출
				{
					printf("게임 클리어까지 !! [길 도착 : %d%/6] \n\n\n", gameclear);
					printf("\t게임 클리어! \n");
					return 0;
				}

				if (randway < 4)		// 30% 확률로 길 도착 , 랜덤값 1 ~ 3지정 
				{
					++gameclear;		// 길 도착시 gameclear +1
					waytoLoad(randway, gameclear);		// 길 도착시  waytoLoad 함수 호출
					continue;							// 새 진행을 위해 반복문 초기로 돌아감
				}

				else if (4 <= randway && randway < 6)	// 20% 확률로 강 도착  , 랜덤값 4 ~ 5지정
				{
					waytoRiver(randway, gameclear);		// 강 도착시  waytoRiver 함수 호출
					continue;							// 새 진행을 위해 반복문 초기로 돌아감
				}

				else									// 50% 확률로 산 도착 , 랜덤값 나머지 지정 (6 ~ 10)
				{
					waytoMountain(randway, gameclear);	// 산 도착시  waytoMountain 함수 호출
					continue;							// 새 진행을 위해 반복문 초기로 돌아감
				}

				Sleep(2000);

			}
		}

	}

	return 0;
}

// main 함수 종료

void waytoLoad(int randway, int gameclear)		// 길 도착시 출력문구
{
	printf("게임 클리어까지 !! [길 도착 : %d%/6] \n\n\n", gameclear);
	printf("주사위 값 : %d\n", randway);
	printf("길로 향합니다.");

}

void waytoRiver(int randway, int gameclear)		// 강 도착시 출력문구
{
	printf("게임 클리어까지 !! [길 도착 : %d%/6] \n\n\n", gameclear);
	printf("주사위 값 : %d\n", randway);
	printf("강으로 향합니다.");

}

void waytoMountain(int randway, int gameclear)		// 산 도착시 출력문구, 랜덤전투 함수
{
	printf("게임 클리어까지 !! [길 도착 : %d%/6] \n\n\n", gameclear);
	printf("주사위 값 : %d\n", randway);
	printf("산으로 향합니다.");

	int playerHp = 50, monsterHp = 75;				// 전투 발생시 사용될 변수 선언구간 
	int playerAtk = 10, monsterAtk = 7;				// Hp, Atk, Heal값은 개발자가 임의 지정했음. 
	int playerHeal = 10;							//  
	int randBattle = (rand() % 10) + 1;				// 산에 도착시 랜덤으로 전투가 벌어지게 할 변수 radndBattle


	if (randBattle < 5)		// 전투 발생확률은 40%, 1 ~ 4 값 지정
	{
		Sleep(2000);
		system("cls");
		printf("※※※※※※※※※※※※※※※※※※※※※\n");
		printf("※※※※※\t몬스터 등장!\t※※※※※\n");
		printf("※※※※※※※※※※※※※※※※※※※※※\n");
		printf("\n도망칠수 없습니다.\n\n");
		printf("아무키나 누르면 자동전투에 진입합니다. \n");
		_getch();
		system("cls");

		while (1)		// 전투에 진입하면 전투가 끝나기 전까지 무한 반복실행
		{
			if (monsterHp <= 0)		// 몬스터 체력이 마이너스로 출력되는것을 방지
			{
				monsterHp = 0;
			}

			if (monsterHp == 0)		// 탈출문 조건 : monsterHp가 0이 된다.
			{
				monsterHp = 0;
				printf("유저 |  체력 : %2d	 %2d :  체력 | 몬스터 \n", playerHp, monsterHp);
				printf("유저 | 공격력: 10  \t %2d : 공격력| 몬스터 \n\n", 7);
				printf("\n전투에서 승리했습니다! \n");
				printf("아무키나 누르면 모험으로 돌아갑니다.");
				_getch();
				break;
			}

			printf("유저 |  체력 : %2d	 %2d :  체력 | 몬스터 \n", playerHp, monsterHp);
			printf("유저 | 공격력: 10  \t %2d : 공격력| 몬스터 \n\n", 7);
			printf("서로의 공격을 주고 받는다. \n");
			monsterHp -= playerAtk;		// 몬스터와 유저는 서로의 공격력만큼 체력이 떨어진다.
			playerHp -= monsterAtk;		// 동일한 내용

			Sleep(1000);
			system("cls");

			if (monsterHp <= 0)		// 몬스터 체력이 마이너스로 출력되는것을 방지
			{
				monsterHp = 0;
			}

			printf("유저 |  체력 : %2d	 %2d :  체력 | 몬스터 \n", playerHp, monsterHp);
			printf("유저 | 공격력: 10  \t %2d : 공격력| 몬스터 \n\n", 7);
			int randHeal = (rand() % 10) + 1;		// 랜덤 치유스킬 발동키값
			Sleep(1000);
			system("cls");

			if (monsterHp >= 1 && randHeal < 7)		// 치유스킬 발동확률은 60% , 1 ~ 6 값 지정
													// 단 몬스터가 죽었을시에는 발동하지 않는다.
			{

				printf("유저 |  체력 : %2d	 %2d :  체력 | 몬스터 \n", playerHp, monsterHp);
				printf("유저 | 공격력: 10  \t %2d : 공격력| 몬스터 \n\n", 7);
				printf("\n[패시브] 치유스킬 발동! 체력 + 10 \n", playerHp);
				printf("유저체력 : %2d + 10 \n\n", playerHp);
				playerHp += playerHeal;

				if (playerHp > 50)		// 유저의 최대체력은 50을 초과하지 않게하는 조건문
				{
					playerHp = 50;
				}

				Sleep(1000);
				system("cls");
				printf("유저 |  체력 : %2d	 %2d :  체력 | 몬스터 \n", playerHp, monsterHp);
				printf("유저 | 공격력: 10  \t %2d : 공격력| 몬스터 \n\n", 7);
				Sleep(1000);
				system("cls");

				continue;		// 치유스킬을 발동하면 전투로 돌아가게함.

			}

		}

	}

}