using Microsoft.SqlServer.Server;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace _2023_06_09_주말과제
{
    internal class Program
    {
        // 완전 구현 못했음...
        // 1. A,J,Q,K 변환을 못해서 1 ~ 13 숫자카드만 존재
        // 2. 중복된 카드 발생 ( 랜덤함수 내에서 중복값을 제거하려면?...)
        // 3. 출력값에 따라 카드 모양 일그러짐.

        static void Main(string[] args)
        {
            Console.WriteLine("게임입장");
            Thread.Sleep(2000);
            Console.Clear();

            TrumpGame();
        }

        static void TrumpGame()
        {

            int[] drawCard = new int[3];    // 컴퓨터가 뽑을 2장의 카드, 플레이어가 뽑을 1장의 카드 총 3개의 주소를 할당
            string[] cardPattern = { "♠", "♥", "◆", "♣" };
            int playerpoint = 1000;     // 플레이어는 1000점을 가진채로 시작합니다.
            string userinput = default;     // 플레이어가 문자열로 입력할 베팅 포인트
            int playerbet = default;        // 입력받은 베팅포인트를 정수로 변환하여 받을 최종 베팅포인트

            Random rand = new Random();     // 랜덤값을 받기 위한 함수

            while (true)
            {
                for (int i = 0; i < drawCard.Length; i++)       // 컴퓨터가 뽑을 2장의 카드, 플레이어가 뽑을 1장의 카드 총 3장
                {
                    drawCard[i] = rand.Next(1, 52);     // 뽑게될 카드 3장에는 1 ~ 52 까지 랜덤한 값을 받을것 (4 문양별 13장씩 총 52장)
                }

                // 승,패 조건 비교를 편하게 하려고 만든 변수
                int computercard1 = drawCard[0];
                int computercard2 = drawCard[1];
                int playercard = drawCard[2];

                Console.WriteLine("\t컴퓨터가 뽑은 카드\t\t 플레이어 현재 보유 포인트 : {0}", playerpoint);
                Console.WriteLine();

                if (computercard1 <13 && computercard2 < 13)       // 각 주소 [0], [1] 은 컴퓨터가 뽑은 카드 두장이다. 그 중 13이하 숫자 카드는
                                                                   // 스페이드 문양으로 할당한다.
                {
                    Console.WriteLine(" _______________       _______________");
                    Console.WriteLine("ㅣ             ㅣ     ㅣ             ㅣ");
                    Console.WriteLine("ㅣ{0}            ㅣ     ㅣ{1}            ㅣ", computercard1 % 13 + 1, computercard2 % 13 + 1);
                    Console.WriteLine("ㅣ{0}           ㅣ     ㅣ{1}           ㅣ", cardPattern[0], cardPattern[0]);
                    Console.WriteLine("ㅣ             ㅣ     ㅣ             ㅣ");
                    Console.WriteLine("ㅣ             ㅣ     ㅣ             ㅣ");
                    Console.WriteLine("ㅣ             ㅣ     ㅣ             ㅣ");
                    Console.WriteLine("ㅣ             ㅣ     ㅣ             ㅣ");
                    Console.WriteLine("ㅣ          {0} ㅣ     ㅣ          {1} ㅣ", cardPattern[0], cardPattern[0]);
                    Console.WriteLine("ㅣ          {0}  ㅣ     ㅣ          {1}  ㅣ", computercard1 % 13 + 1, computercard2 % 13 + 1);
                    Console.WriteLine("ㅣ_____________ㅣ     ㅣ_____________ㅣ");
                }

                else if (drawCard[0] < 26 && drawCard[1] < 26)      // 이하 동문, 14 ~ 26 숫자는 하트 문양으로 할당한다.
                {

                    Console.WriteLine(" _______________       _______________");
                    Console.WriteLine("ㅣ             ㅣ     ㅣ             ㅣ");
                    Console.WriteLine("ㅣ{0}            ㅣ     ㅣ{1}            ㅣ", computercard1 % 13 + 1, computercard2 % 13 + 1);
                    Console.WriteLine("ㅣ{0}           ㅣ     ㅣ{1}           ㅣ", cardPattern[1], cardPattern[1]);
                    Console.WriteLine("ㅣ             ㅣ     ㅣ             ㅣ");
                    Console.WriteLine("ㅣ             ㅣ     ㅣ             ㅣ");
                    Console.WriteLine("ㅣ             ㅣ     ㅣ             ㅣ");
                    Console.WriteLine("ㅣ             ㅣ     ㅣ             ㅣ");
                    Console.WriteLine("ㅣ          {0} ㅣ     ㅣ          {1} ㅣ", cardPattern[1], cardPattern[1]);
                    Console.WriteLine("ㅣ          {0}  ㅣ     ㅣ          {1}  ㅣ", computercard1 % 13 + 1, computercard2 % 13 + 1);
                    Console.WriteLine("ㅣ_____________ㅣ     ㅣ_____________ㅣ");
                }

                else if (drawCard[0] < 39 && drawCard[1] < 39)      // 이하 동문, 27 ~ 39 숫자는 다이아 문양으로 할당한다.
                {
                    Console.WriteLine(" _______________       _______________");
                    Console.WriteLine("ㅣ             ㅣ     ㅣ             ㅣ");
                    Console.WriteLine("ㅣ{0}            ㅣ     ㅣ{1}            ㅣ", computercard1 % 13 + 1, computercard2 % 13 + 1);
                    Console.WriteLine("ㅣ{0}           ㅣ     ㅣ{1}           ㅣ", cardPattern[2], cardPattern[2]);
                    Console.WriteLine("ㅣ             ㅣ     ㅣ             ㅣ");
                    Console.WriteLine("ㅣ             ㅣ     ㅣ             ㅣ");
                    Console.WriteLine("ㅣ             ㅣ     ㅣ             ㅣ");
                    Console.WriteLine("ㅣ             ㅣ     ㅣ             ㅣ");
                    Console.WriteLine("ㅣ          {0} ㅣ     ㅣ          {1} ㅣ", cardPattern[2], cardPattern[2]);
                    Console.WriteLine("ㅣ          {0}  ㅣ     ㅣ          {1}  ㅣ", computercard1 % 13 + 1, computercard2 % 13 + 1);
                    Console.WriteLine("ㅣ_____________ㅣ     ㅣ_____________ㅣ");
                }

                else                                                // 이하 동문, 40 ~ 52 숫자는 클로버 문양으로 할당한다.
                {
                    Console.WriteLine(" _______________       _______________");
                    Console.WriteLine("ㅣ             ㅣ     ㅣ             ㅣ");
                    Console.WriteLine("ㅣ{0}            ㅣ     ㅣ{1}            ㅣ", computercard1 % 13 + 1, computercard2 % 13 + 1);
                    Console.WriteLine("ㅣ{0}           ㅣ     ㅣ{1}           ㅣ", cardPattern[3], cardPattern[3]);
                    Console.WriteLine("ㅣ             ㅣ     ㅣ             ㅣ");
                    Console.WriteLine("ㅣ             ㅣ     ㅣ             ㅣ");
                    Console.WriteLine("ㅣ             ㅣ     ㅣ             ㅣ");
                    Console.WriteLine("ㅣ             ㅣ     ㅣ             ㅣ");
                    Console.WriteLine("ㅣ          {0} ㅣ     ㅣ          {1} ㅣ", cardPattern[3], cardPattern[3]);
                    Console.WriteLine("ㅣ          {0}  ㅣ     ㅣ          {1}  ㅣ", computercard1 % 13 + 1,computercard2 % 13 + 1);
                    Console.WriteLine("ㅣ_____________ㅣ     ㅣ_____________ㅣ");
                }

 
                Console.WriteLine();

                Console.Write("베팅할 점수를 입력해 주세요 : ");

                userinput = Console.ReadLine();       // 플레이어가 입력할 베팅점수

                int.TryParse(userinput, out playerbet);       // 유저가 입력한 문자를 정수로 변환해서 플레이어 포인트에 대입.

                playerpoint -= playerbet;             // 플레이어는 현재 가지고 있는 포인트에서 베팅 포인트만큼 차감된다.

                Console.WriteLine();
                Console.WriteLine();

                Console.WriteLine("플레이어가 카드를 뽑습니다.");

                Thread.Sleep(2000);

                if (drawCard[2] < 13)       // 컴퓨터가 뽑는 카드들과 같은 메커니즘으로 문양이 결정된다.
                {
                    Console.WriteLine("\t _______________");
                    Console.WriteLine("\tㅣ             ㅣ");
                    Console.WriteLine("\tㅣ{0}           ㅣ", playercard % 13 + 1);
                    Console.WriteLine("\tㅣ{0}           ㅣ", cardPattern[0]);
                    Console.WriteLine("\tㅣ             ㅣ");
                    Console.WriteLine("\tㅣ             ㅣ");
                    Console.WriteLine("\tㅣ             ㅣ");
                    Console.WriteLine("\tㅣ             ㅣ");
                    Console.WriteLine("\tㅣ          {0} ㅣ", cardPattern[0]);
                    Console.WriteLine("\tㅣ          {0} ㅣ", playercard % 13 + 1);
                    Console.WriteLine("\tㅣ_____________ㅣ");
                }


                else if (drawCard[2] < 26)
                {
                    Console.WriteLine("\t _______________");
                    Console.WriteLine("\tㅣ             ㅣ");
                    Console.WriteLine("\tㅣ{0}           ㅣ", playercard % 13 + 1);
                    Console.WriteLine("\tㅣ{0}           ㅣ", cardPattern[1]);
                    Console.WriteLine("\tㅣ             ㅣ");
                    Console.WriteLine("\tㅣ             ㅣ");
                    Console.WriteLine("\tㅣ             ㅣ");
                    Console.WriteLine("\tㅣ             ㅣ");
                    Console.WriteLine("\tㅣ          {0} ㅣ", cardPattern[1]);
                    Console.WriteLine("\tㅣ          {0} ㅣ", playercard % 13 + 1);
                    Console.WriteLine("\tㅣ_____________ㅣ");
                }

                else if (drawCard[2] < 39)
                {
                    Console.WriteLine("\t _______________");
                    Console.WriteLine("\tㅣ             ㅣ");
                    Console.WriteLine("\tㅣ{0}           ㅣ", playercard % 13 + 1);
                    Console.WriteLine("\tㅣ{0}           ㅣ", cardPattern[2]);
                    Console.WriteLine("\tㅣ             ㅣ");
                    Console.WriteLine("\tㅣ             ㅣ");
                    Console.WriteLine("\tㅣ             ㅣ");
                    Console.WriteLine("\tㅣ             ㅣ");
                    Console.WriteLine("\tㅣ          {0} ㅣ", cardPattern[2]);
                    Console.WriteLine("\tㅣ          {0} ㅣ", playercard % 13 + 1);
                    Console.WriteLine("\tㅣ_____________ㅣ");
                }

                else
                {
                    Console.WriteLine("\t _______________");
                    Console.WriteLine("\tㅣ             ㅣ");
                    Console.WriteLine("\tㅣ{0}           ㅣ", playercard % 13 + 1);
                    Console.WriteLine("\tㅣ{0}           ㅣ", cardPattern[3]);
                    Console.WriteLine("\tㅣ             ㅣ");
                    Console.WriteLine("\tㅣ             ㅣ");
                    Console.WriteLine("\tㅣ             ㅣ");
                    Console.WriteLine("\tㅣ             ㅣ");
                    Console.WriteLine("\tㅣ          {0} ㅣ", cardPattern[3]);
                    Console.WriteLine("\tㅣ          {0} ㅣ", playercard % 13 + 1);
                    Console.WriteLine("\tㅣ_____________ㅣ");
                }

                // 승,패 조건 비교를 위해 미리 계산값 대입

                computercard1 = drawCard[0] % 13 + 1;
                computercard2 = drawCard[1] % 13 + 1;
                playercard = drawCard[2] % 13 + 1;

                // 컴퓨터가 뽑은 카드 두장 사이의 범위에 있을때 승리 
                // 컴퓨터 카드1 < 플레이어 카드 < 컴퓨터 카드2
                // 컴퓨터 카드2 < 플레이어 카드 < 컴퓨터 카드1
                // 두가지 경우를 상정한다.

                if (computercard1 < playercard && playercard < computercard2 || computercard2 < playercard && playercard < computercard1)
                {
                    playerpoint = playerpoint + (playerbet * 2);        // 범위에 해당하는 카드를 뽑았을시 베팅 포인트의 2배를 현재 포인트에 더한다.
                    Console.WriteLine("플레이어의 승리! 베팅하신 포인트의 2배를 얻습니다.");
                    Console.WriteLine("현재 남은 포인트 : {0}", playerpoint);

                    if(playerpoint >= 10000)        // 첫번째 게임 탈출문, 목표로 잡은 점수에 도달할시 게임 승리 문구와 함께 게임종료.
                    {
                        Console.WriteLine("최고 포인트에 도달했습니다! 플레이어의 승리");
                        Console.WriteLine("Enter키를 입력하시면 게임을 종료합니다..");
                        Console.ReadLine();
                        break;

                    }

                    // 키입력과 함께 화면을 지우며 초기 화면으로 돌아간다.
                    Console.WriteLine("Enter키를 입력하시면 컴퓨터가 다시 카드를 뽑습니다 ");
                    Console.ReadLine();
                    Thread.Sleep(1500);
                    Console.Clear();
                    
                }

                else            // 플레이어 카드가 조건범위 밖일시 패배
                {
                    Console.WriteLine("플레이어의 패배... 베팅하신 포인트는 소멸 됩니다.");
                    Console.WriteLine("현재 남은 포인트 : {0}", playerpoint); 

                    if (playerpoint <= 0)       // 두번째 게임 탈출문, 가진 포인트가 0이하가 될시 게임 패배 문구와 함께 게임 종료.
                    {
                        Console.WriteLine("가지고 계신 포인트가 모두 차감되어 게임을 진행할수 없습니다...");
                        break;
                    }


                    // 키입력과 함께 화면을 지우며 초기 화면으로 돌아간다.
                    Console.WriteLine("Enter키를 입력하시면 컴퓨터가 다시 카드를 뽑습니다 ");
                    Console.ReadLine();
                    Thread.Sleep(1500);
                    Console.Clear();
                }

            }
        }
        
    }
}


