using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace _2023_06_09_C__Test_Project
{
    public class Program
    {
        static void Main(string[] args)
        {
            //Description001();

            //int[] numbers = new int[5];
            //int[,] numbers2 = new int[5, 5];

            //int valuecount = 0;

            //for(int y =0; y<5; y++)
            //{
            //    for(int x = 0; x<5; x++)
            //    {
            //        valuecount += 1;
            //        numbers2[y, x] = valuecount;
            //    }

            //}

            //PrintMyArray(numbers2);

            // Random random = new Random();
            // int[] lottos = new int[6];

            // for(int i=0; i<lottos.Length; i++)
            // {
            //     lottos[i] = random.Next(1, 45);
            // }
            //// Thread.Sleep(1000);

            // foreach (int lotto_ in lottos)
            // {
            //     Console.Write("{0} ", lotto_);
            //     //Task.Delay(1000).Wait();
            //     Thread.Sleep(1000);
            // }

            // Console.WriteLine();

            Trump();
            //pattern();


        }

        static void PrintMyArray(int[,] array_)
        {
            for (int y = 0; y < 5; y++)
            {
                for (int x = 0; x < 5; x++)
                {
                    Console.Write("{0} ", array_[y, x]);
                }
                Console.WriteLine();
            }
            Console.WriteLine();
        }

        static void Description001()
        {
            Console.WriteLine("Hello World \n");

            string userInput1 = default;
            string userInput2 = default;
            int number = default;
            float floatnumber = default;

            int userNumber1 = default;
            int userNumber2 = default;

            // 여기서 입력을 받는다.
            
            userInput1 = Console.ReadLine();
            userInput2 = Console.ReadLine();

            // 입력 받은 것을 숫자로 변환한다.

            //userNumber1 = System.Convert.ToInt32(userInput1);
            //userNumber2 = System.Convert.ToInt32(userInput2);

            //userNumber1 = int.Parse(userInput1);
            //userNumber2 = int.Parse(userInput2);

            int.TryParse(userInput1, out userNumber1);
            int.TryParse(userInput2, out userNumber2);


            Console.WriteLine("{0} + {1} = {2} \n",
                userNumber1, userNumber2, userNumber1 + userNumber2);

            //Console.WriteLine("입력 받은 내용을 출력하고 싶어 -> {1}, {0}\n\n", userInput1, userInput2);
        }

        static void Trump()
        {
            Random random = new Random();

            int[] playercard = new int[2];
            int[] computercard = new int[2];

            for(int i = 0; i < 2; i++)
            {
                playercard[i] = random.Next(1,13);
                computercard[i] = random.Next(1, 13);
            }
            


        }
    }

}


// 플레이어와 컴퓨터가 각각 카드를 2장씩 뽑는다. 두 카드의 합이 더 큰 쪽이 승리, 작은 쪽은 패배한다.
// 동일한 숫자가 나올 경우 문양은 -> 스페이드, 다이아몬드, 하트, 클로버 순서로 승리한다.
